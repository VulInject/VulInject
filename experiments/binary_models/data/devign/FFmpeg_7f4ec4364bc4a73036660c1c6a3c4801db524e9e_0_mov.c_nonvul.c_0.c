static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    enum VAR8 *VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    if (VAR2->VAR14->VAR15 < 1)
        return 0;
    VAR7 = VAR2->VAR14->VAR16[VAR2->VAR14->VAR15 - 1];
    VAR9 = (enum VAR8 *)FUN2(VAR7, VAR17, sizeof(*VAR9));
    if (!VAR9)
        return FUN3(VAR18);
    FUN4(VAR4);
    VAR10 = FUN5(VAR4);
    VAR13 = (VAR10 >> 12) & 0x1f;
    VAR11 = (VAR10 >> 9) & 0x7;
    VAR12 = (VAR10 >> 8) & 0x1;
    VAR7->VAR19->VAR20 = VAR21[VAR11];
    if (VAR12)
        VAR7->VAR19->VAR20 |= VAR22;
    VAR7->VAR19->VAR23 = FUN6(VAR7->VAR19->VAR20);
    *VAR9 = VAR13;
    if (VAR7->VAR19->VAR23 > 1 && VAR13 == 0x7)
        *VAR9 = VAR24;
    VAR7->VAR19->VAR25 = *VAR9;
    return 0;
}