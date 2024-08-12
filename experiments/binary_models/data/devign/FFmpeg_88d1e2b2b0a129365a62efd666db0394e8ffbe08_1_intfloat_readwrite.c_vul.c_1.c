float FUN1(int32_t VAR1)
{
    if (VAR1 + VAR1 > 0xFF000000U)
        return VAR2;
    return FUN2(((VAR1 & 0x7FFFFF) + (1 << 23)) * (VAR1 >> 31 | 1), (VAR1 >> 23 & 0xFF) - 150);
}