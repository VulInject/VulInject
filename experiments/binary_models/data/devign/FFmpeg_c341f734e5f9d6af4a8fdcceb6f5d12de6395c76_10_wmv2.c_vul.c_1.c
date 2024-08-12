void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, VAR3 **VAR7, FUN2 (*VAR8)[4], int VAR9, int VAR10, int VAR11)
{
    VAR12 *const VAR13 = (VAR12 *)VAR2;
    VAR3 *VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24 = 0;
    VAR15 = ((VAR10 & 1) << 1) | (VAR9 & 1);
    VAR15 = 2 * VAR15 + VAR13->VAR25;
    VAR19 = VAR2->VAR26 * 16 + (VAR9 >> 1);
    VAR20 = VAR2->VAR27 * 16 + (VAR10 >> 1);
    VAR21 = VAR2->VAR21;
    VAR19 = FUN3(VAR19, -16, VAR2->VAR28);
    VAR20 = FUN3(VAR20, -16, VAR2->VAR29);
    if (VAR19 <= -16 || VAR19 >= VAR2->VAR28)
        VAR15 &= ~3;
    if (VAR20 <= -16 || VAR20 >= VAR2->VAR29)
        VAR15 &= ~4;
    VAR22 = VAR2->VAR22;
    VAR23 = VAR2->VAR23;
    VAR14 = VAR7[0] + (VAR20 * VAR22) + VAR19;
    if (VAR19 < 1 || VAR20 < 1 || VAR19 + 17 >= VAR2->VAR30 || VAR20 + VAR11 + 1 >= VAR21)
    {
        VAR2->VAR31.FUN4(VAR2->VAR32, VAR14 - 1 - VAR2->VAR22, VAR2->VAR22, 19, 19, VAR19 - 1, VAR20 - 1, VAR2->VAR30, VAR2->VAR21);
        VAR14 = VAR2->VAR32 + 1 + VAR2->VAR22;
        VAR24 = 1;
    }
    VAR2->VAR33.VAR34[VAR15](VAR4, VAR14, VAR22);
    VAR2->VAR33.VAR34[VAR15](VAR4 + 8, VAR14 + 8, VAR22);
    VAR2->VAR33.VAR34[VAR15](VAR4 + 8 * VAR22, VAR14 + 8 * VAR22, VAR22);
    VAR2->VAR33.VAR34[VAR15](VAR4 + 8 + 8 * VAR22, VAR14 + 8 + 8 * VAR22, VAR22);
    if (VAR2->VAR35 & VAR36)
        return;
    if (VAR2->VAR37 == VAR38)
    {
        VAR15 = 0;
        if ((VAR9 & 3) != 0)
            VAR15 |= 1;
        if ((VAR10 & 3) != 0)
            VAR15 |= 2;
        VAR17 = VAR9 >> 2;
        VAR18 = VAR10 >> 2;
    }
    else
    {
        VAR17 = VAR9 / 2;
        VAR18 = VAR10 / 2;
        VAR15 = ((VAR18 & 1) << 1) | (VAR17 & 1);
        VAR17 >>= 1;
        VAR18 >>= 1;
    }
    VAR19 = VAR2->VAR26 * 8 + VAR17;
    VAR20 = VAR2->VAR27 * 8 + VAR18;
    VAR19 = FUN3(VAR19, -8, VAR2->VAR28 >> 1);
    if (VAR19 == (VAR2->VAR28 >> 1))
        VAR15 &= ~1;
    VAR20 = FUN3(VAR20, -8, VAR2->VAR29 >> 1);
    if (VAR20 == (VAR2->VAR29 >> 1))
        VAR15 &= ~2;
    VAR16 = (VAR20 * VAR23) + VAR19;
    VAR14 = VAR7[1] + VAR16;
    if (VAR24)
    {
        VAR2->VAR31.FUN4(VAR2->VAR32, VAR14, VAR2->VAR23, 9, 9, VAR19, VAR20, VAR2->VAR30 >> 1, VAR2->VAR21 >> 1);
        VAR14 = VAR2->VAR32;
    }
    VAR8[1][VAR15](VAR5, VAR14, VAR23, VAR11 >> 1);
    VAR14 = VAR7[2] + VAR16;
    if (VAR24)
    {
        VAR2->VAR31.FUN4(VAR2->VAR32, VAR14, VAR2->VAR23, 9, 9, VAR19, VAR20, VAR2->VAR30 >> 1, VAR2->VAR21 >> 1);
        VAR14 = VAR2->VAR32;
    }
    VAR8[1][VAR15](VAR6, VAR14, VAR23, VAR11 >> 1);
}