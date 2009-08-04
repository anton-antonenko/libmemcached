/*
 * Summary: Flush functions for libmemcached
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Trond Norbye
 */

#ifndef LIBMEMCACHED_MEMCACHED_FLUSH_BUFFERS_H
#define LIBMEMCACHED_MEMCACHED_FLUSH_BUFFERS_H

#ifndef LIBMEMCACHED_MEMCACHED_H
#error "Please include <libmemcached/memcached.h> instead"
#endif

#ifdef __cplusplus
extern "C" {
#endif

LIBMEMCACHED_API
memcached_return memcached_flush_buffers(memcached_st *mem);

#ifdef __cplusplus
}
#endif

#endif /* LIBMEMCACHED_MEMCACHED_FLUSH_BUFFERS_H */
