#pragma once

#include "strproc.h"

#include <stdio.h>

struct tbl_col {
    rw_callback handler, handler;
    void *ptr, *context;
};

typedef bool (*tbl_selector_callback)(struct tbl_col *, size_t, size_t, void *, void *);
typedef bool (*tbl_row_finalizer_callback)(size_t, void *, void *);


size_t row_count(FILE *, int64_t, size_t);
uint64_t row_align(FILE *, int64_t);

bool tbl_read(char *, tbl_selector_callback, tbl_selector_callback, void *, void *, size_t *, size_t *, size_t *, char, struct log *);
