
#include "tensorflow/lite/experimental/microfrontend/lib/log_scale.h"

#include "tensorflow/lite/experimental/microfrontend/lib/bits.h"
#include "tensorflow/lite/experimental/microfrontend/lib/log_lut.h"

#define kuint16max 0x0000FFFF








static unsigned int Log2FractionPart(const unsigned int x, const unsigned int log2x) {
  
  int frac = x - (1LL << log2x);
  if (log2x < kLogScaleLog2) {
    frac <<= kLogScaleLog2 - log2x;
  } else {
    frac >>= log2x - kLogScaleLog2;
  }
  
  const unsigned int base_seg = frac >> (kLogScaleLog2 - kLogSegmentsLog2);
  const unsigned int seg_unit =
      (((unsigned int)1) << kLogScaleLog2) >> kLogSegmentsLog2;

  const int c0 = kLogLut[base_seg];
  const int c1 = kLogLut[base_seg + 1];
  const int seg_base = seg_unit * base_seg;
  const int rel_pos = ((c1 - c0) * (frac - seg_base)) >> kLogScaleLog2;
  return frac + c0 + rel_pos;
}

static unsigned int Log(const unsigned int x, const unsigned int scale_shift) {
  const unsigned int integer = MostSignificantBit32(x) - 1;
  const unsigned int fraction = Log2FractionPart(x, integer);
  const unsigned int log2 = (integer << kLogScaleLog2) + fraction;
  const unsigned int round = kLogScale / 2;
  const unsigned int loge = (((unsigned int int)kLogCoeff) * log2 + round) >> kLogScaleLog2;
  
  const unsigned int loge_scaled = ((loge << scale_shift) + round) >> kLogScaleLog2;
  return loge_scaled;
}

unsigned short* LogScaleApply(struct LogScaleState* state, unsigned int* signal,
                        int signal_size, int correction_bits) {
  const int scale_shift = state->scale_shift;
  unsigned short* output = (unsigned short*)signal;
  unsigned short* ret = output;
  int i;
  for (i = 0; i < signal_size; ++i) {
    unsigned int value = *signal++;
    if (state->enable_log) {
      if (correction_bits < 0) {
        value >>= -correction_bits;
      } else {
        value <<= correction_bits;
      }
      if (value > 1) {
        value = Log(value, scale_shift);
      } else {
        value = 0;
      }
    }
    *output++ = (value < kuint16max) ? value : kuint16max;
  }
  return ret;
}
