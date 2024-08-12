static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    GetByteContext VAR5;
    PutByteContext VAR6;
    GetBitContext VAR7;
    H2645NAL VAR8 = {NULL};
    HEVCSPS VAR9 = {0};
    HEVCVPS VAR10 = {0};
    uint8_t VAR11[128], VAR12[128];
    VAR13 *VAR14;
    unsigned int VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    if (!VAR4->VAR20)
    {
        FUN2(VAR4, VAR21, "");
        return VAR22;
    }
    VAR16 = FUN3(VAR4->VAR23 + 4, VAR4->VAR20 - 4, &VAR8, 1);
    if (VAR16 < 0)
    {
        FUN2(VAR4, VAR21, "");
        return VAR16;
    }
    VAR16 = FUN4(&VAR7, VAR8.VAR24, VAR8.VAR25);
    if (VAR16 < 0)
    {
        FUN5(&VAR8.VAR26);
        return VAR16;
    }
    FUN6(&VAR7, 1);
    VAR18 = FUN6(&VAR7, 6);
    if (VAR18 != VAR27)
    {
        FUN2(VAR4, VAR21, "", VAR18);
        FUN5(&VAR8.VAR26);
        return VAR28;
    }
    FUN6(&VAR7, 9);
    VAR16 = FUN7(&VAR9, &VAR7, &VAR15, 0, NULL, VAR4);
    FUN5(&VAR8.VAR26);
    if (VAR16 < 0)
    {
        FUN2(VAR4, VAR21, "");
        return VAR16;
    }
    VAR10.VAR29 = 1;
    VAR10.VAR30 = VAR9.VAR31;
    memcpy(&VAR10.VAR32, &VAR9.VAR32, sizeof(VAR10.VAR32));
    VAR10.VAR33 = 1;
    for (VAR17 = 0; VAR17 < VAR34; VAR17++)
    {
        VAR10.VAR35[VAR17] = VAR9.VAR36[VAR17].VAR37;
        VAR10.VAR38[VAR17] = VAR9.VAR36[VAR17].VAR39;
        VAR10.VAR40[VAR17] = VAR9.VAR36[VAR17].VAR41;
    }
    VAR10.VAR42 = 1;
    VAR10.VAR43 = VAR9.VAR44.VAR45;
    VAR10.VAR46 = VAR9.VAR44.VAR47;
    VAR10.VAR48 = VAR9.VAR44.VAR49;
    VAR10.VAR50 = VAR9.VAR44.VAR51;
    VAR10.VAR52 = VAR9.VAR44.VAR53 + 1;
    VAR16 = FUN8(&VAR10, VAR9.VAR54, VAR12, sizeof(VAR12));
    if (VAR16 < 0)
    {
        FUN2(VAR4, VAR21, "");
        return VAR16;
    }
    FUN9(&VAR5, VAR12, VAR16);
    FUN10(&VAR6, VAR11, sizeof(VAR11));
    FUN11(&VAR6, 1);
    FUN12(&VAR6, VAR55 << 1);
    FUN12(&VAR6, 1);
    while (FUN13(&VAR5))
    {
        uint32_t VAR56 = FUN14(&VAR5);
        if (VAR56 <= 3)
        {
            FUN15(&VAR6, 3);
            FUN16(&VAR5, 2);
        }
        else
            FUN12(&VAR6, FUN17(&VAR5));
    }
    VAR19 = FUN18(&VAR6);
    VAR14 = FUN19(VAR19 + VAR4->VAR20 + VAR57);
    if (!VAR14)
        return FUN20(VAR58);
    memcpy(VAR14, VAR11, VAR19);
    memcpy(VAR14 + VAR19, VAR4->VAR23, VAR4->VAR20);
    FUN5(&VAR4->VAR23);
    VAR4->VAR23 = VAR14;
    VAR4->VAR20 += VAR19;
    return 0;
}