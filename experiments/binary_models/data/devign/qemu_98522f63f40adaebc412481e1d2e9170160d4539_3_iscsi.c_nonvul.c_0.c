static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    int64_t VAR7 = 0;
    VAR8 *VAR9;
    VAR10 *VAR11 = NULL;
    VAR12 *VAR13;
    VAR9 = FUN2("", &VAR14);
    while (VAR3 && VAR3->VAR15)
    {
        if (!strcmp(VAR3->VAR15, ""))
        {
            VAR7 = VAR3->VAR16.VAR17 / VAR18;
        }
        VAR3++;
    }
    VAR9->VAR19 = FUN3(sizeof(struct VAR10));
    VAR11 = VAR9->VAR19;
    VAR13 = FUN4();
    FUN5(VAR13, "", FUN6(VAR1));
    VAR6 = FUN7(VAR9, VAR13, 0, NULL);
    FUN8(VAR13);
    if (VAR6 != 0)
    {
        goto VAR20;
    }
    if (VAR11->VAR21)
    {
        FUN9(VAR11->VAR21);
        FUN10(VAR11->VAR21);
    }
    if (VAR11->VAR22 != VAR23)
    {
        VAR6 = -VAR24;
        goto VAR20;
    }
    if (VAR9->VAR25 < VAR7)
    {
        VAR6 = -VAR26;
        goto VAR20;
    }
    VAR6 = 0;
VAR20:
    if (VAR11->VAR27 != NULL)
    {
        FUN11(VAR11->VAR27);
    }
    FUN12(VAR9->VAR19);
    VAR9->VAR19 = NULL;
    FUN13(VAR9);
    return VAR6;
}