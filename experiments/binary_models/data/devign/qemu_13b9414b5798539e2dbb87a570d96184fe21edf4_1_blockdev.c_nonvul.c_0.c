void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    VAR7 *VAR9;
    VAR5 *VAR10 = NULL;
    VAR11 *VAR12;
    if (!VAR2->VAR13)
    {
        VAR2->VAR14 = 0;
    }
    if (!VAR2->VAR15)
    {
        VAR2->VAR16 = VAR17;
    }
    if (!VAR2->VAR18)
    {
        VAR2->VAR19 = VAR17;
    }
    if (!VAR2->VAR20)
    {
        VAR2->VAR21 = NULL;
    }
    VAR8 = FUN2(VAR2->VAR22, VAR6);
    if (!VAR8)
    {
        return;
    }
    VAR12 = FUN3(VAR8);
    FUN4(VAR12);
    VAR9 = FUN5(VAR2->VAR23, VAR2->VAR23, VAR6);
    if (!VAR9)
    {
        goto VAR24;
    }
    if (FUN3(VAR9) != VAR12)
    {
        if (!FUN6(VAR9))
        {
            FUN7(VAR9, VAR12);
        }
        else
        {
            FUN8(VAR6, ""
                             "");
            goto VAR24;
        }
    }
    FUN9(VAR2->VAR21, VAR8, VAR9, VAR2->VAR14, VAR2->VAR25, NULL, false, VAR2->VAR16, VAR2->VAR19, VAR26, VAR8, VAR4, &VAR10);
    if (VAR10 != NULL)
    {
        FUN10(VAR6, VAR10);
    }
VAR24:
    FUN11(VAR12);
}