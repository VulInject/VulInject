
#include "tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control_util.h"

#include <math.h>
#include <stdio.h>

#define kint16max 0x00007FFF

void PcanGainControlFillConfigWithDefaults(
    struct PcanGainControlConfig* config) {
  config->enable_pcan = 0;
  config->strength = 0.95;
  config->offset = 80.0;
  config->gain_bits = 21;
}

short PcanGainLookupFunction(const struct PcanGainControlConfig* config,
                               int input_bits, unsigned int x) {
  const float x_as_float = ((float)x) / ((unsigned int)1 << input_bits);
  const float gain_as_float =
      ((unsigned int)1 << config->gain_bits) *
      powf(x_as_float + config->offset, -config->strength);

  if (gain_as_float > kint16max) {
    return kint16max;
  }
  return (short)(gain_as_float + 0.5f);
}

int PcanGainControlPopulateState(const struct PcanGainControlConfig* config,
                                 struct PcanGainControlState* state,
                                 unsigned int* noise_estimate,
                                 const int num_channels,
                                 const unsigned short smoothing_bits,
                                 const int input_correction_bits) {
  state->enable_pcan = config->enable_pcan;
  if (!state->enable_pcan) {
    return 1;
  }
  state->noise_estimate = noise_estimate;
  state->num_channels = num_channels;
  state->gain_lut = malloc(kWideDynamicFunctionLUTSize * sizeof(short));
  if (state->gain_lut == NULL) {
    fprintf(stderr, "Failed to allocate gain LUT\n");
    return 0;
  }
  state->snr_shift = config->gain_bits - input_correction_bits - kPcanSnrBits;

  const int input_bits = smoothing_bits - input_correction_bits;
  state->gain_lut[0] = PcanGainLookupFunction(config, input_bits, 0);
  state->gain_lut[1] = PcanGainLookupFunction(config, input_bits, 1);
  state->gain_lut -= 6;
  int interval;
  for (interval = 2; interval <= kWideDynamicFunctionBits; ++interval) {
    const unsigned int x0 = (unsigned int)1 << (interval - 1);
    const unsigned int x1 = x0 + (x0 >> 1);
    const unsigned int x2 =
        (interval == kWideDynamicFunctionBits) ? x0 + (x0 - 1) : 2 * x0;

    const short y0 = PcanGainLookupFunction(config, input_bits, x0);
    const short y1 = PcanGainLookupFunction(config, input_bits, x1);
    const short y2 = PcanGainLookupFunction(config, input_bits, x2);

    const int diff1 = (int)y1 - y0;
    const int diff2 = (int)y2 - y0;
    const int a1 = 4 * diff1 - diff2;
    const int a2 = diff2 - a1;

    state->gain_lut[4 * interval] = y0;
    state->gain_lut[4 * interval + 1] = (short)a1;
    state->gain_lut[4 * interval + 2] = (short)a2;
  }
  state->gain_lut += 6;
  return 1;
}

void PcanGainControlFreeStateContents(struct PcanGainControlState* state) {
  free(state->gain_lut);
}
