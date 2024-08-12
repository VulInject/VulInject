static int FUN1(VAR1 *VAR2, int VAR3, struct VAR4 *VAR5, VAR1 *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    char *VAR11;
    VAR12 *VAR13 = NULL;
    VAR14 *VAR15;
    int VAR16;
    VAR8 = FUN2();
    if (!VAR8)
        return -1;
    VAR8->VAR17 = FUN3("", NULL, NULL);
    VAR10 = FUN4(sizeof(VAR9));
    if (!VAR10)
        goto VAR18;
    VAR10->VAR19 = FUN5();
    VAR8->VAR20 = 1;
    VAR8->VAR21[0] = VAR10;
    if (!VAR2->VAR22->VAR23 || VAR2->VAR22->VAR23 == VAR2->VAR22)
        memcpy(VAR10, VAR2->VAR22->VAR21[VAR3], sizeof(VAR9));
    else
        memcpy(VAR10, VAR2->VAR22->VAR23->VAR21[VAR2->VAR22->VAR24[VAR3]], sizeof(VAR9));
    VAR10->VAR25 = NULL;
    VAR11 = FUN6(VAR5->VAR26);
    switch (VAR2->VAR27)
    {
    case VAR28:
    case VAR29:
        if (VAR2->VAR22->VAR30)
        {
            int VAR31;
            VAR31 = VAR2->VAR22->VAR32;
            if (!VAR31)
                VAR31 = 16; snprintf ( VAR8 -> VAR33 , sizeof ( VAR8 -> VAR33 ) , ""VAR34:
        }
        if (FUN7(&VAR13, VAR8->VAR33, VAR35) < 0)
            goto VAR18;
        VAR2->VAR36[VAR3] = VAR13;
        VAR16 = FUN8(VAR13);
        break;
    case VAR37:
        VAR2->VAR6 = VAR6;
        VAR16 = VAR38;
        break;
    default:
        goto VAR18;
    }
    FUN9(""VAR39 %VAR40/VAR41=%VAR42 %VAR40\"", VAR11, FUN10(VAR5->VAR43), VAR2->VAR22->VAR33, VAR3, VAR2->VAR44);
    if (FUN11(&VAR8->VAR45, VAR16) < 0)
    {
        goto VAR18;
    }
    FUN12(VAR8, NULL);
    if (FUN13(VAR8) < 0)
    {
    VAR18:
        if (VAR13)
            FUN14(VAR13);
        FUN15(VAR8);
        return -1;
    }
    FUN16(VAR8->VAR45, &VAR15);
    FUN15(VAR15);
    VAR2->VAR46[VAR3] = VAR8;
    return 0;
}