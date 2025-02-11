#ifndef LROCKSDB_TYPES_H
#define LROCKSDB_TYPES_H
extern "C" {
#include "rocksdb/c.h"
}

typedef  struct {
 rocksdb_options_t *options;
} lrocksdb_options_t;

typedef  struct {
 rocksdb_writeoptions_t *writeoptions;
} lrocksdb_writeoptions_t;

typedef  struct {
 rocksdb_readoptions_t *readoptions;
} lrocksdb_readoptions_t;

typedef  struct {
 rocksdb_restore_options_t *restoreoptions;
} lrocksdb_restoreoptions_t;

typedef struct {
    rocksdb_t *db;
    lrocksdb_options_t *options;
    unsigned char open;
    unsigned char read_only;
} lrocksdb_t;
typedef struct {
    rocksdb_t *db;
    lrocksdb_options_t *options;
    rocksdb_column_family_handle_t* *handles ;
    rocksdb_options_t*  const *cf_opts ; 
    const char* *cf_names;
    unsigned int column_count;
    unsigned char open;
    unsigned char read_only;
} lrocksdb_cf_t;

typedef struct {
  rocksdb_backup_engine_t *backup_engine;
} lrocksdb_backup_engine_t;

typedef struct {
  rocksdb_column_family_handle_t* handle;
  rocksdb_writebatch_t *writebatch;
} lrocksdb_writebatch_cf_t;
typedef struct {
  rocksdb_writebatch_t *writebatch;
} lrocksdb_writebatch_t;

typedef struct {
  rocksdb_iterator_t *iter;
} lrocksdb_iterator_t;

#endif
