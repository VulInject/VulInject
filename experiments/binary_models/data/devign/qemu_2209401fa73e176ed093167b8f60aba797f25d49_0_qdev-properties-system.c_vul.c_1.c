static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR7 *VAR11 = NULL;
    VAR12 *VAR13 = VAR6;
    VAR14 *VAR15 = FUN3(VAR10, VAR13);
    VAR16 *VAR17;
    char *VAR18;
    if (VAR10->VAR19)
    {
        FUN4(VAR10, VAR5, VAR8);
        return;
    }
    FUN5(VAR4, VAR5, &VAR18, &VAR11);
    if (VAR11)
    {
        FUN6(VAR8, VAR11);
        return;
    }
    if (!*VAR18)
    {
        FUN7(VAR18);
        VAR15->VAR20 = NULL;
        return;
    }
    VAR17 = FUN8(VAR18);
    FUN7(VAR18);
    if (VAR17 == NULL)
    {
        FUN9(VAR8, "", FUN10(VAR2), VAR13->VAR5, VAR18);
        return;
    }
    if (!FUN11(VAR15, VAR17, VAR8))
    {
        FUN12(VAR8, "", FUN10(VAR2), VAR13->VAR5, VAR18);
        return;
    }
}