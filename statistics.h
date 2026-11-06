#include <stdint.h>
#include <unistd.h>
#include "dir.h"
#include "node.h"

#ifndef _STATISTICS_H
#define _STATISTICS_H

/* Statistics collected from the filesystem */
struct fs_statistics {
    size_t files;
    size_t directories;
    size_t symlinks;
    uint64_t total_bytes;
};

void collect_statistics(struct node *root);

#endif
