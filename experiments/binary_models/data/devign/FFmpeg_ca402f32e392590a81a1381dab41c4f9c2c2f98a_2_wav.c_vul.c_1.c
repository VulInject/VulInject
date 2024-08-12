static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int64_t VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    uint8_t VAR13[16];
    FUN2(VAR7, VAR13, 16);
    if (memcmp(VAR13, VAR14, 16))
        return -1;
    if (FUN3(VAR7) < 16 + 8 + 16 + 8 + 16 + 8)
        return -1;
    FUN2(VAR7, VAR13, 16);
    if (memcmp(VAR13, VAR15, 16))
    {
        FUN4(VAR2, VAR16, "");
        return -1;
    }
    VAR5 = FUN5(VAR7, VAR17);
    if (VAR5 < 0)
    {
        FUN4(VAR2, VAR16, "");
        return -1;
    }
    VAR12 = FUN6(VAR2, 0);
    if (!VAR12)
        return FUN7(VAR18);
    FUN8(VAR7, VAR12->VAR19, VAR5 - 24);
    FUN9(VAR7, FUN10(VAR5, FUN11(8)) - VAR5);
    VAR12->VAR20 = VAR21;
    FUN12(VAR12, 64, 1, VAR12->VAR19->VAR22);
    VAR5 = FUN5(VAR7, VAR23);
    if (VAR5 < 0)
    {
        FUN4(VAR2, VAR16, "");
        return -1;
    }
    VAR9->VAR24 = FUN13(VAR7) + VAR5 - 24;
    VAR9->VAR25 = 1;
    return 0;
}