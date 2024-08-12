static VAR1 *FUN1(VAR2 *VAR3, unsigned long int VAR4, void *VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10 = VAR3->VAR8;
    struct VAR11 *VAR12 = VAR10->VAR12;
    struct iscsi_data VAR13;
    VAR14 *VAR15;
    VAR15 = FUN2(&VAR16, VAR3, VAR7, VAR8);
    VAR15->VAR10 = VAR10;
    VAR15->VAR17 = NULL;
    VAR15->VAR18 = -VAR19;
    VAR15->VAR5 = NULL;
    VAR15->VAR20 = VAR5;
    if (VAR4 != VAR21)
    {
        FUN3(VAR15, VAR4, VAR5);
        return &VAR15->VAR22;
        VAR15->VAR23 = malloc(sizeof(struct VAR24));
        if (VAR15->VAR23 == NULL)
        {
            FUN4("", FUN5(VAR12));
            memset(VAR15->VAR23, 0, sizeof(struct VAR24));
            switch (VAR15->VAR20->VAR25)
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
                VAR15->VAR23->VAR32 = VAR15->VAR20->VAR33;
                memcpy(&VAR15->VAR23->VAR34[0], VAR15->VAR20->VAR35, VAR15->VAR20->VAR33);
                VAR15->VAR23->VAR36 = VAR15->VAR20->VAR37;
                VAR13.VAR38 = 0;
                if (VAR15->VAR23->VAR27 == VAR28)
                {
                    if (VAR15->VAR20->VAR39 == 0)
                    {
                        VAR13.VAR13 = VAR15->VAR20->VAR40;
                        VAR13.VAR38 = VAR15->VAR20->VAR37;
                    }
                    else
                    {
                        FUN6(VAR15->VAR23, (struct VAR41 *)VAR15->VAR20->VAR40, VAR15->VAR20->VAR39);
                        if (FUN7(VAR12, VAR10->VAR42, VAR15->VAR23, VAR43, (VAR13.VAR38 > 0) ? &VAR13 : NULL, VAR15) != 0)
                        {
                            FUN8(VAR15->VAR23);
                            if (VAR15->VAR23->VAR27 == VAR30)
                            {
                                if (VAR15->VAR20->VAR39 == 0)
                                {
                                    FUN9(VAR15->VAR23, VAR15->VAR20->VAR37, VAR15->VAR20->VAR40);
                                }
                                else
                                {
                                    FUN10(VAR15->VAR23, (struct VAR41 *)VAR15->VAR20->VAR40, VAR15->VAR20->VAR39);
                                    FUN11(VAR10);
                                    return &VAR15->VAR22