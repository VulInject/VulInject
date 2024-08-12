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
    VAR10 = FUN9();
    FUN10(VAR10, VAR12);
    FUN11();
    VAR15 = FUN12(VAR10, VAR5);
    switch (VAR15)
    {
    case 0:
        break;
    case -VAR21:
        FUN7(VAR7, VAR22, VAR2);
        break;
    case -VAR23:
        FUN7(VAR7, VAR24);
        break;
    case -VAR25:
        FUN7(VAR7, "", VAR2);
        break;
    case -VAR26:
        FUN7(VAR7, VAR20, VAR2);
        break;
    default:
        FUN13(VAR7, -VAR15, "");
        break;
    }
VAR17:
    FUN14(VAR10);
    FUN15(VAR14);
}