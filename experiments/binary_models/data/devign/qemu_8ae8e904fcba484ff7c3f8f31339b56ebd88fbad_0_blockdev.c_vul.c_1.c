void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2();
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR3 *VAR11 = NULL;
    if (!VAR2->VAR12)
    {
        FUN3(VAR4, "");
        goto VAR13;
    }
    if (VAR2->VAR14 && VAR2->VAR15 == VAR16)
    {
        bool VAR17 = VAR2->VAR18->VAR19 && VAR2->VAR18->VAR17;
        if (!VAR2->VAR20 && !VAR17)
        {
            FUN3(VAR4, "");
            goto VAR13;
        }
    }
    FUN4(FUN5(VAR6), &VAR2, NULL, &VAR11);
    if (VAR11)
    {
        FUN6(VAR4, VAR11);
        goto VAR13;
    }
    VAR8 = FUN7(VAR6);
    VAR10 = FUN8(VAR8);
    FUN9(VAR10);
    FUN10(NULL, VAR10, &VAR11);
    if (VAR11)
    {
        FUN6(VAR4, VAR11);
        goto VAR13;
    }
VAR13:
    FUN11(VAR6);
}