static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 **VAR6, VAR7 *VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12 = 0, VAR13, VAR14, VAR15;
    VAR3 *VAR16;
    VAR9 = FUN2(VAR9);
    VAR10 = FUN2(VAR10);
    VAR11 = ((VAR10 & 1) << 1) | (VAR9 & 1);
    VAR9 >>= 1;
    VAR10 >>= 1;
    VAR13 = VAR2->VAR17 * 8 + VAR9;
    VAR14 = VAR2->VAR18 * 8 + VAR10;
    VAR13 = FUN3(VAR13, -8, (VAR2->VAR19 >> 1));
    if (VAR13 == (VAR2->VAR19 >> 1))
        VAR11 &= ~1;
    VAR14 = FUN3(VAR14, -8, (VAR2->VAR20 >> 1));
    if (VAR14 == (VAR2->VAR20 >> 1))
        VAR11 &= ~2;
    VAR15 = VAR14 * VAR2->VAR21 + VAR13;
    VAR16 = VAR6[1] + VAR15;
    if (VAR2->VAR22 & VAR23)
    {
        if ((unsigned)VAR13 > FUN4((VAR2->VAR24 >> 1) - (VAR11 & 1) - 8, 0) || (unsigned)VAR14 > FUN4((VAR2->VAR25 >> 1) - (VAR11 >> 1) - 8, 0))
        {
            VAR2->VAR26.FUN5(VAR2->VAR27, VAR16, VAR2->VAR21, 9, 9, VAR13, VAR14, VAR2->VAR24 >> 1, VAR2->VAR25 >> 1);
            VAR16 = VAR2->VAR27;
            VAR12 = 1;
        }
    }
    VAR8[VAR11](VAR4, VAR16, VAR2->VAR21, 8);
    VAR16 = VAR6[2] + VAR15;
    if (VAR12)
    {
        VAR2->VAR26.FUN5(VAR2->VAR27, VAR16, VAR2->VAR21, 9, 9, VAR13, VAR14, VAR2->VAR24 >> 1, VAR2->VAR25 >> 1);
        VAR16 = VAR2->VAR27;
    }
    VAR8[VAR11](VAR5, VAR16, VAR2->VAR21, 8);
}