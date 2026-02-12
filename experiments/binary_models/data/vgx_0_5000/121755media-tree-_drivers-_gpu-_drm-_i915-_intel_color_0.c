static void glk_load_degamma_lut(struct drm_crtc_state *state)
{
struct drm_i915_private *dev_priv = to_i915(state->crtc->dev);
enum pipe pipe = to_intel_crtc(state->crtc)->pipe;
const uint32_t lut_size = 33;
uint32_t i;


I915_WRITE(PRE_CSC_GAMC_INDEX(pipe), 0);
I915_WRITE(PRE_CSC_GAMC_INDEX(pipe), PRE_CSC_GAMC_AUTO_INCREMENT);


for (i = 0; i < lut_size; i++) {
uint32_t v = (i * (1 << 16)) / (lut_size - 1);

I915_WRITE(PRE_CSC_GAMC_DATA(pipe), v);
}


while (i++ < 35)
I915_WRITE(PRE_CSC_GAMC_DATA(pipe), (1 << 16));
}