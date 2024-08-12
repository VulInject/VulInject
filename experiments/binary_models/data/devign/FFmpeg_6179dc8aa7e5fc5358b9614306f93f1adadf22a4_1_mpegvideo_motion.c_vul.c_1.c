static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, VAR3 **VAR7)
{
    VAR3 *VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    ptrdiff_t VAR13, VAR14, VAR15;
    int VAR16 = 0;
    VAR11 = VAR2->VAR17[0][0];
    VAR12 = VAR2->VAR17[0][1];
    VAR9 = VAR2->VAR18 * 16 + (VAR11 >> (VAR2->VAR19 + 1));
    VAR10 = VAR2->VAR20 * 16 + (VAR12 >> (VAR2->VAR19 + 1));
    VAR11 <<= (3 - VAR2->VAR19);
    VAR12 <<= (3 - VAR2->VAR19);
    VAR9 = FUN2(VAR9, -16, VAR2->VAR21);
    if (VAR9 == VAR2->VAR21)
        VAR11 = 0;
    VAR10 = FUN2(VAR10, -16, VAR2->VAR22);
    if (VAR10 == VAR2->VAR22)
        VAR12 = 0;
    VAR14 = VAR2->VAR14;
    VAR15 = VAR2->VAR15;
    VAR8 = VAR7[0] + VAR10 * VAR14 + VAR9;
    if ((unsigned)VAR9 >= FUN3(VAR2->VAR23 - 17, 0) || (unsigned)VAR10 >= FUN3(VAR2->VAR24 - 17, 0))
    {
        VAR2->VAR25.FUN4(VAR2->VAR26.VAR27, VAR8, VAR14, VAR14, 17, 17, VAR9, VAR10, VAR2->VAR23, VAR2->VAR24);
        VAR8 = VAR2->VAR26.VAR27;
    }
    if ((VAR11 | VAR12) & 7)
    {
        VAR2->VAR28.FUN5(VAR4, VAR8, VAR14, 16, VAR11 & 15, VAR12 & 15, 128 - VAR2->VAR29);
        VAR2->VAR28.FUN5(VAR4 + 8, VAR8 + 8, VAR14, 16, VAR11 & 15, VAR12 & 15, 128 - VAR2->VAR29);
    }
    else
    {
        int VAR30;
        VAR30 = ((VAR11 >> 3) & 1) | ((VAR12 >> 2) & 2);
        if (VAR2->VAR29)
        {
            VAR2->VAR31.VAR32[0][VAR30](VAR4, VAR8, VAR14, 16);
        }
        else
        {
            VAR2->VAR31.VAR33[0][VAR30](VAR4, VAR8, VAR14, 16);
        }
    }
    if (VAR34 && VAR2->VAR35->VAR36 & VAR37)
        return;
    VAR11 = VAR2->VAR17[1][0];
    VAR12 = VAR2->VAR17[1][1];
    VAR9 = VAR2->VAR18 * 8 + (VAR11 >> (VAR2->VAR19 + 1));
    VAR10 = VAR2->VAR20 * 8 + (VAR12 >> (VAR2->VAR19 + 1));
    VAR11 <<= (3 - VAR2->VAR19);
    VAR12 <<= (3 - VAR2->VAR19);
    VAR9 = FUN2(VAR9, -8, VAR2->VAR21 >> 1);
    if (VAR9 == VAR2->VAR21 >> 1)
        VAR11 = 0;
    VAR10 = FUN2(VAR10, -8, VAR2->VAR22 >> 1);
    if (VAR10 == VAR2->VAR22 >> 1)
        VAR12 = 0;
    VAR13 = (VAR10 * VAR15) + VAR9;
    VAR8 = VAR7[1] + VAR13;
    if ((unsigned)VAR9 >= FUN3((VAR2->VAR23 >> 1) - 9, 0) || (unsigned)VAR10 >= FUN3((VAR2->VAR24 >> 1) - 9, 0))
    {
        VAR2->VAR25.FUN4(VAR2->VAR26.VAR27, VAR8, VAR15, VAR15, 9, 9, VAR9, VAR10, VAR2->VAR23 >> 1, VAR2->VAR24 >> 1);
        VAR8 = VAR2->VAR26.VAR27;
        VAR16 = 1;
    }
    VAR2->VAR28.FUN5(VAR5, VAR8, VAR15, 8, VAR11 & 15, VAR12 & 15, 128 - VAR2->VAR29);
    VAR8 = VAR7[2] + VAR13;
    if (VAR16)
    {
        VAR2->VAR25.FUN4(VAR2->VAR26.VAR27, VAR8, VAR15, VAR15, 9, 9, VAR9, VAR10, VAR2->VAR23 >> 1, VAR2->VAR24 >> 1);
        VAR8 = VAR2->VAR26.VAR27;
    }
    VAR2->VAR28.FUN5(VAR6, VAR8, VAR15, 8, VAR11 & 15, VAR12 & 15, 128 - VAR2->VAR29);
}