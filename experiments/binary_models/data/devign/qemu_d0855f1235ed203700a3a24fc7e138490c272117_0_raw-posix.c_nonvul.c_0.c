static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR6 *VAR11 = NULL;
    int VAR12;
    const char *VAR13 = FUN2(VAR4, "");
    char VAR14[VAR15] = "";
    bool VAR16 = false;
    if (strcmp(VAR13, "") == 0)
    {
        char *VAR17 = NULL;
        kern_return_t VAR18;
        io_iterator_t VAR19 = 0;
        VAR17 = FUN3(&VAR19);
        if (VAR17 == NULL)
        {
            FUN4(VAR7, ""
                             "");
            VAR16 = true;
            goto VAR20;
        }
        VAR18 = FUN5(VAR19, VAR14, sizeof(VAR14), VAR5);
        if (VAR18 != VAR21)
        {
            FUN4(VAR7, "");
            VAR16 = true;
            goto VAR20;
        }
        if (VAR14[0] == '')
        {
            FUN4(VAR7, "");
            VAR16 = true;
            goto VAR20;
        }
        if (FUN6(VAR17, VAR22, 9) == 0 && FUN7(VAR14, VAR7) == false)
        {
            FUN8(VAR14);
            VAR16 = true;
            goto VAR20;
        }
        FUN9(VAR4, "", FUN10(VAR14));
    VAR20:
        FUN11(VAR17);
        if (VAR19)
        {
            FUN12(VAR19);
        }
        if (VAR16)
        {
            return -VAR23;
        }
    }
    VAR9->VAR24 = VAR25;
    VAR12 = FUN13(VAR2, VAR4, VAR5, 0, &VAR11);
    if (VAR12 < 0)
    {
        if (VAR11)
        {
            FUN14(VAR7, VAR11);
        }
        if (*VAR14)
        {
            VAR13 = VAR14;
        }
        if (FUN6(VAR13, "", 5) == 0)
        {
            FUN8(VAR13);
        }
        return VAR12;
    }
    VAR2->VAR26 = FUN15(VAR2);
    if (VAR5 & VAR27)
    {
        VAR12 = FUN16(VAR9);
        if (VAR12 < 0)
        {
            FUN17(VAR2);
            FUN18(VAR7, -VAR12, "");
            return VAR12;
        }
    }
    return VAR12;
}