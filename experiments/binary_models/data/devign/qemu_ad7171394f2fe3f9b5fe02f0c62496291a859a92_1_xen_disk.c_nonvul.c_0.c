static int FUN1(struct VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    int VAR5, VAR6, VAR7, VAR8 = 0;
    char *VAR9;
    if (VAR4->VAR10 == NULL)
    {
        VAR4->VAR10 = FUN3(&VAR4->VAR2, "");
        VAR9 = strchr(VAR4->VAR10, '');
        if (VAR9 != NULL)
        {
            VAR4->VAR11 = VAR4->VAR10;
            VAR4->VAR12 = VAR9 + 1;
            *VAR9 = 0;
        }
        else
        {
            VAR4->VAR11 = "";
            VAR4->VAR12 = VAR4->VAR10;
        }
    }
    if (VAR4->VAR13 == NULL)
        VAR4->VAR13 = FUN3(&VAR4->VAR2, "");
    if (VAR4->VAR14 == NULL)
        VAR4->VAR14 = FUN3(&VAR4->VAR2, "");
    if (VAR4->VAR15 == NULL)
        VAR4->VAR15 = FUN3(&VAR4->VAR2, "");
    if (VAR4->VAR16 == NULL)
        VAR4->VAR16 = FUN3(&VAR4->VAR2, "");
    if (VAR4->VAR10 == NULL || VAR4->VAR13 == NULL || VAR4->VAR14 == NULL || VAR4->VAR15 == NULL)
        return -1;
    if (strcmp(VAR4->VAR13, "") == 0)
    {
        VAR6 = VAR17;
    }
    else
    {
        VAR6 = 0;
        VAR8 |= VAR18;
    }
    if (VAR4->VAR16 && !strcmp(VAR4->VAR16, ""))
        VAR8 |= VAR19;
    VAR5 = (VAR4->VAR2.VAR15 - 202 * 256) / 16;
    VAR4->VAR20 = FUN4(VAR21, 0, VAR5);
    if (!VAR4->VAR20)
    {
        FUN5(&VAR4->VAR2, 2, "");
        VAR4->VAR22 = FUN6(VAR4->VAR15);
        if (FUN7(VAR4->VAR22, VAR4->VAR12, VAR6, FUN8(VAR4->VAR11)) != 0)
        {
            FUN9(VAR4->VAR22);
            return -1;
        }
    }
    else
    {
        FUN5(&VAR4->VAR2, 2, "");
        VAR4->VAR22 = VAR4->VAR20->VAR23;
    }
    VAR4->VAR24 = VAR25;
    VAR4->VAR26 = FUN10(VAR4->VAR22);
    if (VAR4->VAR26 < 0)
    {
        FUN5(&VAR4->VAR2, 1, "", (int)VAR4->VAR26, strerror(-VAR4->VAR26), VAR4->VAR22->VAR27 ? VAR4->VAR22->VAR27->VAR28 : "");
        VAR4->VAR26 = 0;
    }
    VAR7 = VAR4->VAR22->VAR27 && VAR4->VAR22->VAR27->VAR29 ? 1 : 0;
    FUN5(VAR2, 1, ""%VAR30\""%VAR30\""%VAR30\""
                             "" VAR31 "" VAR31 "",
                  VAR4->VAR14, VAR4->VAR11, VAR4->VAR12, VAR4->VAR26, VAR4->VAR26 >> 20);
    FUN11(&VAR4->VAR2, "", VAR7);
    FUN11(&VAR4->VAR2, "", VAR8);
    FUN11(&VAR4->VAR2, "", VAR4->VAR24);
    FUN11(&VAR4->VAR2, "", VAR4->VAR26 / VAR4->VAR24);
    return 0;
}