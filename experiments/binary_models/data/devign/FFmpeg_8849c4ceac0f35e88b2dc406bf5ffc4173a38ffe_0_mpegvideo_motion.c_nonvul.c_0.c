static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 **VAR6, VAR7 *VAR8, int VAR9, int VAR10)
{
    VAR3 *VAR11;
    int VAR12, VAR13, VAR14, VAR15 = 0;
    ptrdiff_t VAR16;
    VAR9 = FUN2(VAR9);
    VAR10 = FUN2(VAR10);
    VAR14 = ((VAR10 & 1) << 1) | (VAR9 & 1);
    VAR9 >>= 1;
    VAR10 >>= 1;
    VAR12 = VAR2->VAR17 * 8 + VAR9;
    VAR13 = VAR2->VAR18 * 8 + VAR10;
    VAR12 = FUN3(VAR12, -8, (VAR2->VAR19 >> 1));
    if (VAR12 == (VAR2->VAR19 >> 1))
        VAR14 &= ~1;
    VAR13 = FUN3(VAR13, -8, (VAR2->VAR20 >> 1));
    if (VAR13 == (VAR2->VAR20 >> 1))
        VAR14 &= ~2;
    VAR16 = VAR13 * VAR2->VAR21 + VAR12;
    VAR11 = VAR6[1] + VAR16;
    if ((unsigned)VAR12 >= FUN4((VAR2->VAR22 >> 1) - (VAR14 & 1) - 7, 0) || (unsigned)VAR13 >= FUN4((VAR2->VAR23 >> 1) - (VAR14 >> 1) - 7, 0))
    {
        VAR2->VAR24.FUN5(VAR2->VAR25, VAR11, VAR2->VAR21, VAR2->VAR21, 9, 9, VAR12, VAR13, VAR2->VAR22 >> 1, VAR2->VAR23 >> 1);
        VAR11 = VAR2->VAR25;
        VAR15 = 1;
    }
    VAR8[VAR14](VAR4, VAR11, VAR2->VAR21, 8);
    VAR11 = VAR6[2] + VAR16;
    if (VAR15)
    {
        VAR2->VAR24.FUN5(VAR2->VAR25, VAR11, VAR2->VAR21, VAR2->VAR21, 9, 9, VAR12, VAR13, VAR2->VAR22 >> 1, VAR2->VAR23 >> 1);
        VAR11 = VAR2->VAR25;
    }
    VAR8[VAR14](VAR5, VAR11, VAR2->VAR21, 8);
}