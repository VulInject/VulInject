static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5 = 0;
    VAR4 = FUN2(&VAR2->VAR6, 5);
    if (VAR2->VAR7 == VAR8)
        VAR2->VAR9 = VAR10[0][VAR4];
    else
    {
        VAR2->VAR9 = VAR10[VAR2->VAR7 - 1][VAR4];
    }
    if (VAR4 < 9)
        VAR2->VAR11 = FUN2(&VAR2->VAR6, 1);
    if (VAR2->VAR7 == VAR12)
        VAR2->VAR13 = FUN2(&VAR2->VAR6, 1);
    FUN3(VAR2->VAR14, VAR15, "", VAR2->VAR9, VAR2->VAR11);
    if (VAR2->VAR16 == 1)
        VAR2->VAR17 = FUN4(&VAR2->VAR6, 0, 3);
    if (VAR2->VAR18 > VAR19)
    {
        if (VAR2->VAR20)
            VAR2->VAR21 = FUN2(&VAR2->VAR6, 1);
    }
    else if (VAR2->VAR22)
        VAR2->VAR23 = FUN2(&VAR2->VAR6, 2);
    VAR3 = (VAR2->VAR13 > 12) ? 0 : 1;
    VAR2->VAR24 = VAR25[VAR3][FUN4(&VAR2->VAR6, 1, 4)];
    if (VAR2->VAR24 == VAR26)
    {
        VAR2->VAR27 = VAR25[VAR3][FUN4(&VAR2->VAR6, 1, 3)];
        VAR2->VAR28 = FUN2(&VAR2->VAR6, 6);
        VAR2->VAR29 = FUN2(&VAR2->VAR6, 6);
    }
    if ((VAR2->VAR24 == VAR26 && VAR2->VAR27 == VAR30) || VAR2->VAR24 == VAR30)
    {
        VAR5 = FUN5(&VAR2->VAR31, VAR2);
        if (VAR5 < 0)
            return -1;
        FUN3(VAR2->VAR14, VAR15, ""
                                       "",
               VAR5 >> 1, VAR5 & 1);
    }
    VAR5 = FUN5(&VAR2->VAR32, VAR2);
    if (VAR5 < 0)
        return -1;
    FUN3(VAR2->VAR14, VAR15, ""
                                   "",
           VAR5 >> 1, VAR5 & 1);
    VAR2->VAR33 = &VAR34[FUN2(&VAR2->VAR6, 2)];
    VAR2->VAR35 = &VAR36[FUN2(&VAR2->VAR6, 2)];
    if (VAR2->VAR37)
    {
        FUN3(VAR2->VAR14, VAR38, "");
        FUN6(VAR2);
    }
    if (VAR2->VAR39)
    {
        VAR2->VAR40 = FUN2(&VAR2->VAR6, 1);
        if (VAR2->VAR40)
        {
            VAR2->VAR41 = FUN2(&VAR2->VAR6, 2);
            FUN3(VAR2->VAR14, VAR38, "", (VAR2->VAR41 & 2) ? 4 : 8, (VAR2->VAR41 & 1) ? 4 : 8);
        }
    }
    return 0;
}