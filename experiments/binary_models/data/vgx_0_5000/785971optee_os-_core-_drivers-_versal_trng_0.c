static void trng_write32_range(const struct versal_trng *trng, uint32_t start,
uint32_t num_regs, const uint8_t *buf)
{
size_t off = 0;
uint32_t val = 0;
size_t cnt = 0;
size_t i = 0;

for (i = 0; i < num_regs; ++i) {
if (!buf) {
off = start + i * TRNG_BYTES_PER_REG;
trng_write32(trng->cfg.addr, off, 0);
continue;
}

val = 0;
for (cnt = 0; cnt < TRNG_BYTES_PER_REG; ++cnt)
val = (val << 8) | buf[i * TRNG_BYTES_PER_REG + cnt];

off = start + (TRNG_NUM_INIT_REGS - 1 - i) * TRNG_BYTES_PER_REG;
trng_write32(trng->cfg.addr, off, val);
}
}