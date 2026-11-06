#include <pthread.h>
#include "locks.h"

// Simple lock interface.
void mutex_init(struct mutex *lock)
{
}

void mutex_lock(struct mutex *lock)
{
}

void mutex_unlock(struct mutex *lock)
{
}

void mutex_destroy(struct mutex *lock)
{
}

// Read-write lock interface.
void rwmutex_init(struct rwmutex *rwlock)
{
}

void rwmutex_read_lock(struct rwmutex *rwlock)
{
}

void rwmutex_write_lock(struct rwmutex *rwlock)
{
}

void rwmutex_read_unlock(struct rwmutex *rwlock)
{
}

void rwmutex_write_unlock(struct rwmutex *rwlock)
{
}

void rwmutex_destroy(struct rwmutex *rwlock)
{
}

