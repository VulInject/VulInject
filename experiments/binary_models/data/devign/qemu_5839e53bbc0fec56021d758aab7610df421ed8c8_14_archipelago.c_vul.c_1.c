static int FUN1(VAR1 *VAR2, uint64_t VAR3, size_t VAR4, off_t VAR5, VAR6 *VAR7, VAR8 *VAR9, int VAR10)
{
    int VAR11, VAR12;
    char *VAR13;
    void *VAR14 = NULL;
    struct VAR15 *VAR16;
    VAR17 *VAR18 = FUN2(sizeof(VAR17));
    VAR12 = strlen(VAR2->VAR19);
    VAR16 = FUN3(VAR2->VAR20, VAR2->VAR21, VAR2->VAR22, VAR23);
    if (!VAR16)
    {
        FUN4("");
        goto VAR24;
    }
    VAR11 = FUN5(VAR2->VAR20, VAR16, VAR12, VAR4);
    if (VAR11 < 0)
    {
        FUN4("");
        goto VAR25;
    }
    VAR13 = FUN6(VAR2->VAR20, VAR16);
    if (!VAR13)
    {
        FUN4("");
        goto VAR25;
    }
    memcpy(VAR13, VAR2->VAR19, VAR12);
    VAR16->VAR26 = VAR4;
    VAR16->VAR5 = VAR5;
    switch (VAR10)
    {
    case VAR27:
        VAR16->VAR10 = VAR28;
        break;
    case VAR29:
        VAR16->VAR10 = VAR30;
        break;
    case VAR31:
        VAR16->VAR10 = VAR32;
        break;
    }
    VAR18->VAR19 = VAR2->VAR19;
    VAR18->VAR5 = VAR5;
    VAR18->VAR26 = VAR4;
    VAR18->VAR3 = VAR3;
    VAR18->VAR7 = VAR7;
    VAR18->VAR9 = VAR9;
    VAR18->VAR10 = VAR10;
    FUN7(VAR2->VAR20, VAR16, VAR18);
    if (VAR10 == VAR29)
    {
        VAR14 = FUN8(VAR2->VAR20, VAR16);
        if (!VAR14)
        {
            FUN4("");
            goto VAR25;
        }
        FUN9(VAR7->VAR33, VAR3, VAR14, VAR4);
    }
    xport VAR34 = FUN10(VAR2->VAR20, VAR16, VAR2->VAR21, VAR23);
    if (VAR34 == VAR35)
    {
        FUN4("");
        goto VAR25;
    }
    FUN11(VAR2->VAR20, VAR34);
    return 0;
VAR25:
    FUN12(VAR18);
    FUN13(VAR2->VAR20, VAR16, VAR2->VAR21);
    return -VAR36;
VAR24:
    FUN12(VAR18);
    return -VAR36;
}