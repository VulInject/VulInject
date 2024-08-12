static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int64_t VAR6, VAR7;
    uint8_t VAR8[VAR9];
    VAR4 *VAR10 = NULL;
    VAR11 *VAR12;
    uint32_t VAR13, VAR14;
    ParallelsHeader VAR15;
    int VAR16;
    VAR6 = FUN2(FUN3(VAR3, VAR17, 0), VAR9);
    VAR7 = FUN2(FUN3(VAR3, VAR18, VAR19), VAR9);
    VAR16 = FUN4(VAR1, VAR3, &VAR10);
    if (VAR16 < 0)
    {
        FUN5(VAR5, VAR10);
        return VAR16;
    }
    VAR12 = NULL;
    VAR16 = FUN6(&VAR12, VAR1, NULL, NULL, VAR20 | VAR21, NULL, &VAR10);
    if (VAR16 < 0)
    {
        FUN5(VAR5, VAR10);
        return VAR16;
    }
    VAR16 = FUN7(VAR12, 0);
    if (VAR16 < 0)
    {
        goto VAR22;
    }
    VAR13 = FUN8(VAR6, VAR7);
    VAR14 = FUN8(VAR13 * sizeof(VAR23) + sizeof(VAR24), VAR7);
    VAR14 = (VAR14 * VAR7) >> VAR25;
    memset(&VAR15, 0, sizeof(VAR15));
    memcpy(VAR15.VAR26, VAR27, sizeof(VAR15.VAR26));
    VAR15.VAR28 = FUN9(VAR29);
    VAR15.VAR30 = FUN9(16);
    VAR15.VAR31 = FUN9(VAR6 / VAR9 / 16 / 32);
    VAR15.VAR32 = FUN9(VAR7 >> VAR25);
    VAR15.VAR13 = FUN9(VAR13);
    VAR15.VAR33 = FUN10(FUN8(VAR6, VAR9));
    VAR15.VAR34 = FUN9(VAR14);
    memset(VAR8, 0, sizeof(VAR8));
    memcpy(VAR8, &VAR15, sizeof(VAR15));
    VAR16 = FUN11(VAR12, 0, VAR8, VAR9);
    if (VAR16 < 0)
    {
        goto VAR22;
    }
    VAR16 = FUN12(VAR12, 1, VAR14 - 1, 0);
    if (VAR16 < 0)
    {
        goto VAR22;
    }
    VAR16 = 0;
VAR35:
    FUN13(VAR12);
    return VAR16;
VAR22:
    FUN14(VAR5, -VAR16, "");
    goto VAR35;
}