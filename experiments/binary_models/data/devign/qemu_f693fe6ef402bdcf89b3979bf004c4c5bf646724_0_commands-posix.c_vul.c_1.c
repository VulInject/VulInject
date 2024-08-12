VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4, **VAR5;
    VAR2 *VAR6 = NULL;
    struct VAR7 *VAR8;
    VAR9 *VAR10;
    VAR4 = NULL;
    VAR5 = &VAR4;
    VAR10 = FUN2("");
    if (!VAR10)
    {
        FUN3(VAR3, VAR11, ""
                                      ""/VAR12/VAR13/system/VAR14/\"");
        return NULL;
    }
    while ((VAR8 = FUN4(VAR10)) != NULL)
    {
        VAR15 *VAR16;
        VAR1 *VAR17;
        if ((FUN5(VAR8->VAR18, "", 6) != 0) || !(VAR8->VAR19 & VAR20))
        {
            continue;
        }
        VAR16 = FUN6(sizeof *VAR16);
        VAR16->VAR21 = FUN7(&VAR8->VAR18[6], NULL, 10);
        VAR16->VAR22 = true;
        FUN8(VAR16, true, NULL, &VAR6);
        VAR17 = FUN6(sizeof *VAR17);
        VAR17->VAR23 = VAR16;
        *VAR5 = VAR17;
        VAR5 = &VAR17->VAR24;
    }
    FUN9(VAR10);
    if (VAR6 == NULL)
    {
        if (VAR4 == NULL)
        {
            FUN10(VAR3, "");
        }
        return VAR4;
    }
    FUN11(VAR4);
    FUN12(VAR3, VAR6);
    return NULL;
}