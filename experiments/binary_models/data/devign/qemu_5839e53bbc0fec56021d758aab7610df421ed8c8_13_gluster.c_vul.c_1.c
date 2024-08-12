static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    struct VAR6 *VAR6;
    struct VAR7 *VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    int64_t VAR11 = 0;
    char *VAR12 = NULL;
    VAR13 *VAR14 = FUN2(sizeof(VAR13));
    VAR6 = FUN3(VAR14, VAR1, VAR5);
    if (!VAR6)
    {
        VAR9 = -VAR15;
        goto VAR16;
    }
    VAR11 = FUN4(VAR3, VAR17, 0) / VAR18;
    VAR12 = FUN5(VAR3, VAR19);
    if (!VAR12 || !strcmp(VAR12, ""))
    {
        VAR10 = 0;
    }
    else if (!strcmp(VAR12, "") && FUN6())
    {
        VAR10 = 1;
    }
    else
    {
        FUN7(VAR5, ""
                         "",
                   VAR12);
        VAR9 = -VAR20;
        goto VAR16;
    }
    VAR8 = FUN8(VAR6, VAR14->VAR21, VAR22 | VAR23 | VAR24 | VAR25, VAR26 | VAR27);
    if (!VAR8)
    {
        VAR9 = -VAR15;
    }
    else
    {
        if (!FUN9(VAR8, VAR11 * VAR18))
        {
            if (VAR10 && FUN10(VAR8, 0, VAR11 * VAR18))
            {
                VAR9 = -VAR15;
            }
        }
        else
        {
            VAR9 = -VAR15;
        }
        if (FUN11(VAR8) != 0)
        {
            VAR9 = -VAR15;
        }
    }
VAR16:
    FUN12(VAR12);
    FUN13(VAR14);
    if (VAR6)
    {
        FUN14(VAR6);
    }
    return VAR9;
}