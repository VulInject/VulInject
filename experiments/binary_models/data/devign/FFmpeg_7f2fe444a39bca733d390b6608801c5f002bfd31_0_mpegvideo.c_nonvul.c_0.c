static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, VAR3 **VAR8, int VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14, int VAR15)
{
    VAR3 *VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24;
    if (VAR2->VAR25)
    {
        VAR13 >>= 1;
        VAR14 >>= 1;
    }
    VAR17 = ((VAR14 & 1) << 1) | (VAR13 & 1);
    VAR21 = VAR2->VAR26 * 16 + (VAR13 >> 1);
    VAR22 = VAR2->VAR27 * (16 >> VAR10) + (VAR14 >> 1);
    VAR23 = VAR2->VAR23 >> VAR10;
    VAR21 = FUN2(VAR21, -16, VAR2->VAR28);
    if (VAR21 == VAR2->VAR28)
        VAR17 &= ~1;
    VAR22 = FUN2(VAR22, -16, VAR23);
    if (VAR22 == VAR23)
        VAR17 &= ~2;
    VAR24 = VAR2->VAR24 << VAR10;
    VAR16 = VAR8[0] + (VAR22 * VAR24) + (VAR21) + VAR9;
    VAR4 += VAR7;
    VAR12[VAR17](VAR4, VAR16, VAR24, VAR15);
    VAR12[VAR17](VAR4 + 8, VAR16 + 8, VAR24, VAR15);
    if (VAR2->VAR29 == VAR30)
    {
        VAR17 = 0;
        if ((VAR13 & 3) != 0)
            VAR17 |= 1;
        if ((VAR14 & 3) != 0)
            VAR17 |= 2;
        VAR19 = VAR13 >> 2;
        VAR20 = VAR14 >> 2;
    }
    else
    {
        VAR19 = VAR13 / 2;
        VAR20 = VAR14 / 2;
        VAR17 = ((VAR20 & 1) << 1) | (VAR19 & 1);
        VAR19 >>= 1;
        VAR20 >>= 1;
    }
    VAR21 = VAR2->VAR26 * 8 + VAR19;
    VAR22 = VAR2->VAR27 * (8 >> VAR10) + VAR20;
    VAR21 = FUN2(VAR21, -8, VAR2->VAR28 >> 1);
    if (VAR21 == (VAR2->VAR28 >> 1))
        VAR17 &= ~1;
    VAR22 = FUN2(VAR22, -8, VAR23 >> 1);
    if (VAR22 == (VAR23 >> 1))
        VAR17 &= ~2;
    VAR18 = (VAR22 * (VAR24 >> 1)) + VAR21 + (VAR9 >> 1);
    VAR16 = VAR8[1] + VAR18;
    VAR12[VAR17](VAR5 + (VAR7 >> 1), VAR16, VAR24 >> 1, VAR15 >> 1);
    VAR16 = VAR8[2] + VAR18;
    VAR12[VAR17](VAR6 + (VAR7 >> 1), VAR16, VAR24 >> 1, VAR15 >> 1);
}