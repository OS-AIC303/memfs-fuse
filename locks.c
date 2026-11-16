#include <pthread.h>
#include "locks.h"

// Simple lock interface.
void mutex_init(struct mutex *lock)
{
  pthread_mutex_init(&(m->lock), NULL);
}

void mutex_lock(struct mutex *lock)
{
  pthread_mutex_lock(&(m->lock), NULL);
}

void mutex_unlock(struct mutex *lock)
{
  pthread_mutex_unlock(&(m->lock), NULL);
}

void mutex_destroy(struct mutex *lock)
{
  pthread_mutex_destroy(&(m->lock), NULL);
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

