static void FUN1(void *VAR1)
{
    int VAR2;
    int VAR3;
    int32_t VAR4;
    int32_t VAR5;
    V9fsQID VAR6;
    ssize_t VAR7 = 0;
    size_t VAR8 = 7;
    struct stat VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = VAR1;
    VAR14 *VAR15 = VAR13->VAR15;
    if (VAR15->VAR16 == VAR17)
    {
        FUN2(VAR13, VAR8, "", &VAR4, &VAR5);
    }
    else
    {
        FUN2(VAR13, VAR8, "", &VAR4, &VAR5);
    }
    FUN3(VAR13->VAR18, VAR13->VAR19, VAR4, VAR5);
    VAR11 = FUN4(VAR13, VAR4);
    if (VAR11 == NULL)
    {
        VAR7 = -VAR20;
        goto VAR21;
    }
    FUN5(VAR11->VAR22 != VAR23);
    VAR7 = FUN6(VAR13, &VAR11->VAR24, &VAR9);
    if (VAR7 < 0)
    {
        goto VAR25;
    }
    FUN7(&VAR9, &VAR6);
    if (FUN8(VAR9.VAR26))
    {
        VAR7 = FUN9(VAR13, VAR11);
        if (VAR7 < 0)
        {
            goto VAR25;
        }
        VAR11->VAR22 = VAR27;
        VAR8 += FUN10(VAR13, VAR8, "", &VAR6, 0);
        VAR7 = VAR8;
    }
    else
    {
        if (VAR15->VAR16 == VAR17)
        {
            VAR2 = FUN11(VAR15, VAR5);
        }
        else
        {
            VAR2 = FUN12(VAR5);
        }
        VAR7 = FUN13(VAR13, VAR11, VAR2);
        if (VAR7 < 0)
        {
            goto VAR25;
        }
        VAR11->VAR22 = VAR28;
        VAR11->VAR29 = VAR2;
        if (VAR2 & VAR30)
        {
            VAR11->VAR2 |= VAR31;
        }
        VAR3 = FUN14(VAR13, &VAR11->VAR24);
        VAR8 += FUN10(VAR13, VAR8, "", &VAR6, VAR3);
        VAR7 = VAR8;
    }
VAR25:
    FUN15(VAR13, VAR11);
VAR21:
    FUN16(VAR15, VAR13, VAR7);