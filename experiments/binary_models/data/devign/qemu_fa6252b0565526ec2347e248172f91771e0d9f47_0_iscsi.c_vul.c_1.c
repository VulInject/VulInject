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
    if (!VAR8->VAR14.VAR15)
    {
        return -VAR16;
    }
    VAR11 = FUN3(VAR4, VAR8);
    VAR12 = FUN3(VAR5, VAR8);
    if (VAR8->VAR17 == NULL)
    {
        VAR8->VAR17 = FUN4(VAR8->VAR18);
    }
    FUN5(VAR8, &VAR10);
VAR19:
    if (FUN6(VAR8->VAR20, VAR8->VAR21, VAR11, VAR8->VAR17, VAR8->VAR18, VAR12, 0, !!(VAR6 & VAR22), 0, 0, VAR23, &VAR10) == NULL)
    {
        return -VAR24;
    }
    while (!VAR10.VAR25)
    {
        FUN7(VAR8);
        FUN8();
    }
    if (VAR10.VAR26 != NULL)
    {
        FUN9(VAR10.VAR26);
        VAR10.VAR26 = NULL;
    }
    if (VAR10.VAR27)
    {
        goto VAR19;
    }
    if (VAR10.VAR28 != VAR29)
    {
        return -VAR24;
    }
    return 0;
}