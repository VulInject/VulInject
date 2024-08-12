int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    struct vring_desc VAR7;
    unsigned int VAR8, VAR9, VAR10 = 0, VAR11 = VAR4->VAR12.VAR11;
    uint16_t VAR13, VAR14;
    int VAR15;
    VAR6->VAR16 = VAR6->VAR17 = 0;
    if (VAR4->VAR18)
    {
        VAR15 = -VAR19;
        goto VAR20;
    }
    VAR14 = VAR4->VAR14;
    VAR13 = FUN2(VAR2, VAR4);
    FUN3();
    if (FUN4((VAR21)(VAR13 - VAR14) > VAR11))
    {
        FUN5("", VAR14, VAR13);
        VAR15 = -VAR19;
        goto VAR20;
    }
    if (VAR13 == VAR14)
    {
        VAR15 = -VAR22;
        goto VAR20;
    }
    FUN6();
    VAR9 = FUN7(VAR2, VAR4, VAR14 % VAR11);
    VAR6->VAR23 = VAR9;
    if (FUN4(VAR9 >= VAR11))
    {
        FUN5("", VAR9, VAR11);
        VAR15 = -VAR19;
        goto VAR20;
    }
    VAR8 = VAR9;
    do
    {
        if (FUN4(VAR8 >= VAR11))
        {
            FUN5("", VAR8, VAR11, VAR9);
            VAR15 = -VAR19;
            goto VAR20;
        }
        if (FUN4(++VAR10 > VAR11))
        {
            FUN5("", VAR8, VAR11, VAR9);
            VAR15 = -VAR19;
            goto VAR20;
        }
        FUN8(VAR2, &VAR4->VAR12.VAR7[VAR8], &VAR7);
        FUN3();
        if (VAR7.VAR24 & VAR25)
        {
            VAR15 = FUN9(VAR2, VAR4, VAR6, &VAR7);
            if (VAR15 < 0)
            {
                goto VAR20;
            }
            continue;
        }
        VAR15 = FUN10(VAR4, VAR6, &VAR7);
        if (VAR15 < 0)
        {
            goto VAR20;
        }
        VAR8 = VAR7.VAR26;
    } while (VAR7.VAR24 & VAR27);
    VAR4->VAR14++;
    if (FUN11(VAR2, VAR28))
    {
        FUN12(&VAR4->VAR12) = FUN13(VAR2, VAR4->VAR14);
    }
    return VAR9;
VAR20:
    assert(VAR15 < 0);
    if (VAR15 == -VAR19)
    {
        VAR4->VAR18 = true;
    }
    FUN14(VAR6);
    return VAR15;
}