

#include <limits.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#ifdef _WIN32
#include <process.h>
#endif

#include "tensorflow/c/c_api.h"
#include "tensorflow/c/c_api_experimental.h"
#include "tensorflow/c/env.h"
#include "tensorflow/c/kernels.h"



void* create(TF_OpKernelConstruction* ctx) {
  TF_DataType type;
  TF_Status* s = TF_NewStatus();
  TF_OpKernelConstruction_GetAttrType(ctx, "foobar", &type, s);
  TF_DeleteStatus(s);
  return NULL;
}



void compute(void* kernel, TF_OpKernelContext* ctx) {
  TF_Tensor* input;
  TF_Status* s = TF_NewStatus();
  TF_GetInput(ctx, 0, &input, s);
  TF_DeleteTensor(input);
  TF_DeleteStatus(s);
}


int main(int argc, char** argv) {
  TF_InitMain(argv[0], &argc, &argv);

  struct TF_StringStream* s = TF_GetLocalTempDirectories();
  const char* path;

  if (!TF_StringStreamNext(s, &path)) {
    fprintf(stderr, "TF_GetLocalTempDirectories returned no results\n");
    return 1;
  }

  char file_name[100];
  time_t t = time(NULL);
  snprintf(file_name, sizeof(file_name), "test-%d-%ld.txt", getpid(), t);

  size_t length = 2 + strlen(path) + strlen(file_name);
  char* full_path = malloc(length);
  snprintf(full_path, length, "%s/%s", path, file_name);

  TF_WritableFileHandle* h;
  TF_Status* status = TF_NewStatus();
  TF_NewWritableFile(full_path, &h, status);
  if (TF_GetCode(status) != TF_OK) {
    fprintf(stderr, "TF_NewWritableFile failed: %s\n", TF_Message(status));
    return 1;
  }
  fprintf(stderr, "wrote %s\n", full_path);
  free(full_path);
  TF_CloseWritableFile(h, status);
  if (TF_GetCode(status) != TF_OK) {
    fprintf(stderr, "TF_CloseWritableFile failed: %s\n", TF_Message(status));
  }
  TF_StringStreamDone(s);

  TF_KernelBuilder* b =
      TF_NewKernelBuilder("SomeOp", "SomeDevice", &create, &compute, NULL);
  TF_RegisterKernelBuilder("someKernel", b, status);

  TF_DeleteStatus(status);
  return 0;
}
