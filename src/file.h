#ifndef FILE_JUGGLER_FILE_H
#define FILE_JUGGLER_FILE_H

#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <string.h>

#include "blocks.h"

int OpenFile(const char* file_name);

int CreateFile(const char* file_name);

void CloseFile(int fd);

size_t GetFileSize(int fd);

int WriteSignature(int fd, const char* name, int year, double version);

block ReadBlock(int fd, int block_size, int offset);

int WriteBlock(int fd, int block_size, int offset, block data);

#endif //FILE_JUGGLER_FILE_H
