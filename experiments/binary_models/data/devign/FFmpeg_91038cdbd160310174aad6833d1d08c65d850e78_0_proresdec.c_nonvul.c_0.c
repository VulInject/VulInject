static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8 = VAR4->VAR9;
    int VAR10 = VAR4->VAR11;
    int VAR12 = VAR6->VAR12;
    int VAR13 = VAR4->VAR13;
    int VAR14 = VAR4->VAR15;
    const VAR16 *VAR17;
    VAR16 *VAR18, *VAR19, *VAR20;
    VAR21 *VAR22 = VAR2->VAR23;
    int VAR24, VAR25, VAR26;
    int VAR27, VAR28, VAR29, VAR30, VAR31;
    int VAR32, VAR33, VAR34;
    VAR17 = VAR6->VAR35[VAR13].VAR36;
    VAR27 = VAR6->VAR35[VAR13 + 1].VAR36 - VAR17;
    VAR26 = FUN2(VAR14);
    VAR18 = VAR22->VAR37[0];
    VAR19 = VAR22->VAR37[1];
    VAR20 = VAR22->VAR37[2];
    VAR32 = VAR22->VAR38[0];
    VAR33 = VAR22->VAR38[1];
    VAR34 = VAR22->VAR38[2];
    if (VAR22->VAR39)
    {
        if (!(VAR12 ^ VAR22->VAR40))
        {
            VAR18 += VAR32;
            VAR19 += VAR33;
            VAR20 += VAR34;
        }
        VAR32 <<= 1;
        VAR33 <<= 1;
        VAR34 <<= 1;
    }
    if (VAR27 < 6)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    VAR28 = VAR17[0] >> 3;
    VAR29 = FUN4(VAR17 + 2);
    VAR30 = FUN4(VAR17 + 4);
    VAR31 = VAR28 > 7 ? FUN4(VAR17 + 6) : VAR27 - VAR29 - VAR30 - VAR28;
    if (VAR28 + VAR29 + VAR30 + VAR31 > VAR27 || VAR31 < 0 || VAR28 < 6)
    {
        FUN3(VAR2, VAR41, "");
        return VAR42;
    }
    VAR25 = FUN5(VAR17[1], 1, 224);
    VAR25 = VAR25 > 128 ? (VAR25 - 96) << 2 : VAR25;
    if (VAR6->VAR43 || VAR25 != VAR6->VAR44)
    {
        VAR6->VAR44 = VAR25;
        for (VAR24 = 0; VAR24 < 64; VAR24++)
        {
            VAR6->VAR45[VAR6->VAR46.VAR47[VAR24]] = VAR6->VAR48[VAR24] * VAR25;
            VAR6->VAR49[VAR6->VAR46.VAR47[VAR24]] = VAR6->VAR50[VAR24] * VAR25;
        }
    }
    FUN6(VAR6, VAR4, VAR17 + VAR28, VAR29, (VAR51 *)(VAR18 + (VAR10 << 4) * VAR32 + (VAR8 << 5)), VAR32, VAR14, 4, VAR26 + 2, VAR6->VAR45);
    FUN6(VAR6, VAR4, VAR17 + VAR28 + VAR29, VAR30, (VAR51 *)(VAR19 + (VAR10 << 4) * VAR33 + (VAR8 << VAR6->VAR52)), VAR33, VAR14, VAR6->VAR53, VAR26 + VAR6->VAR54 - 1, VAR6->VAR49);
    FUN6(VAR6, VAR4, VAR17 + VAR28 + VAR29 + VAR30, VAR31, (VAR51 *)(VAR20 + (VAR10 << 4) * VAR34 + (VAR8 << VAR6->VAR52)), VAR34, VAR14, VAR6->VAR53, VAR26 + VAR6->VAR54 - 1, VAR6->VAR49);
    return 0;
}