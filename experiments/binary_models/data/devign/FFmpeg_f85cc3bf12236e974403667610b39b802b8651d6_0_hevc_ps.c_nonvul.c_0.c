static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (FUN2(VAR2) < 2 + 1 + 5 + 32 + 4 + 16 + 16 + 12)
        return -1;
    VAR6->VAR8 = FUN3(VAR2, 2);
    VAR6->VAR9 = FUN4(VAR2);
    VAR6->VAR10 = FUN3(VAR2, 5);
    if (VAR6->VAR10 == VAR11)
        FUN5(VAR4, VAR12, "");
    else if (VAR6->VAR10 == VAR13)
        FUN5(VAR4, VAR12, "");
    else if (VAR6->VAR10 == VAR14)
        FUN5(VAR4, VAR12, "");
    else if (VAR6->VAR10 == VAR15)
        FUN5(VAR4, VAR12, "");
    else
        FUN5(VAR4, VAR16, "", VAR6->VAR10);
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        VAR6->VAR17[VAR7] = FUN4(VAR2);
        if (VAR6->VAR10 == 0 && VAR7 > 0 && VAR6->VAR17[VAR7])
            VAR6->VAR10 = VAR7;
    }
    VAR6->VAR18 = FUN4(VAR2);
    VAR6->VAR19 = FUN4(VAR2);
    VAR6->VAR20 = FUN4(VAR2);
    VAR6->VAR21 = FUN4(VAR2);
    FUN6(VAR2, 16);
    FUN6(VAR2, 16);
    FUN6(VAR2, 12);
    return 0;
}