
#include "tensorflow/lite/experimental/microfrontend/lib/pcan_gain_control.h"

#include "tensorflow/lite/experimental/microfrontend/lib/bits.h"

short WideDynamicFunction(const unsigned int x, const short* lut) {
  if (x <= 2) {
    return lut[x];
  }

  const short interval = MostSignificantBit32(x);
  lut += 4 * interval - 6;

  const short frac =
      ((interval < 11) ? (x << (11 - interval)) : (x >> (interval - 11))) &
      0x3FF;

  int result = ((int)lut[2] * frac) >> 5;
  result += (int)((unsigned int)lut[1] << 5);
  result *= frac;
  result = (result + (1 << 14)) >> 15;
  result += lut[0];
  return (short)result;
}

unsigned int PcanShrink(const unsigned int x) {
  if (x < (2 << kPcanSnrBits)) {
    return (x * x) >> (2 + 2 * kPcanSnrBits - kPcanOutputBits);
  } else {
    return (x >> (kPcanSnrBits - kPcanOutputBits)) - (1 << kPcanOutputBits);
  }
}

void PcanGainControlApply(struct PcanGainControlState* state,
                          unsigned int* signal) {
  int i;
  for (i = 0; i < state->num_channels; ++i) {
    const unsigned int gain =
        WideDynamicFunction(state->noise_estimate[i], state->gain_lut);
    const unsigned int snr = ((unsigned int int)signal[i] * gain) >> state->snr_shift;
    signal[i] = PcanShrink(snr);
  }
}
