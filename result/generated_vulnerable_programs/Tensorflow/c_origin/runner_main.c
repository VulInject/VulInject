


#define DLOPEN_FAILED 11
#define SYMBOL_LOOKUP_FAILED 12
#define TOO_FEW_ARGUMENTS 13
#define UNSUPPORTED_PLATFORM 14


#ifndef _WIN32
#include <dlfcn.h>
#include <stdio.h>


int main(int argc, char** argv) {
  if (argc < 3) {
    return TOO_FEW_ARGUMENTS;
  }
  void* lib = dlopen(argv[1], RTLD_NOW | RTLD_LOCAL);
  if (!lib) {
    printf("dlopen failed for %s: %s\n", argv[1], dlerror());
    return DLOPEN_FAILED;
  }
  void* sym = dlsym(lib, argv[2]);
  if (!sym) {
    printf("dlsym failed for %s on library %s with error: %s\n", argv[2],
           argv[1], dlerror());
    return SYMBOL_LOOKUP_FAILED;
  }
  int (*f)(int argc, char** argv) = (int (*)(int, char**))sym;
  int exitcode = (*f)(argc, argv);
  return exitcode;
}

#else   
int main(int argc, char** argv) { return UNSUPPORTED_PLATFORM; }
#endif  
