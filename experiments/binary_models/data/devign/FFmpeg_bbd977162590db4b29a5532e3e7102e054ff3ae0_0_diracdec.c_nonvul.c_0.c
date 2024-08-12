static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6;
    uint32_t VAR7;
    FUN2(VAR8, VAR2);
    FUN3(VAR8, VAR2);
    VAR7 = FUN4(VAR8, VAR2);
    if (VAR7 & 0xAA800000)
    {
        VAR7 >>= 32 - 8;
        FUN5(VAR8, VAR2, VAR9[VAR7]);
        VAR6 = VAR10[VAR7];
    }
    else
    {
        unsigned VAR11 = 1;
        do
        {
            VAR7 >>= 32 - 8;
            FUN5(VAR8, VAR2, FUN6(VAR9[VAR7], 8));
            if (VAR9[VAR7] != 9)
            {
                VAR11 <<= (VAR9[VAR7] - 1) >> 1;
                VAR11 |= VAR12[VAR7];
                break;
            }
            VAR11 = (VAR11 << 4) | VAR12[VAR7];
            FUN3(VAR8, VAR2);
            VAR7 = FUN4(VAR8, VAR2);
        } while (VAR11 < 0x8000000U && FUN7(VAR8, VAR2));
        VAR6 = VAR11 - 1;
    }
    if (VAR6)
    {
        VAR6 = (VAR6 * VAR3 + VAR4) >> 2;
        VAR5 = FUN8(VAR8, VAR2, 1);
        FUN9(VAR8, VAR2, 1);
        VAR6 = (VAR6 ^ VAR5) - VAR5;
    }
    FUN10(VAR8, VAR2);
    return VAR6;
}