static inline VAR1 FUN1(VAR2 *VAR3)
{
    int64_t VAR4 = 0;
    int VAR5 = 0;
    while (FUN2(VAR3) && VAR5 < 64 - 7)
    {
        VAR4 <<= 7;
        VAR4 |= FUN3(VAR3, 7);
        VAR5 += 7;
    }
    VAR4 <<= 7;
    VAR4 |= FUN3(VAR3, 7);
    return VAR4;
}