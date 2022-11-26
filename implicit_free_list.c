//
// Created by 庄苏煜 on 2022/11/26.
//
#include <unistd.h>
#include "implicit_free_list.h"


/**
 * 释放块
 * @param ptr 释放的块的指针
 */
void my_free(void *ptr) {

}

/**
 * 申请一个size大小的块
 *
 * @param size 申请的空间的大小
 * @return 申请成功，返回块的指针，申请失败则返回NULL
 */
void *my_malloc(size_t size) {
    void *old_block;
    old_block = sbrk(size);
    if (old_block == (void *)-1) {
        return NULL;
    }
    return old_block;
}