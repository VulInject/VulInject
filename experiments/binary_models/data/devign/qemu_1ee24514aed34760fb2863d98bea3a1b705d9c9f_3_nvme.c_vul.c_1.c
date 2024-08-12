static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9 = (VAR8 *)VAR5;
    uint16_t VAR10 = FUN2(VAR9->VAR10);
    uint16_t VAR11 = FUN2(VAR9->VAR11);
    uint16_t VAR12 = FUN2(VAR9->VAR12);
    uint16_t VAR13 = FUN2(VAR9->VAR14);
    uint64_t VAR15 = FUN3(VAR9->VAR15);
    if (!VAR10 || FUN4(VAR3, VAR10))
    {
        return VAR16 | VAR17;
    }
    if (!VAR11 || !FUN5(VAR3, VAR11))
    {
        return VAR18 | VAR17;
    }
    if (!VAR12 || VAR12 > FUN6(VAR3->VAR19.VAR20))
    {
        return VAR21 | VAR17;
    }
    if (!VAR15 || VAR15 & (VAR3->VAR22 - 1))
    {
        return VAR23 | VAR17;
    }
    if (!(FUN7(VAR13)))
    {
        return VAR23 | VAR17;
    }
    VAR7 = FUN8(sizeof(*VAR7));
    FUN9(VAR7, VAR3, VAR15, VAR11, VAR10, VAR12 + 1);
    return VAR24;
}