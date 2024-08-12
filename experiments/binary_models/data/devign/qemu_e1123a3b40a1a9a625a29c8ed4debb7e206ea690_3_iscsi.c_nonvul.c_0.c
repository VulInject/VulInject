VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5, BdrvRequestFlags VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    struct IscsiTask VAR10;
    uint64_t VAR11;
    uint32_t VAR12;
    bool VAR13 = VAR8->VAR14;
    if (!FUN2(VAR4, VAR5, VAR8))
    {
        return -VAR15;
    }
    if (VAR6 & VAR16)
    {
        if (!VAR13 && !VAR8->VAR17.VAR18)
        {
            VAR13 = true;
        }
        if (VAR13 && !VAR8->VAR17.VAR19)
        {
            VAR6 &= ~VAR16;
            VAR13 = VAR8->VAR14;
        }
    }
    if (!(VAR6 & VAR16) && !VAR8->VAR20)
    {
        return -VAR15;
    }
    VAR11 = VAR4 / VAR8->VAR21;
    VAR12 = VAR5 / VAR8->VAR21;
    if (VAR8->VAR22 == NULL)
    {
        VAR8->VAR22 = FUN3(VAR8->VAR21);
        if (VAR8->VAR22 == NULL)
        {
            return -VAR23;
        }
    }
    FUN4(VAR8, &VAR10);
VAR24:
    if (VAR13)
    {
        VAR10.VAR25 = FUN5(VAR8->VAR26, VAR8->VAR27, VAR11, VAR8->VAR22, VAR8->VAR21, VAR12, 0, !!(VAR6 & VAR16), 0, 0, VAR28, &VAR10);
    }
    else
    {
        VAR10.VAR25 = FUN6(VAR8->VAR26, VAR8->VAR27, VAR11, VAR8->VAR22, VAR8->VAR21, VAR12, 0, !!(VAR6 & VAR16), 0, 0, VAR28, &VAR10);
    }
    if (VAR10.VAR25 == NULL)
    {
        return -VAR23;
    }
    while (!VAR10.VAR29)
    {
        FUN7(VAR8);
        FUN8();
    }
    if (VAR10.VAR30 == VAR31 && VAR10.VAR25->VAR32.VAR33 == VAR34 && (VAR10.VAR25->VAR32.VAR35 == VAR36 || VAR10.VAR25->VAR32.VAR35 == VAR37))
    {
        VAR8->VAR20 = false;
        FUN9(VAR10.VAR25);
        return -VAR15;
    }
    if (VAR10.VAR25 != NULL)
    {
        FUN9(VAR10.VAR25);
        VAR10.VAR25 = NULL;
    }
    if (VAR10.VAR38)
    {
        VAR10.VAR29 = 0;
        goto VAR24;
    }
    if (VAR10.VAR30 != VAR39)
    {
        FUN10(VAR8, VAR4 >> VAR40, VAR5 >> VAR40);
        return VAR10.VAR41;
    }
    if (VAR6 & VAR16)
    {
        FUN10(VAR8, VAR4 >> VAR40, VAR5 >> VAR40);
    }
    else
    {
        FUN11(VAR8, VAR4 >> VAR40, VAR5 >> VAR40);
    }
    return 0;
}