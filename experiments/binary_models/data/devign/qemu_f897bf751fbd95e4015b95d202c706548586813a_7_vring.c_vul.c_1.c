int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    struct vring_desc VAR7;
    unsigned int VAR8, VAR9, VAR10 = 0, VAR11 = VAR4->VAR12.VAR11;
    uint16_t VAR13, VAR14;
    VAR5 *VAR15 = NULL;
    int VAR16;
    if (VAR4->VAR17)
    {
        VAR16 = -VAR18;
        goto VAR19;
    }
    VAR14 = VAR4->VAR14;
    VAR13 = VAR4->VAR12.VAR20->VAR21;
    FUN2();
    if (FUN3((VAR22)(VAR13 - VAR14) > VAR11))
    {
        FUN4("", VAR14, VAR13);
        VAR16 = -VAR18;
        goto VAR19;
    }
    if (VAR13 == VAR14)
    {
        VAR16 = -VAR23;
        goto VAR19;
    }
    FUN5();
    VAR9 = VAR4->VAR12.VAR20->VAR24[VAR14 % VAR11];
    VAR15 = FUN6(VAR5);
    VAR15->VAR25 = VAR9;
    VAR15->VAR26 = VAR15->VAR27 = 0;
    if (FUN3(VAR9 >= VAR11))
    {
        FUN4("", VAR9, VAR11);
        VAR16 = -VAR18;
        goto VAR19;
    }
    if (VAR2->VAR28 & (1 << VAR29))
    {
        FUN7(&VAR4->VAR12) = VAR4->VAR12.VAR20->VAR21;
    }
    VAR8 = VAR9;
    do
    {
        if (FUN3(VAR8 >= VAR11))
        {
            FUN4("", VAR8, VAR11, VAR9);
            VAR16 = -VAR18;
            goto VAR19;
        }
        if (FUN3(++VAR10 > VAR11))
        {
            FUN4("", VAR8, VAR11, VAR9);
            VAR16 = -VAR18;
            goto VAR19;
        }
        VAR7 = VAR4->VAR12.VAR7[VAR8];
        FUN2();
        if (VAR7.VAR30 & VAR31)
        {
            VAR16 = FUN8(VAR4, VAR15, &VAR7);
            if (VAR16 < 0)
            {
                goto VAR19;
            }
            continue;
        }
        VAR16 = FUN9(VAR4, VAR15, &VAR7);
        if (VAR16 < 0)
        {
            goto VAR19;
        }
        VAR8 = VAR7.VAR32;
    } while (VAR7.VAR30 & VAR33);
    VAR4->VAR14++;
    *VAR6 = VAR15;
    return VAR9;
VAR19:
    assert(VAR16 < 0);
    if (VAR16 == -VAR18)
    {
        VAR4->VAR17 = true;
    }
    if (VAR15)
    {
        FUN10(VAR15);
        FUN11(VAR5, VAR15);
    }
    *VAR6 = NULL;
    return VAR16;
}