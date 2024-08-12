static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    uint32_t VAR6 = VAR5;
    const char *VAR7;
    unsigned int VAR8;
    int VAR9;
    char *VAR10 = NULL;
    if (VAR6)
    {
        VAR10 = (char *)VAR4;
        VAR10[VAR6 - 1] = '';
        VAR6--;
    }
    FUN2("", VAR2->VAR11.VAR12, VAR10, VAR6);
    VAR9 = FUN3(VAR2->VAR11.VAR13, VAR2->VAR11.VAR12, VAR10, VAR6, &VAR7, &VAR8);
    if (VAR9 != VAR14 && VAR9 != VAR15)
    {
        FUN2("", VAR9, FUN4(VAR2->VAR11.VAR13));
        FUN5(&VAR2->VAR11.VAR13);
        VAR2->VAR11.VAR13 = NULL;
        goto VAR16;
    }
    if (VAR8 > VAR17)
    {
        FUN2("", VAR8);
        FUN5(&VAR2->VAR11.VAR13);
        VAR2->VAR11.VAR13 = NULL;
        goto VAR16;
    }
    FUN2("", VAR8, VAR7 ? 0 : 1);
    if (VAR8)
    {
        FUN6(VAR2, VAR8 + 1);
        FUN7(VAR2, VAR7, VAR8 + 1);
    }
    else
    {
        FUN6(VAR2, 0);
    }
    FUN8(VAR2, VAR9 == VAR15 ? 0 : 1);
    if (VAR9 == VAR15)
    {
        FUN2("", "");
        FUN9(VAR2, VAR18, 4);
    }
    else
    {
        if (!FUN10(VAR2))
        {
            FUN2("", VAR2->VAR19);
            goto VAR20;
        }
        if (FUN11(VAR2) < 0)
        {
            FUN2("", VAR2->VAR19);
            goto VAR20;
        }
        FUN2("", VAR2->VAR19);
        FUN6(VAR2, 0);
        FUN12(VAR2);
    }
    return 0;
VAR20:
    FUN6(VAR2, 1);
    FUN6(VAR2, sizeof(""));
    FUN7(VAR2, "", sizeof(""));
    FUN13(VAR2);
    FUN14(VAR2);
    return -1;
VAR16:
    FUN14(VAR2);
    return -1;
}