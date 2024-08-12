static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6, VAR7, VAR8 = 0;
    VAR7 = FUN2(VAR4, 5);
    if (VAR2->VAR9 == VAR10)
        VAR2->VAR11 = VAR12[0][VAR7];
    else
    {
        VAR2->VAR11 = VAR12[VAR2->VAR9 - 1][VAR7];
    }
    if (VAR7 < 9)
        VAR2->VAR13 = FUN2(VAR4, 1);
    if (VAR2->VAR9 == VAR14)
        VAR2->VAR15 = FUN2(VAR4, 1);
    FUN3(VAR2->VAR5.VAR16, VAR17, "", VAR2->VAR11, VAR2->VAR13);
    if (VAR2->VAR18 == 1)
        VAR2->VAR19 = FUN4(VAR4, 0, 3);
    if (VAR2->VAR20 > VAR21)
    {
        if (VAR2->VAR22)
            VAR2->VAR23 = FUN2(VAR4, 1);
    }
    else if (VAR2->VAR24)
        VAR2->VAR25 = FUN2(VAR4, 2);
    VAR6 = (VAR2->VAR15 > 12) ? 0 : 1;
    VAR2->VAR26 = VAR27[VAR6][FUN4(VAR4, 1, 4)];
    if (VAR2->VAR26 == VAR28)
    {
        VAR2->VAR29 = VAR27[VAR6][FUN4(VAR4, 1, 3)];
        VAR2->VAR30 = FUN2(VAR4, 6);
        VAR2->VAR31 = FUN2(VAR4, 6);
    }
    return 0;
}