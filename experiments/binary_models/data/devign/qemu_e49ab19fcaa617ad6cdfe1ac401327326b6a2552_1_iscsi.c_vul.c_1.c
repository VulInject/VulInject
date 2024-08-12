static VAR1 *FUN1(VAR2 *VAR3, unsigned long int VAR4, void *VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10 = VAR3->VAR8;
    struct VAR11 *VAR12 = VAR10->VAR12;
    struct iscsi_data VAR13;
    VAR14 *VAR15;
    assert(VAR4 == VAR16);
    VAR15 = FUN2(&VAR17, VAR3, VAR7, VAR8);
    VAR15->VAR10 = VAR10;
    VAR15->VAR18 = 0;
    VAR15->VAR19 = NULL;
    VAR15->VAR20 = -VAR21;
    VAR15->VAR5 = NULL;
    VAR15->VAR22 = VAR5;
    VAR15->VAR23 = malloc(sizeof(struct VAR24));
    if (VAR15->VAR23 == NULL)
    {
        FUN3("", FUN4(VAR12));
        FUN5(VAR15);
        return NULL;
    }
    memset(VAR15->VAR23, 0, sizeof(struct VAR24));
    switch (VAR15->VAR22->VAR25)
    {
    case VAR26:
        VAR15->VAR23->VAR27 = VAR28;
        break;
    case VAR29:
        VAR15->VAR23->VAR27 = VAR30;
        break;
    default:
        VAR15->VAR23->VAR27 = VAR31;
        break;
    }
    VAR15->VAR23->VAR32 = VAR15->VAR22->VAR33;
    memcpy(&VAR15->VAR23->VAR34[0], VAR15->VAR22->VAR35, VAR15->VAR22->VAR33);
    VAR15->VAR23->VAR36 = VAR15->VAR22->VAR37;
    VAR13.VAR38 = 0;
    if (VAR15->VAR23->VAR27 == VAR28)
    {
        if (VAR15->VAR22->VAR39 == 0)
        {
            VAR13.VAR13 = VAR15->VAR22->VAR40;
            VAR13.VAR38 = VAR15->VAR22->VAR37;
        }
        else
        {
            FUN6(VAR15->VAR23, (struct VAR41 *)VAR15->VAR22->VAR40, VAR15->VAR22->VAR39);
            struct VAR42 *VAR43 = (struct VAR42 *)VAR15->VAR22->VAR40;
            VAR15->VAR5 = FUN7(VAR15->VAR22->VAR37);
            VAR13.VAR13 = VAR15->VAR5;
            VAR13.VAR38 = FUN8(VAR43, VAR15->VAR22->VAR39, 0, VAR15->VAR5, VAR15->VAR22->VAR37);
        }
    }
    if (FUN9(VAR12, VAR10->VAR44, VAR15->VAR23, VAR45, (VAR13.VAR38 > 0) ? &VAR13 : NULL, VAR15) != 0)
    {
        FUN10(VAR15->VAR23);
        FUN5(VAR15);
        return NULL;
    }
    if (VAR15->VAR23->VAR27 == VAR30)
    {
        if (VAR15->VAR22->VAR39 == 0)
        {
            FUN11(VAR15->VAR23, VAR15->VAR22->VAR37, VAR15->VAR22->VAR40);
        }
        else
        {
            FUN12(VAR15->VAR23, (struct VAR41 *)VAR15->VAR22->VAR40, VAR15->VAR22->VAR39);
            int VAR46;
            for (VAR46 = 0; VAR46 < VAR15->VAR22->VAR39; VAR46++)
            {
                struct VAR42 *VAR43 = (struct VAR42 *)VAR15->VAR22->VAR40;
                FUN11(VAR15->VAR23, VAR43[VAR46].VAR47, VAR43[VAR46].VAR48);
            }
        }
    }
    FUN13(VAR10);
    return &VAR15->VAR49;
}