static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4)
    {
        FUN2("");
    }
    else if (VAR2->VAR3 == VAR5)
    {
        FUN2("");
    }
    else if (VAR2->VAR3 == VAR6)
    {
        FUN2("");
    }
    else
    {
        FUN2("", VAR2->VAR3);
    }
    if (VAR2->VAR3 == VAR5)
    {
        TCGv VAR7 = FUN3();
        VAR8 *VAR9 = FUN4();
        FUN5(VAR7, VAR10, VAR11);
        FUN6(VAR10, VAR10, VAR12);
        FUN7(VAR13, VAR7, VAR11, VAR9);
        FUN5(VAR10, VAR10, ~VAR12);
        FUN8(VAR9);
        FUN9(VAR7);
    }
    else if (VAR2->VAR3 == VAR6)
    {
        TCGv VAR7 = FUN3();
        VAR8 *VAR9 = FUN4();
        FUN5(VAR7, VAR10, VAR14);
        FUN6(VAR10, VAR10, VAR12);
        FUN7(VAR13, VAR7, VAR14, VAR9);
        FUN5(VAR10, VAR10, ~VAR12);
        FUN8(VAR9);
        FUN9(VAR7);
    }
    FUN10(VAR15, VAR16[VAR2->VAR3]);
    VAR2->VAR17 = VAR18;
}