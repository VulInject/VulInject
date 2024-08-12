static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR3 *VAR8 = FUN2();
    VAR9 *VAR10;
    VAR11 *VAR12;
    FUN3(VAR8, "", FUN4(""));
    if (VAR6->VAR13 && !VAR6->VAR14)
    {
        snprintf(VAR2->VAR15, sizeof(VAR2->VAR15), "" VAR16
                 : VAR6->VAR14);
    }
    else if (VAR6->VAR13 && VAR6->VAR14)
    { snprintf ( VAR2 -> VAR15 , sizeof ( VAR2 -> VAR15 ) , ""VAR16:
    }
    VAR12 = FUN5(&VAR10);
    FUN6(VAR12, NULL, &VAR6->VAR17, &VAR18);
    FUN7(VAR12, &VAR10);
    FUN8(VAR8, "", VAR10);
    FUN3(VAR8, "", FUN4(VAR6->VAR19));
    if (VAR6->VAR13)
    {
        FUN3(VAR8, "", FUN9(VAR6->VAR13));
    }
    if (VAR6->VAR14)
    {
        FUN3(VAR8, "", FUN9(VAR6->VAR14));
    }
    if (VAR6->VAR20)
    {
        FUN3(VAR8, "", FUN9(VAR6->VAR20));
    }
    if (VAR6->VAR21)
    {
        FUN3(VAR8, "", FUN9(VAR6->VAR21));
    }
    if (VAR6->VAR22)
    {
        FUN3(VAR8, "", FUN9(VAR6->VAR22));
    }
    if (VAR6->VAR23)
    {
        FUN3(VAR8, "", FUN9(VAR6->VAR23));
    }
    FUN10(VAR12);
    FUN11(VAR8);
    VAR2->VAR24 = VAR8;
}