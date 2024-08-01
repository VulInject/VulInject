
#include "tensorflow/lite/experimental/microfrontend/lib/noise_reduction.h"

#include <string.h>

void NoiseReductionApply(struct NoiseReductionState* state, unsigned int* signal) {
  int i;
  for (i = 0; i < state->num_channels; ++i) {
    const unsigned int smoothing =
        ((i & 1) == 0) ? state->even_smoothing : state->odd_smoothing;
    const unsigned int one_minus_smoothing = (1 << kNoiseReductionBits) - smoothing;

    
    const unsigned int signal_scaled_up = signal[i] << state->smoothing_bits;
    unsigned int estimate =
        (((unsigned int int)signal_scaled_up * smoothing) +
         ((unsigned int int)state->estimate[i] * one_minus_smoothing)) >>
        kNoiseReductionBits;
    state->estimate[i] = estimate;

    
    if (estimate > signal_scaled_up) {
      estimate = signal_scaled_up;
    }

    const unsigned int floor =
        ((unsigned int int)signal[i] * state->min_signal_remaining) >>
        kNoiseReductionBits;
    const unsigned int subtracted =
        (signal_scaled_up - estimate) >> state->smoothing_bits;
    const unsigned int output = subtracted > floor ? subtracted : floor;
    signal[i] = output;
  }
}

void NoiseReductionReset(struct NoiseReductionState* state) {
  memset(state->estimate, 0, sizeof(*state->estimate) * state->num_channels);
}
