static void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 == VAR4)
    {
        FUN2("", VAR2->VAR5, VAR2->VAR6, VAR2->VAR7);
    }
    else
    {
        FUN2("", VAR2->VAR8, VAR2->VAR6, VAR2->VAR5);
    }
    if (VAR2->VAR3 == VAR4)
    {
        if (!(VAR2->VAR9 & VAR10) && (VAR2->VAR7 != 1))
        {
            FUN3(VAR11, "");
            FUN4(VAR2);
            return;
        }
        FUN5(VAR12[VAR2->VAR5], VAR12[VAR2->VAR6], VAR2->VAR7);
    }
    else
    {
        VAR13 *VAR14 = FUN6();
        VAR13 *VAR15 = FUN6();
        TCGv VAR16 = FUN7();
        FUN8(VAR16, VAR12[VAR2->VAR5], 0x1f);
        if (!(VAR2->VAR9 & VAR10))
        {
            FUN9(VAR17, VAR16, 1, VAR14);
            FUN4(VAR2);
            FUN10(VAR15);
        }
        FUN11(VAR14);
        FUN12(VAR12[VAR2->VAR8], VAR12[VAR2->VAR6], VAR16);
        FUN11(VAR15);
        FUN13(VAR16);
    }
}