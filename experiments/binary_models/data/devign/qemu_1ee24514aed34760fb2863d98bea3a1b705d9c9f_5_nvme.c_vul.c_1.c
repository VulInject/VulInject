static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR5;
    uint16_t VAR10 = FUN2(VAR9->VAR10);
    uint16_t VAR11 = FUN2(VAR9->VAR12);
    uint16_t VAR13 = FUN2(VAR9->VAR13);
    uint16_t VAR14 = FUN2(VAR9->VAR15);
    uint64_t VAR16 = FUN3(VAR9->VAR16);
    if (!VAR10 || !FUN4(VAR3, VAR10))
    {
        return VAR17 | VAR18;
    }
    if (!VAR13 || VAR13 > FUN5(VAR3->VAR19.VAR20))
    {
        return VAR21 | VAR18;
    }
    if (!VAR16)
    {
        return VAR22 | VAR18;
    }
    if (VAR11 > VAR3->VAR23)
    {
        return VAR24 | VAR18;
    }
    if (!(FUN6(VAR14)))
    {
        return VAR22 | VAR18;
    }
    VAR7 = FUN7(sizeof(*VAR7));
    FUN8(VAR7, VAR3, VAR16, VAR10, VAR11, VAR13 + 1, FUN9(VAR14));
    return VAR25;
}