
#include <stdio.h>

#include "memmap.h"
#include "tensorflow/lite/experimental/microfrontend/lib/frontend.h"

int main(int argc, char** argv) {
  struct FrontendState* frontend_state = GetFrontendStateMemmap();

  char* filename = argv[1];
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) {
    fprintf(stderr, "Failed to open %s for read\n", filename);
    return 1;
  }
  fseek(fp, 0L, SEEK_END);
  size_t audio_file_size = ftell(fp) / sizeof(short);
  fseek(fp, 0L, SEEK_SET);
  short* audio_data = malloc(audio_file_size * sizeof(short));
  short* original_audio_data = audio_data;
  if (audio_file_size !=
      fread(audio_data, sizeof(short), audio_file_size, fp)) {
    fprintf(stderr, "Failed to read in all audio data\n");
    fclose(fp);
    return 1;
  }

  while (audio_file_size > 0) {
    size_t num_samples_read;
    struct FrontendOutput output = FrontendProcessSamples(
        frontend_state, audio_data, audio_file_size, &num_samples_read);
    audio_data += num_samples_read;
    audio_file_size -= num_samples_read;

    if (output.values != NULL) {
      int i;
      for (i = 0; i < output.size; ++i) {
        printf("%d ", output.values[i]);
      }
      printf("\n");
    }
  }

  free(original_audio_data);
  fclose(fp);
  return 0;
}
