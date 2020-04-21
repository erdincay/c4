#ifndef _UTILS_H_
#define _UTILS_H_

/// returns hash value for a given file

void hashfile(char* path);

/// returns some content by opening a file

void content(char* path, int chars);

/// returns all directories of a given folder

void directories(char* path);

/// returns all files of a given folder 

void files(char* path);

/// log the error message

void log_error(char* log_message, char* file_name, int line_number);

#endif /* _UTILS_H_ */