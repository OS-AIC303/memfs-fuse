#include <stdint.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include "dir.h"
#include "node.h"
#include "statistics.h"

/* Recursive helper function */
static void collect_node_statistics(
    struct node *node,
    struct fs_statistics *stats)
{
    if (node == NULL)
        return;

    if (S_ISREG(node->vstat.st_mode)) {
        stats->files++;
        stats->total_bytes += node->vstat.st_size;
    }
    else if (S_ISLNK(node->vstat.st_mode)) {
        stats->symlinks++;
    }
    else if (S_ISDIR(node->vstat.st_mode)) {
        stats->directories++;

        struct direntry *entry =
            (struct direntry *)node->data;

        while (entry != NULL) {
            collect_node_statistics(entry->node, stats);
            entry = entry->next;
        }
    }
}

/* Collect and print filesystem statistics */
void collect_statistics(struct node *root)
{
        struct fs_statistics stats = {0};
        
        /* Traverse the filesystem from its root */
        collect_node_statistics(root, &stats);
        
        /* Print the collected statistics */
        fprintf(stderr,
                "[MEMFS STATS] Files: %zu, "
                "Directories: %zu, "
                "Symlinks: %zu, "
                "Total bytes: %lu\n",
                stats.files,
                stats.directories,
                stats.symlinks,
                stats.total_bytes);
}
