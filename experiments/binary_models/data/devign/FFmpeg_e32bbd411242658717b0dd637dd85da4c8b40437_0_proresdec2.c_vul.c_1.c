static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11[VAR4];
    const VAR12 *VAR13 = VAR10->VAR14;
    VAR15 *VAR16 = VAR7->VAR17;
    int VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    int VAR24, VAR25, VAR26, VAR27;
    VAR12 *VAR28, *VAR29, *VAR30, *VAR31;
    int16_t VAR32[64];
    int16_t VAR33[64];
    int VAR34;
    VAR10->VAR35 = -1;
    VAR19 = VAR13[0] >> 3;
    VAR20 = FUN2(VAR13[1], 1, 224);
    VAR20 = VAR20 > 128 ? VAR20 - 96 << 2 : VAR20;
    VAR24 = FUN3(VAR13 + 2);
    VAR25 = FUN3(VAR13 + 4);
    VAR26 = VAR10->VAR36 - VAR24 - VAR25 - VAR19;
    if (VAR19 > 7)
        VAR26 = FUN3(VAR13 + 6);
    VAR27 = VAR10->VAR36 - VAR24 - VAR25 - VAR26 - VAR19;
    if (VAR24 < 0 || VAR25 < 0 || VAR26 < 0 || VAR19 + VAR24 + VAR25 + VAR26 > VAR10->VAR36)
    {
        FUN4(VAR2, VAR37, "");
        return -1;
    }
    VAR13 += VAR19;
    for (VAR18 = 0; VAR18 < 64; VAR18++)
    {
        VAR32[VAR18] = VAR7->VAR38[VAR18] * VAR20;
        VAR33[VAR18] = VAR7->VAR39[VAR18] * VAR20;
    }
    if (VAR7->VAR40 == 0)
    {
        VAR22 = VAR16->VAR41[0];
        VAR23 = VAR16->VAR41[1];
    }
    else
    {
        VAR22 = VAR16->VAR41[0] << 1;
        VAR23 = VAR16->VAR41[1] << 1;
    }
    if (VAR2->VAR42 == VAR43 || VAR2->VAR42 == VAR44)
    {
        VAR34 = 5;
        VAR21 = 2;
    }
    else
    {
        VAR34 = 4;
        VAR21 = 1;
    }
    VAR28 = VAR16->VAR14[0] + (VAR10->VAR45 << 4) * VAR22 + (VAR10->VAR46 << 5);
    VAR29 = VAR16->VAR14[1] + (VAR10->VAR45 << 4) * VAR23 + (VAR10->VAR46 << VAR34);
    VAR30 = VAR16->VAR14[2] + (VAR10->VAR45 << 4) * VAR23 + (VAR10->VAR46 << VAR34);
    VAR31 = VAR16->VAR14[3] + (VAR10->VAR45 << 4) * VAR22 + (VAR10->VAR46 << 5);
    if (VAR7->VAR40 && VAR7->VAR47 ^ VAR7->VAR17->VAR48)
    {
        VAR28 += VAR16->VAR41[0];
        VAR29 += VAR16->VAR41[1];
        VAR30 += VAR16->VAR41[2];
        VAR31 += VAR16->VAR41[3];
    }
    FUN5(VAR2, VAR10, (VAR49 *)VAR28, VAR22, VAR13, VAR24, VAR32);
    if (!(VAR2->VAR50 & VAR51))
    {
        FUN6(VAR2, VAR10, (VAR49 *)VAR29, VAR23, VAR13 + VAR24, VAR25, VAR33, VAR21);
        FUN6(VAR2, VAR10, (VAR49 *)VAR30, VAR23, VAR13 + VAR24 + VAR25, VAR26, VAR33, VAR21);
    }
    if (VAR7->VAR52 && VAR31 && VAR27)
        FUN7(VAR7, (VAR49 *)VAR31, VAR22, VAR13 + VAR24 + VAR25 + VAR26, VAR27, VAR10->VAR53);
    VAR10->VAR35 = 0;
    return 0;
}