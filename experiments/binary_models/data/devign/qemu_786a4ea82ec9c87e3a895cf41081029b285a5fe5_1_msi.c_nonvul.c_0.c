int FUN1(struct VAR1 *VAR2, uint8_t VAR3, unsigned int VAR4, bool VAR5, bool VAR6)
{
    unsigned int VAR7;
    uint16_t VAR8;
    uint8_t VAR9;
    int VAR10;
    if (!VAR11)
    {
        return -VAR12;
    }
    FUN2(VAR2, "" VAR13 "" VAR14 "", VAR3, VAR4, VAR5, VAR6);
    assert(!(VAR4 & (VAR4 - 1)));
    assert(VAR4 > 0);
    assert(VAR4 <= VAR15);
    VAR7 = FUN3(VAR4);
    VAR8 = VAR7 << FUN3(VAR16);
    if (VAR5)
    {
        VAR8 |= VAR17;
    }
    if (VAR6)
    {
        VAR8 |= VAR18;
    }
    VAR9 = FUN4(VAR8);
    VAR10 = FUN5(VAR2, VAR19, VAR3, VAR9);
    if (VAR10 < 0)
    {
        return VAR10;
    }
    VAR2->VAR20 = VAR10;
    VAR2->VAR21 |= VAR22;
    FUN6(VAR2->VAR23 + FUN7(VAR2), VAR8);
    FUN6(VAR2->VAR24 + FUN7(VAR2), VAR25 | VAR26);
    FUN8(VAR2->VAR24 + FUN9(VAR2), VAR27);
    if (VAR5)
    {
        FUN8(VAR2->VAR24 + FUN10(VAR2), 0xffffffff);
    }
    FUN6(VAR2->VAR24 + FUN11(VAR2, VAR5), 0xffff);
    if (VAR6)
    {
        FUN8(VAR2->VAR24 + FUN12(VAR2, VAR5), 0xffffffff >> (VAR15 - VAR4));
    }
    return VAR10;
}