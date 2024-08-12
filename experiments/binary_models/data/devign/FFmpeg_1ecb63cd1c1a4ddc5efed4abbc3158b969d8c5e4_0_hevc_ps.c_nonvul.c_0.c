static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR6->VAR8 = FUN2(VAR2, 2);
    VAR6->VAR9 = FUN3(VAR2);
    VAR6->VAR10 = FUN2(VAR2, 5);
    if (VAR6->VAR10 == VAR11)
        FUN4(VAR4, VAR12, "");
    else if (VAR6->VAR10 == VAR13)
        FUN4(VAR4, VAR12, "");
    else if (VAR6->VAR10 == VAR14)
        FUN4(VAR4, VAR12, "");
    else
        FUN4(VAR4, VAR15, "", VAR6->VAR10);
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        VAR6->VAR16[VAR7] = FUN3(VAR2);
        if (VAR6->VAR10 == 0 && VAR7 > 0 && VAR6->VAR16[VAR7])
            VAR6->VAR10 = VAR7;
    }
    VAR6->VAR17 = FUN3(VAR2);
    VAR6->VAR18 = FUN3(VAR2);
    VAR6->VAR19 = FUN3(VAR2);
    VAR6->VAR20 = FUN3(VAR2);
    FUN5(VAR2, 16);
    FUN5(VAR2, 16);
    FUN5(VAR2, 12);
}