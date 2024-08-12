FUN1(VAR1 *VAR2, bool VAR3, bool VAR4, TCGv VAR5)
{
    FUN2(VAR2);
    if (VAR3 && !(VAR2->VAR6 & VAR7))
    {
        FUN3(VAR2, VAR7);
    }
    else
    {
        FUN4(VAR2, VAR7);
    }
    if (VAR2->VAR8->VAR6 & VAR9)
    {
        FUN5(VAR10);
    }
    if (VAR2->VAR11)
    {
        FUN6(VAR10);
    }
    else if (VAR4)
    {
        FUN7(VAR10);
        FUN8(0);
    }
    else if (VAR2->VAR12)
    {
        FUN9(VAR10);
    }
    else if (!FUN10(VAR5))
    {
        TCGv VAR13 = FUN11();
        FUN12(VAR13, VAR5, VAR14[VAR15]);
        FUN13(VAR13);
        FUN14(VAR13);
    }
    else
    {
        FUN8(0);
    }
    VAR2->VAR16 = VAR17;
}