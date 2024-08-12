int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    int64_t VAR13;
    uint8_t VAR14[12];
    VAR7 = VAR5->VAR15;
    if (VAR3 <= VAR7)
        return 0;
    if (VAR7 == 0)
    {
        VAR7 = 1;
    }
    while (VAR3 > VAR7)
    {
        VAR7 = (VAR7 * 3 + 1) / 2;
    }
    FUN2("", VAR5->VAR15, VAR7);
    VAR8 = sizeof(VAR11) * VAR7;
    VAR12 = FUN3(FUN4(VAR8, 512));
    memcpy(VAR12, VAR5->VAR16, VAR5->VAR15 * sizeof(VAR11));
    FUN5(VAR2->VAR17, VAR18);
    VAR13 = FUN6(VAR2, VAR8);
    if (VAR13 < 0)
    {
        FUN7(VAR12);
        return VAR13;
    }
    FUN5(VAR2->VAR17, VAR19);
    for (VAR10 = 0; VAR10 < VAR5->VAR15; VAR10++)
        VAR12[VAR10] = FUN8(VAR12[VAR10]);
    VAR9 = FUN9(VAR2->VAR17, VAR13, VAR12, VAR8);
    if (VAR9 != VAR8)
        goto VAR20;
    for (VAR10 = 0; VAR10 < VAR5->VAR15; VAR10++)
        VAR12[VAR10] = FUN10(VAR12[VAR10]);
    FUN5(VAR2->VAR17, VAR21);
    FUN11((VAR22 *)VAR14, VAR7);
    FUN12((VAR11 *)(VAR14 + 4), VAR13);
    VAR9 = FUN9(VAR2->VAR17, FUN13(VAR23, VAR15), VAR14, sizeof(VAR14));
    if (VAR9 != sizeof(VAR14))
    {
        goto VAR20;
    }
    FUN7(VAR5->VAR16);
    FUN14(VAR2, VAR5->VAR24, VAR5->VAR15 * sizeof(VAR11));
    VAR5->VAR24 = VAR13;
    VAR5->VAR16 = VAR12;
    VAR5->VAR15 = VAR7;
    return 0;
VAR20:
    FUN7(VAR12);
    FUN14(VAR2, VAR13, VAR8);
    return VAR9 < 0 ? VAR9 : -VAR25;
}