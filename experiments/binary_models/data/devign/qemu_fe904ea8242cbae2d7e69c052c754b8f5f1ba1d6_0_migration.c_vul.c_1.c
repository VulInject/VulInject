static void FUN1(VAR1 *VAR2, int VAR3, bool *VAR4, VAR5 *VAR6)
{
    int VAR7;
    if (VAR2->VAR8 == VAR9)
    {
        FUN2();
        *VAR6 = FUN3(VAR10);
        FUN4(VAR11);
        *VAR4 = FUN5();
        VAR7 = FUN6();
        if (!VAR7)
        {
            VAR7 = FUN7(VAR12);
            if (VAR7 >= 0)
            {
                VAR7 = FUN8();
            }
            if (VAR7 >= 0)
            {
                FUN9(VAR2->VAR13, VAR14);
                FUN10(VAR2->VAR13, false);
            }
        }
        FUN11();
        if (VAR7 < 0)
        {
            goto VAR15;
        }
    }
    else if (VAR2->VAR8 == VAR16)
    {
        FUN12();
        FUN13(VAR2->VAR13);
        FUN14();
    }
    if (FUN15())
    {
        int VAR17;
        FUN16();
        VAR17 = FUN17(VAR2);
        FUN18(VAR17);
        if (VAR17)
        {
            goto VAR15;
        }
    }
    if (FUN19(VAR2->VAR13))
    {
        FUN20();
        goto VAR15;
    }
    FUN21(&VAR2->VAR8, VAR3, VAR18);
    return;
VAR15:
    FUN21(&VAR2->VAR8, VAR3, VAR19);
}