double FUN1(int64_t VAR1)
{
    if (VAR1 + VAR1 > 0xFFEULL << 52)
        return VAR2;
    return FUN2(((VAR1 & ((1LL << 52) - 1)) + (1LL << 52)) * (VAR1 >> 63 | 1), (VAR1 >> 52 & 0x7FF) - 1075);
}