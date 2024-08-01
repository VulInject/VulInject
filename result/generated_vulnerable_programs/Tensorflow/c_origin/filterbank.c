
#include "tensorflow/lite/experimental/microfrontend/lib/filterbank.h"

#include <string.h>

#include "tensorflow/lite/experimental/microfrontend/lib/bits.h"

void FilterbankConvertFftComplexToEnergy(struct FilterbankState* state,
                                         struct complex_int16_t* fft_output,
                                         int* energy) {
  const int end_index = state->end_index;
  int i;
  energy += state->start_index;
  fft_output += state->start_index;
  for (i = state->start_index; i < end_index; ++i) {
    const int real = fft_output->real;
    const int imag = fft_output->imag;
    fft_output++;
    const unsigned int mag_squared = (real * real) + (imag * imag);
    *energy++ = mag_squared;
  }
}

void FilterbankAccumulateChannels(struct FilterbankState* state,
                                  const int* energy) {
  unsigned int int* work = state->work;
  unsigned int int weight_accumulator = 0;
  unsigned int int unweight_accumulator = 0;

  const short* channel_frequency_starts = state->channel_frequency_starts;
  const short* channel_weight_starts = state->channel_weight_starts;
  const short* channel_widths = state->channel_widths;

  int num_channels_plus_1 = state->num_channels + 1;
  int i;
  for (i = 0; i < num_channels_plus_1; ++i) {
    const int* magnitudes = energy + *channel_frequency_starts++;
    const short* weights = state->weights + *channel_weight_starts;
    const short* unweights = state->unweights + *channel_weight_starts++;
    const int width = *channel_widths++;
    int j;
    for (j = 0; j < width; ++j) {
      weight_accumulator += *weights++ * ((unsigned int int)*magnitudes);
      unweight_accumulator += *unweights++ * ((unsigned int int)*magnitudes);
      ++magnitudes;
    }
    *work++ = weight_accumulator;
    weight_accumulator = unweight_accumulator;
    unweight_accumulator = 0;
  }
}

static unsigned short Sqrt32(unsigned int num) {
  if (num == 0) {
    return 0;
  }
  unsigned int res = 0;
  int max_bit_number = 32 - MostSignificantBit32(num);
  max_bit_number |= 1;
  unsigned int bit = 1U << (31 - max_bit_number);
  int iterations = (31 - max_bit_number) / 2 + 1;
  while (iterations--) {
    if (num >= res + bit) {
      num -= res + bit;
      res = (res >> 1U) + bit;
    } else {
      res >>= 1U;
    }
    bit >>= 2U;
  }
  
  if (num > res && res != 0xFFFF) {
    ++res;
  }
  return res;
}

static unsigned int Sqrt64(unsigned int int num) {
  
  
  
  if ((num >> 32) == 0) {
    return Sqrt32((unsigned int)num);
  }
  unsigned int int res = 0;
  int max_bit_number = 64 - MostSignificantBit64(num);
  max_bit_number |= 1;
  unsigned int int bit = 1ULL << (63 - max_bit_number);
  int iterations = (63 - max_bit_number) / 2 + 1;
  while (iterations--) {
    if (num >= res + bit) {
      num -= res + bit;
      res = (res >> 1U) + bit;
    } else {
      res >>= 1U;
    }
    bit >>= 2U;
  }
  
  if (num > res && res != 0xFFFFFFFFLL) {
    ++res;
  }
  return res;
}

unsigned int* FilterbankSqrt(struct FilterbankState* state, int scale_down_shift) {
  const int num_channels = state->num_channels;
  const unsigned int int* work = state->work + 1;
  
  
  unsigned int* output = (unsigned int*)state->work;
  int i;
  for (i = 0; i < num_channels; ++i) {
    *output++ = Sqrt64(*work++) >> scale_down_shift;
  }
  return (unsigned int*)state->work;
}

void FilterbankReset(struct FilterbankState* state) {
  memset(state->work, 0, (state->num_channels + 1) * sizeof(*state->work));
}
