FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    struct IscsiTask VAR11;
    uint64_t VAR12;
    uint32_t VAR13;
    bool VAR14 = VAR7 & VAR15;
    if (VAR14)
    {
        assert(VAR9->VAR16);
    }
    if (!FUN2(VAR3, VAR4, VAR9))
    {
        return -VAR17;
    }
    if (VAR2->VAR18.VAR19 && VAR4 << VAR20 > VAR2->VAR18.VAR19)
    {
        FUN3(""
                     "" VAR21 "",
                     VAR4, VAR2->VAR18.VAR19);
        return -VAR17;
    }
    VAR12 = FUN4(VAR3, VAR9);
    VAR13 = FUN4(VAR4, VAR9);
    FUN5(VAR9, &VAR11);
VAR22:
    if (VAR9->VAR23)
    {
        VAR11.VAR24 = FUN6(VAR9->VAR25, VAR9->VAR26, VAR12, NULL, VAR13 * VAR9->VAR27, VAR9->VAR27, 0, 0, VAR14, 0, 0, VAR28, &VAR11);
    }
    else
    {
        VAR11.VAR24 = FUN7(VAR9->VAR25, VAR9->VAR26, VAR12, NULL, VAR13 * VAR9->VAR27, VAR9->VAR27, 0, 0, VAR14, 0, 0, VAR28, &VAR11);
    }
    if (VAR11.VAR24 == NULL)
    {
        return -VAR29;
    }
    FUN8(VAR11.VAR24, (struct VAR30 *)VAR6->VAR6, VAR6->VAR31);
    while (!VAR11.VAR32)
    {
        FUN9(VAR9);
        FUN10();
    }
    if (VAR11.VAR24 != NULL)
    {
        FUN11(VAR11.VAR24);
        VAR11.VAR24 = NULL;
    }
    if (VAR11.VAR33)
    {
        VAR11.VAR32 = 0;
        goto VAR22;
    }
    if (VAR11.VAR34 != VAR35)
    {
        return VAR11.VAR36;
    }
    FUN12(VAR9, VAR3, VAR4);
    return 0;
}