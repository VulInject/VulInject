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
            if (VAR7 >= 0 && !FUN8())
            {
                VAR7 = FUN9();
            }
            if (VAR7 >= 0)
            {
                FUN10(VAR2->VAR13, VAR14);
                FUN11(VAR2->VAR13, false);
            }
        }
        FUN12();
        if (VAR7 < 0)
        {
            goto VAR15;
        }
    }
    else if (VAR2->VAR8 == VAR16)
    {
        FUN13();
        FUN14(VAR2->VAR13);
        FUN15();
    }
    if (FUN16())
    {
        int VAR17;
        FUN17();
        VAR17 = FUN18(VAR2);
        FUN19(VAR17);
        if (VAR17)
        {
            goto VAR18;
        }
    }
    if (FUN20(VAR2->VAR13))
    {
        FUN21();
        goto VAR18;
    }
    if (!FUN8())
    {
        FUN22(&VAR2->VAR8, VAR3, VAR19);
    }
    return;
VAR18:
    if (VAR2->VAR8 == VAR9)
    {
        VAR20 *VAR21 = NULL;
        FUN23(&VAR21);
        if (VAR21)
        {
            FUN24(VAR21);
        }
    }
VAR15:
    FUN22(&VAR2->VAR8, VAR3, VAR22);
}