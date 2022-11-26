# 写一个内存管理器

## sbrk 版本

虽然sbrk有线程安全问题，glibc 仍然使用该方法来实现小容量的内存分配工作。


参考：
https://arjunsreedharan.org/post/148675821737/memory-allocators-101-write-a-simple-memory