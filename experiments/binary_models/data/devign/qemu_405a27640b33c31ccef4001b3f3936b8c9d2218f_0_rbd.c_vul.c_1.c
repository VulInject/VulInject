static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10, RBDAIOCmd VAR11)
{
    VAR12 *VAR13;
    VAR14 *VAR15;
    rbd_completion_t VAR16;
    int64_t VAR17, VAR18;
    char *VAR19;
    int VAR20;
    VAR21 *VAR22 = VAR3->VAR10;
    VAR13 = FUN2(&VAR23, VAR3, VAR9, VAR10);
    VAR13->VAR11 = VAR11;
    VAR13->VAR6 = VAR6;
    if (VAR11 == VAR24 || VAR11 == VAR25)
    {
        VAR13->VAR26 = NULL;
    }
    else
    {
        VAR13->VAR26 = FUN3(VAR3, VAR6->VAR18);
    }
    VAR13->VAR27 = 0;
    VAR13->VAR28 = 0;
    VAR13->VAR22 = VAR22;
    VAR13->VAR29 = 0;
    VAR13->VAR30 = NULL;
    VAR13->VAR31 = -VAR32;
    if (VAR11 == VAR33)
    {
        FUN4(VAR13->VAR6, 0, VAR13->VAR26, VAR6->VAR18);
    }
    VAR19 = VAR13->VAR26;
    VAR17 = VAR4 * VAR34;
    VAR18 = VAR7 * VAR34;
    VAR15 = FUN5(sizeof(VAR14));
    VAR15->VAR35 = 0;
    VAR15->VAR13 = VAR13;
    VAR15->VAR19 = VAR19;
    VAR15->VAR22 = VAR13->VAR22;
    VAR15->VAR18 = VAR18;
    VAR20 = FUN6(VAR15, (VAR36)VAR37, &VAR16);
    if (VAR20 < 0)
    {
        goto VAR38;
    }
    switch (VAR11)
    {
    case VAR33:
        VAR20 = FUN7(VAR22->VAR39, VAR17, VAR18, VAR19, VAR16);
        break;
    case VAR40:
        VAR20 = FUN8(VAR22->VAR39, VAR17, VAR18, VAR19, VAR16);
        break;
    case VAR24:
        VAR20 = FUN9(VAR22->VAR39, VAR17, VAR18, VAR16);
        break;
    case VAR25:
        VAR20 = FUN10(VAR22->VAR39, VAR16);
        break;
    default:
        VAR20 = -VAR41;
    }
    if (VAR20 < 0)
    {
        goto VAR38;
    }
    return &VAR13->VAR42;
VAR38:
    FUN11(VAR15);
    FUN12(VAR13);
    return NULL;
}