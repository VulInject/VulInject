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
    if (!(VAR2->VAR9->VAR10 & VAR11))
    {
        FUN3(VAR2->VAR9, "");
    }
    if (VAR2->VAR3 == VAR4)
    {
        FUN4(VAR12[VAR2->VAR5], VAR12[VAR2->VAR6], VAR2->VAR7);
    }
    else
    {
        TCGv VAR13 = FUN5();
        FUN6(VAR13, VAR12[VAR2->VAR5], 0x1f);
        FUN7(VAR12[VAR2->VAR8], VAR12[VAR2->VAR6], VAR13);
        FUN8(VAR13);
    }
}