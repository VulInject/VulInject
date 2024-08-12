VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5, BdrvRequestFlags VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    struct IscsiTask VAR10;
    uint64_t VAR11;
    uint32_t VAR12;
    if (!FUN2(VAR4, VAR5, VAR8))
    {
        return -VAR13;
    }
    if (!(VAR6 & VAR14) && !VAR8->VAR15)
    {
        return -VAR16;
    }
    if ((VAR6 & VAR14) && !VAR8->VAR17.VAR18)
    {
        return -VAR16;
    }
    VAR11 = FUN3(VAR4, VAR8);
    VAR12 = FUN3(VAR5, VAR8);
    if (VAR8->VAR19 == NULL)
    {
        VAR8->VAR19 = FUN4(VAR8->VAR20);
    }
    FUN5(VAR8, &VAR10);
VAR21:
    if (FUN6(VAR8->VAR22, VAR8->VAR23, VAR11, VAR8->VAR19, VAR8->VAR20, VAR12, 0, !!(VAR6 & VAR14), 0, 0, VAR24, &VAR10) == NULL)
    {
        return -VAR25;
    }
    while (!VAR10.VAR26)
    {
        FUN7(VAR8);
        FUN8();
    }
    if (VAR10.VAR27 == VAR28 && VAR10.VAR29->VAR30.VAR31 == VAR32 && (VAR10.VAR29->VAR30.VAR33 == VAR34 || VAR10.VAR29->VAR30.VAR33 == VAR35))
    {
        VAR8->VAR15 = false;
        FUN9(VAR10.VAR29);
        return -VAR16;
    }
    if (VAR10.VAR29 != NULL)
    {
        FUN9(VAR10.VAR29);
        VAR10.VAR29 = NULL;
    }
    if (VAR10.VAR36)
    {
        VAR10.VAR26 = 0;
        goto VAR21;
    }
    if (VAR10.VAR27 != VAR37)
    {
        return -VAR38;
    }
    return 0;
}