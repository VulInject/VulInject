void FUN1(bool VAR1, const char *VAR2, bool VAR3, const char *VAR4, int64_t VAR5, VAR6 **VAR7)
{
    VAR6 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    VAR12 = FUN2(VAR1 ? VAR2 : NULL, VAR3 ? VAR4 : NULL, &VAR8);
    if (VAR8)
    {
        FUN3(VAR7, VAR8);
        return;
    }
    VAR14 = FUN4(VAR12);
    FUN5(VAR14);
    if (!FUN6(VAR12))
    {
        FUN7(VAR7, VAR16, "");
        goto VAR17;
    }
    if (VAR5 < 0)
    {
        FUN7(VAR7, VAR18, "", "");
        goto VAR17;
    }
    if (FUN8(VAR12, VAR19, NULL))
    {
        FUN7(VAR7, VAR20, VAR2);
        goto VAR17;
    }
    VAR10 = FUN9(VAR21, VAR22);
    VAR15 = FUN10(VAR10, VAR12, VAR7);
    if (VAR15 < 0)
    {
        goto VAR17;
    }
    FUN11();
    VAR15 = FUN12(VAR10, VAR5, VAR7);
VAR17:
    FUN13(VAR10);
    FUN14(VAR14);
}