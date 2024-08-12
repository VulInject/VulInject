static VAR1 FUN1(uint32_t VAR2, uint64_t VAR3)
{
    uint64_t VAR4 = VAR2 * (VAR3 & 0xffffffff);
    uint64_t VAR5 = VAR2 * (VAR3 >> 32);
    VAR5 += VAR4 >> 32;
    VAR4 &= 0xffffffff;
    VAR4 += 1 << FUN2(VAR5 >> 21);
    VAR5 += VAR4 >> 32;
    return VAR5 >> 20;
}