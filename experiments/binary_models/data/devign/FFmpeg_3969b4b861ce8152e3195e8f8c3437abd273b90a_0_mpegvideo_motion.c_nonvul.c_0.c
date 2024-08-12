static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, VAR3 **VAR7)
{
    VAR3 *VAR8;
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15;
    int VAR16 = 0;
    VAR14 = VAR2->VAR17[0][0];
    VAR15 = VAR2->VAR17[0][1];
    VAR10 = VAR2->VAR18 * 16 + (VAR14 >> (VAR2->VAR19 + 1));
    VAR11 = VAR2->VAR20 * 16 + (VAR15 >> (VAR2->VAR19 + 1));
    VAR14 <<= (3 - VAR2->VAR19);
    VAR15 <<= (3 - VAR2->VAR19);
    VAR10 = FUN2(VAR10, -16, VAR2->VAR21);
    if (VAR10 == VAR2->VAR21)
        VAR14 = 0;
    VAR11 = FUN2(VAR11, -16, VAR2->VAR22);
    if (VAR11 == VAR2->VAR22)
        VAR15 = 0;
    VAR12 = VAR2->VAR12;
    VAR13 = VAR2->VAR13;
    VAR8 = VAR7[0] + (VAR11 * VAR12) + VAR10;
    if ((unsigned)VAR10 >= FUN3(VAR2->VAR23 - 17, 0) || (unsigned)VAR11 >= FUN3(VAR2->VAR24 - 17, 0))
    {
        VAR2->VAR25.FUN4(VAR2->VAR26, VAR8, VAR12, 17, 17, VAR10, VAR11, VAR2->VAR23, VAR2->VAR24);
        VAR8 = VAR2->VAR26;
    }
    if ((VAR14 | VAR15) & 7)
    {
        VAR2->VAR27.FUN5(VAR4, VAR8, VAR12, 16, VAR14 & 15, VAR15 & 15, 128 - VAR2->VAR28);
        VAR2->VAR27.FUN5(VAR4 + 8, VAR8 + 8, VAR12, 16, VAR14 & 15, VAR15 & 15, 128 - VAR2->VAR28);
    }
    else
    {
        int VAR29;
        VAR29 = ((VAR14 >> 3) & 1) | ((VAR15 >> 2) & 2);
        if (VAR2->VAR28)
        {
            VAR2->VAR30.VAR31[0][VAR29](VAR4, VAR8, VAR12, 16);
        }
        else
        {
            VAR2->VAR30.VAR32[0][VAR29](VAR4, VAR8, VAR12, 16);
        }
    }
    if (VAR33 && VAR2->VAR34 & VAR35)
        return;
    VAR14 = VAR2->VAR17[1][0];
    VAR15 = VAR2->VAR17[1][1];
    VAR10 = VAR2->VAR18 * 8 + (VAR14 >> (VAR2->VAR19 + 1));
    VAR11 = VAR2->VAR20 * 8 + (VAR15 >> (VAR2->VAR19 + 1));
    VAR14 <<= (3 - VAR2->VAR19);
    VAR15 <<= (3 - VAR2->VAR19);
    VAR10 = FUN2(VAR10, -8, VAR2->VAR21 >> 1);
    if (VAR10 == VAR2->VAR21 >> 1)
        VAR14 = 0;
    VAR11 = FUN2(VAR11, -8, VAR2->VAR22 >> 1);
    if (VAR11 == VAR2->VAR22 >> 1)
        VAR15 = 0;
    VAR9 = (VAR11 * VAR13) + VAR10;
    VAR8 = VAR7[1] + VAR9;
    if ((unsigned)VAR10 >= FUN3((VAR2->VAR23 >> 1) - 9, 0) || (unsigned)VAR11 >= FUN3((VAR2->VAR24 >> 1) - 9, 0))
    {
        VAR2->VAR25.FUN4(VAR2->VAR26, VAR8, VAR13, 9, 9, VAR10, VAR11, VAR2->VAR23 >> 1, VAR2->VAR24 >> 1);
        VAR8 = VAR2->VAR26;
        VAR16 = 1;
    }
    VAR2->VAR27.FUN5(VAR5, VAR8, VAR13, 8, VAR14 & 15, VAR15 & 15, 128 - VAR2->VAR28);
    VAR8 = VAR7[2] + VAR9;
    if (VAR16)
    {
        VAR2->VAR25.FUN4(VAR2->VAR26, VAR8, VAR13, 9, 9, VAR10, VAR11, VAR2->VAR23 >> 1, VAR2->VAR24 >> 1);
        VAR8 = VAR2->VAR26;
    }
    VAR2->VAR27.FUN5(VAR6, VAR8, VAR13, 8, VAR14 & 15, VAR15 & 15, 128 - VAR2->VAR28);
    return;
}