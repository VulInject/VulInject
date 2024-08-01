
#include "tensorflow/lite/experimental/microfrontend/lib/window_io.h"

void WindowWriteMemmapPreamble(FILE* fp, const struct WindowState* state) {
  fprintf(fp, "static short window_coefficients[] = {\n");
  int i;
  for (i = 0; i < state->size; ++i) {
    fprintf(fp, "%d", state->coefficients[i]);
    if (i < state->size - 1) {
      fprintf(fp, ", ");
    }
  }
  fprintf(fp, "};\n");
  fprintf(fp, "static short window_input[%zu];\n", state->size);
  fprintf(fp, "static short window_output[%zu];\n", state->size);
  fprintf(fp, "\n");
}

void WindowWriteMemmap(FILE* fp, const struct WindowState* state,
                       const char* variable) {
  fprintf(fp, "%s->size = %zu;\n", variable, state->size);
  fprintf(fp, "%s->coefficients = window_coefficients;\n", variable);
  fprintf(fp, "%s->step = %zu;\n", variable, state->step);

  fprintf(fp, "%s->input = window_input;\n", variable);
  fprintf(fp, "%s->input_used = %zu;\n", variable, state->input_used);
  fprintf(fp, "%s->output = window_output;\n", variable);
  fprintf(fp, "%s->max_abs_output_value = %d;\n", variable,
          state->max_abs_output_value);
}
