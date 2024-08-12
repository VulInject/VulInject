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
    VAR10 = FUN4(VAR4);
    VAR13 = (VAR10 >> 14) & 0x7;
    VAR11 = (VAR10 >> 11) & 0x7;
    VAR12 = (VAR10 >> 10) & 0x1;
    VAR7->VAR19->VAR20 = ((int[]){2, 1, 2, 3, 3, 4, 4, 5})[VAR11] + VAR12;
    VAR7->VAR19->VAR21 = VAR22[VAR11];
    if (VAR12)
        VAR7->VAR19->VAR21 |= VAR23;
    *VAR9 = VAR13;
    if (VAR7->VAR19->VAR20 > 1 && VAR13 == 0x7)
        *VAR9 = VAR24;
    VAR7->VAR19->VAR25 = *VAR9;
    return 0;
}