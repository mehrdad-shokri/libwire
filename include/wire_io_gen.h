#ifndef WIRE_LIB_IO_GEN_H
#define WIRE_LIB_IO_GEN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/vfs.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <netdb.h>
#include <ifaddrs.h>
int wio_open(const char *pathname, int flags, mode_t mode);
int wio_close(int fd);
ssize_t wio_pread(int fd, void *buf, size_t count, off_t offset);
ssize_t wio_pwrite(int fd, const void *buf, size_t count, off_t offset);
ssize_t wio_read(int fd, void *buf, size_t count);
ssize_t wio_write(int fd, const void *buf, size_t count);
int wio_fstat(int fd, struct stat *buf);
int wio_stat(const char *path, struct stat *buf);
int wio_ftruncate(int fd, off_t length);
int wio_fallocate(int fd, int mode, off_t offset, off_t len);
int wio_fsync(int fd);
int wio_statfs(const char *path, struct statfs *buf);
int wio_fstatfs(int fd, struct statfs *buf);
int wio_getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res);
int wio_ioctl(int d, unsigned long request, void *argp);
int wio_getifaddrs(struct ifaddrs **ifap);

#endif
