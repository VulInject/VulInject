FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, unsigned char *VAR5, int *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10 = NULL;
    VCardStatus VAR11;
    unsigned short VAR12;
    VAR13 *VAR14 = FUN2(VAR2);
    if (VAR14 == NULL)
    {
        return VAR15;
    }
    VAR8 = FUN3(VAR3, VAR4, &VAR12);
    if (VAR8 == NULL)
    {
        VAR10 = FUN4(VAR12);
        VAR11 = VAR16;
    }
    else
    {
        FUN5("", VAR17, VAR8->VAR18, VAR8->VAR19, VAR8->VAR20, VAR8->VAR21, VAR8->VAR22, VAR8->VAR23, FUN6(VAR8->VAR19));
        VAR11 = FUN7(VAR14, VAR8, &VAR10);
        if (VAR10)
        {
            FUN5("", VAR17, VAR10->VAR24, VAR10->VAR25, VAR10->VAR26, VAR10->VAR27, VAR10->VAR28);
        }
    }
    assert(VAR11 == VAR16);
    if (VAR11 == VAR16)
    {
        int VAR29 = FUN8(*VAR6, VAR10->VAR28);
        memcpy(VAR5, VAR10->VAR30, VAR29);
        *VAR6 = VAR29;
    }
    FUN9(VAR10);
    FUN10(VAR8);
    FUN11(VAR14);
    return VAR31;
}