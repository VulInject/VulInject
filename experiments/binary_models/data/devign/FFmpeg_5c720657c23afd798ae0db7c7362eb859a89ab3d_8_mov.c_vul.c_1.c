static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    uint8_t VAR8;
    if (VAR2->VAR9->VAR10 < 1)
        return 0;
    VAR7 = VAR2->VAR9->VAR11[VAR2->VAR9->VAR10 - 1];
    if (VAR5.VAR12 >= (1 << 28) || VAR5.VAR12 < 7)
        return VAR13;
    VAR8 = FUN2(VAR4);
    if ((VAR8 & 0xf0) != 0xc0)
        return 0;
    FUN3(VAR7->VAR14->VAR15);
    VAR7->VAR14->VAR15 = FUN4(VAR5.VAR12 - 7 + VAR16);
    if (!VAR7->VAR14->VAR15)
        return FUN5(VAR17);
    VAR7->VAR14->VAR18 = VAR5.VAR12 - 7;
    FUN6(VAR4, 6, VAR19);
    FUN7(VAR4, VAR7->VAR14->VAR15, VAR7->VAR14->VAR18);
    return 0;
}