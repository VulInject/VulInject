VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR6;
    const VAR7 *VAR8 = (const VAR7 *)VAR5->VAR9.VAR10[0]->VAR11;
    const VAR12 *VAR13 = (const VAR12 *)VAR5->VAR9.VAR14[0]->VAR11;
    int VAR15, VAR16 = 0;
    const VAR17 *VAR18 = VAR5->VAR9.VAR18;
    PTLCommon VAR19 = VAR8->VAR20.VAR21;
    VUI VAR22 = VAR13->VAR22;
    uint8_t VAR23;
    CFDataRef VAR11 = NULL;
    VAR24 *VAR25;
    int VAR26 = 23 + 5 + VAR8->VAR27 + 5 + VAR13->VAR27 + 3;
    VAR24 *VAR28;
    for (VAR15 = 0; VAR15 < VAR29; VAR15++)
    {
        if (VAR5->VAR9.VAR30[VAR15])
        {
            const VAR17 *VAR18 = (const VAR17 *)VAR5->VAR9.VAR30[VAR15]->VAR11;
            VAR26 += 2 + VAR18->VAR27;
            VAR16++;
        }
    }
    VAR28 = FUN2(VAR26);
    if (!VAR28)
        return NULL;
    VAR25 = VAR28;
    FUN3(VAR25 + 0, 1);
    FUN3(VAR25 + 1, VAR19.VAR31 << 6 | VAR19.VAR32 << 5 | VAR19.VAR33);
    memcpy(VAR25 + 2, VAR19.VAR34, 4);
    FUN3(VAR25 + 6, VAR19.VAR35 << 7 | VAR19.VAR36 << 6 | VAR19.VAR37 << 5 | VAR19.VAR38 << 4);
    FUN3(VAR25 + 7, 0);
    FUN4(VAR25 + 8, 0);
    FUN3(VAR25 + 12, VAR19.VAR39);
    FUN3(VAR25 + 13, 0xf0 | (VAR22.VAR40 >> 4));
    FUN3(VAR25 + 14, VAR22.VAR40 & 0xff);
    if (!VAR22.VAR40)
        VAR23 = 0;
    else if (VAR18->VAR41 && VAR18->VAR42)
        VAR23 = 0;
    else if (VAR18->VAR41)
        VAR23 = 3;
    else if (VAR18->VAR42)
        VAR23 = 2;
    else
        VAR23 = 1;
    FUN3(VAR25 + 15, 0xfc | VAR23);
    FUN3(VAR25 + 16, VAR13->VAR43 | 0xfc);
    FUN3(VAR25 + 17, (VAR13->VAR44 - 8) | 0xfc);
    FUN3(VAR25 + 18, (VAR13->VAR45 - 8) | 0xfc);
    FUN5(VAR25 + 19, 0);
    FUN3(VAR25 + 21, 0 << 6 | VAR13->VAR46 << 3 | VAR13->VAR47 << 2 | 3);
    FUN3(VAR25 + 22, 3);
    VAR25 += 23;
    FUN3(VAR25, 1 << 7 | VAR48 & 0x3f);
    FUN5(VAR25 + 1, 1);
    FUN5(VAR25 + 3, VAR8->VAR27);
    memcpy(VAR25 + 5, VAR8->VAR11, VAR8->VAR27);
    VAR25 += 5 + VAR8->VAR27;
    FUN3(VAR25, 1 << 7 | VAR49 & 0x3f);
    FUN5(VAR25 + 1, 1);
    FUN5(VAR25 + 3, VAR13->VAR27);
    memcpy(VAR25 + 5, VAR13->VAR11, VAR13->VAR27);
    VAR25 += 5 + VAR13->VAR27;
    FUN3(VAR25, 1 << 7 | VAR50 & 0x3f);
    FUN5(VAR25 + 1, VAR16);
    VAR25 += 3;
    for (VAR15 = 0; VAR15 < VAR29; VAR15++)
    {
        if (VAR5->VAR9.VAR30[VAR15])
        {
            const VAR17 *VAR18 = (const VAR17 *)VAR5->VAR9.VAR30[VAR15]->VAR11;
            FUN5(VAR25, VAR18->VAR27);
            memcpy(VAR25 + 2, VAR18->VAR11, VAR18->VAR27);
            VAR25 += 2 + VAR18->VAR27;
        }
    }
    FUN6(VAR25 - VAR28 == VAR26);
    VAR11 = FUN7(VAR51, VAR28, VAR26);
    FUN8(VAR28);
    return VAR11;
}