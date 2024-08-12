static void FUN1(void *VAR1)
{
    int VAR2;
    int32_t VAR3;
    int32_t VAR4;
    V9fsQID VAR5;
    int VAR6 = 0;
    ssize_t VAR7 = 0;
    size_t VAR8 = 7;
    struct stat VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = VAR1;
    VAR14 *VAR15 = VAR13->VAR15;
    if (VAR15->VAR16 == VAR17)
    {
        VAR7 = FUN2(VAR13, VAR8, "", &VAR3, &VAR4);
    }
    else
    {
        VAR7 = FUN2(VAR13, VAR8, "", &VAR3, &VAR4);
    }
    if (VAR7 < 0)
    {
        goto VAR18;
    }
    FUN3(VAR13->VAR19, VAR13->VAR20, VAR3, VAR4);
    VAR11 = FUN4(VAR13, VAR3);
    if (VAR11 == NULL)
    {
        VAR7 = -VAR21;
        goto VAR18;
    }
    FUN5(VAR11->VAR22 != VAR23);
    VAR7 = FUN6(VAR13, &VAR11->VAR24, &VAR9);
    if (VAR7 < 0)
    {
        goto VAR25;
    }
    FUN7(&VAR9, &VAR5);
    if (FUN8(VAR9.VAR26))
    {
        VAR7 = FUN9(VAR13, VAR11);
        if (VAR7 < 0)
        {
            goto VAR25;
        }
        VAR11->VAR22 = VAR27;
        VAR7 = FUN10(VAR13, VAR8, "", &VAR5, 0);
        if (VAR7 < 0)
        {
            goto VAR25;
        }
        VAR7 += VAR8;
    }
    else
    {
        if (VAR15->VAR16 == VAR17)
        {
            VAR2 = FUN11(VAR15, VAR4);
        }
        else
        {
            VAR2 = FUN12(VAR4);
        }
        if (FUN13(&VAR15->VAR28))
        {
            if (VAR4 & VAR29 || VAR4 & VAR30 || VAR4 & VAR31 || VAR4 & VAR32)
            {
                VAR7 = -VAR33;
                goto VAR25;
            }
            VAR2 |= VAR34;
        }
        VAR7 = FUN14(VAR13, VAR11, VAR2);
        if (VAR7 < 0)
        {
            goto VAR25;
        }
        VAR11->VAR22 = VAR35;
        VAR11->VAR36 = VAR2;
        if (VAR2 & VAR37)
        {
            VAR11->VAR2 |= VAR38;
        }
        VAR6 = FUN15(VAR13, &VAR11->VAR24);
        VAR7 = FUN10(VAR13, VAR8, "", &VAR5, VAR6);
        if (VAR7 < 0)
        {
            goto VAR25;
        }
        VAR7 += VAR8;
    }
    FUN16(VAR13->VAR19, VAR13->VAR20, VAR5.VAR39, VAR5.VAR40, VAR5.VAR24, VAR6);
VAR25:
    FUN17(VAR13, VAR11);
VAR18:
    FUN18(VAR15, VAR13, VAR7);
}