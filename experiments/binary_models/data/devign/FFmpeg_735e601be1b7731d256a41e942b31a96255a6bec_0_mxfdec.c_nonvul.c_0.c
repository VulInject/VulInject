static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    static const uint8_t VAR7[16] = {0x43, 0x48, 0x55, 0x4b, 0x43, 0x48, 0x55, 0x4b, 0x43, 0x48, 0x55, 0x4b, 0x43, 0x48, 0x55, 0x4b};
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR12;
    int64_t VAR13 = FUN2(VAR12) + VAR6->VAR14;
    int64_t VAR15;
    uint64_t VAR16;
    uint64_t VAR17;
    uint8_t VAR18[16];
    uint8_t VAR19[16];
    int VAR20;
    if (!VAR9->VAR21 && VAR2->VAR22 && VAR2->VAR23 == 16)
    {
        VAR9->VAR21 = FUN3(VAR24);
        if (!VAR9->VAR21)
            return -1;
        FUN4(VAR9->VAR21, VAR2->VAR22, 128, 1);
    }
    FUN5(VAR12, FUN6(VAR12));
    FUN6(VAR12);
    VAR17 = FUN7(VAR12);
    FUN6(VAR12);
    FUN8(VAR12, VAR6->VAR22, 16);
    if (!FUN9(VAR6, VAR25))
        return -1;
    VAR20 = FUN10(VAR2, VAR6);
    if (VAR20 < 0)
        return -1;
    FUN6(VAR12);
    VAR16 = FUN7(VAR12);
    if (VAR16 < VAR17)
        return -1;
    VAR15 = FUN6(VAR12);
    if (VAR15 < 32 || VAR15 - 32 < VAR16)
        return -1;
    FUN8(VAR12, VAR18, 16);
    FUN8(VAR12, VAR19, 16);
    if (VAR9->VAR21)
        FUN11(VAR9->VAR21, VAR19, VAR19, 1, VAR18, 1);
    if (memcmp(VAR19, VAR7, 16))
        FUN12(VAR2, VAR26, "");
    VAR15 -= 32;
    VAR15 = FUN13(VAR12, VAR4, VAR15);
    if (VAR15 < 0)
        return VAR15;
    else if (VAR15 < VAR17)
        return VAR27;
    VAR15 -= VAR17;
    if (VAR9->VAR21)
        FUN11(VAR9->VAR21, &VAR4->VAR28[VAR17], &VAR4->VAR28[VAR17], VAR15 >> 4, VAR18, 1);
    FUN14(VAR4, VAR16);
    VAR4->VAR29 = VAR20;
    FUN5(VAR12, VAR13 - FUN2(VAR12));
    return 0;
}