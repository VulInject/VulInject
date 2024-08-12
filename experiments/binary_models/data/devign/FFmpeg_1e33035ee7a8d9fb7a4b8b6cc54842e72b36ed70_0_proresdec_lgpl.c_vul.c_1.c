static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = VAR3;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = VAR5->VAR10;
    int VAR11 = VAR5->VAR12;
    int VAR13 = VAR7->VAR13;
    int VAR14 = VAR5->VAR14;
    int VAR15 = VAR5->VAR16;
    const VAR17 *VAR18;
    VAR17 *VAR19, *VAR20, *VAR21, *VAR22;
    VAR23 *VAR24 = VAR7->VAR25;
    int VAR26, VAR27, VAR28;
    int VAR29, VAR30;
    int VAR31, VAR32, VAR33, VAR34;
    int VAR35, VAR36, VAR37, VAR38;
    int VAR39[4];
    int VAR40;
    VAR18 = VAR7->VAR41[VAR14].VAR42;
    VAR29 = VAR7->VAR41[VAR14 + 1].VAR42 - VAR18;
    VAR28 = FUN2(VAR15);
    VAR19 = VAR24->VAR43[0];
    VAR20 = VAR24->VAR43[1];
    VAR21 = VAR24->VAR43[2];
    VAR22 = VAR24->VAR43[3];
    VAR35 = VAR24->VAR44[0];
    VAR36 = VAR24->VAR44[1];
    VAR37 = VAR24->VAR44[2];
    VAR38 = VAR24->VAR44[3];
    if (VAR24->VAR45)
    {
        if (!(VAR13 ^ VAR24->VAR46))
        {
            VAR19 += VAR35;
            VAR20 += VAR36;
            VAR21 += VAR37;
            if (VAR22)
                VAR22 += VAR38;
        }
        VAR35 <<= 1;
        VAR36 <<= 1;
        VAR37 <<= 1;
        VAR38 <<= 1;
    }
    VAR19 += (VAR11 << 4) * VAR35 + (VAR9 << 5);
    VAR20 += (VAR11 << 4) * VAR36 + (VAR9 << VAR7->VAR47);
    VAR21 += (VAR11 << 4) * VAR37 + (VAR9 << VAR7->VAR47);
    if (VAR22)
        VAR22 += (VAR11 << 4) * VAR38 + (VAR9 << 5);
    if (VAR29 < 6)
    {
        FUN3(VAR2, VAR48, "");
        return VAR49;
    }
    VAR30 = VAR18[0] >> 3;
    VAR39[0] = VAR30;
    VAR31 = FUN4(VAR18 + 2);
    VAR39[1] = VAR39[0] + VAR31;
    VAR32 = FUN4(VAR18 + 4);
    VAR39[2] = VAR39[1] + VAR32;
    VAR33 = VAR30 > 7 ? FUN4(VAR18 + 6) : VAR29 - VAR39[2];
    VAR39[3] = VAR39[2] + VAR33;
    VAR34 = VAR7->VAR50 ? VAR29 - VAR39[3] : 0;
    if (VAR33 < 0 || VAR34 < 0 || VAR30 < 6)
    {
        FUN3(VAR2, VAR48, "");
        return VAR49;
    }
    VAR27 = FUN5(VAR18[1], 1, 224);
    VAR27 = VAR27 > 128 ? (VAR27 - 96) << 2 : VAR27;
    if (VAR7->VAR51 || VAR27 != VAR5->VAR52)
    {
        VAR5->VAR52 = VAR27;
        for (VAR26 = 0; VAR26 < 64; VAR26++)
        {
            VAR5->VAR53[VAR7->VAR54.VAR55[VAR26]] = VAR7->VAR56[VAR26] * VAR27;
            VAR5->VAR57[VAR7->VAR54.VAR55[VAR26]] = VAR7->VAR58[VAR26] * VAR27;
        }
    }
    VAR40 = FUN6(VAR7, VAR5, VAR18 + VAR39[0], VAR31, (VAR59 *)VAR19, VAR35, VAR15, 4, VAR28 + 2, VAR5->VAR53, 0);
    if (VAR40 < 0)
        return VAR40;
    VAR40 = FUN6(VAR7, VAR5, VAR18 + VAR39[1], VAR32, (VAR59 *)VAR20, VAR36, VAR15, VAR7->VAR60, VAR28 + VAR7->VAR61 - 1, VAR5->VAR57, 1);
    if (VAR40 < 0)
        return VAR40;
    VAR40 = FUN6(VAR7, VAR5, VAR18 + VAR39[2], VAR33, (VAR59 *)VAR21, VAR37, VAR15, VAR7->VAR60, VAR28 + VAR7->VAR61 - 1, VAR5->VAR57, 1);
    if (VAR40 < 0)
        return VAR40;
    if (VAR22 && VAR34)
        FUN7(VAR7, VAR5, VAR18 + VAR39[3], VAR34, (VAR59 *)VAR22, VAR38, VAR15);
    return 0;
}