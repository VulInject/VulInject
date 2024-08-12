static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5[10][2];
    const int VAR6 = VAR2->VAR7 + 2;
    const int VAR8 = (VAR4 + 1) * VAR6 + VAR3 + 1;
    int VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18;
    const int VAR19 = VAR2->VAR20[VAR8][0];
    const int VAR21 = VAR2->VAR20[VAR8][1];
    const int VAR22 = VAR2->VAR23;
    const int VAR24 = VAR2->VAR25;
    const int VAR26 = VAR22 - VAR24;
    int VAR27, VAR28;
    int VAR29, VAR30, VAR31, VAR32;
    VAR33 *VAR34 = VAR2->VAR35 - (VAR3 + 1 + (VAR4 + 1) * VAR2->VAR36) * 16;
    FUN2(*VAR37)[2] = VAR2->VAR38;
    VAR39 *VAR40 = VAR2->VAR40[VAR2->VAR41] + VAR42;
    VAR11 = (VAR19 * VAR26) / VAR22;
    VAR12 = (VAR21 * VAR26) / VAR22;
    VAR15 = (-VAR19 * VAR24) / VAR22;
    VAR16 = (-VAR21 * VAR24) / VAR22;
    VAR17 = VAR18 = 0;
    VAR10 = FUN3(VAR2, VAR3, VAR4, VAR11, VAR12, VAR15, VAR16, VAR11, VAR12, VAR15, VAR16) - VAR2->VAR43;
    VAR13 = VAR11 - VAR19;
    VAR14 = VAR12 - VAR21;
    for (VAR28 = -1; VAR28 < 2; VAR28++)
    {
        for (VAR27 = -1; VAR27 < 2; VAR27++)
        {
            VAR33 *VAR44 = VAR2->VAR35 + (VAR28 + 1) * VAR2->VAR36 * 16 + (VAR27 + 1) * 16;
            VAR33 *VAR45;
            int VAR46;
            int VAR47, VAR48;
            const int VAR49 = VAR2->VAR49;
            const int VAR50 = VAR2->VAR50;
            VAR46 = ((VAR12 & 1) << 1) | (VAR11 & 1);
            VAR47 = (VAR3 + VAR27) * 16 + (VAR11 >> 1);
            VAR48 = (VAR4 + VAR28) * 16 + (VAR12 >> 1);
            VAR47 = FUN4(VAR47, -16, VAR49);
            if (VAR47 == VAR49)
                VAR46 &= ~1;
            VAR48 = FUN4(VAR48, -16, VAR50);
            if (VAR48 == VAR50)
                VAR46 &= ~2;
            VAR45 = VAR2->VAR51[0] + (VAR48 * VAR2->VAR36) + VAR47;
            VAR52[VAR46](VAR44, VAR45, VAR2->VAR36, 16);
            VAR52[VAR46](VAR44 + 8, VAR45 + 8, VAR2->VAR36, 16);
            VAR46 = ((VAR14 & 1) << 1) | (VAR13 & 1);
            VAR47 = (VAR3 + VAR27) * 16 + (VAR13 >> 1);
            VAR48 = (VAR4 + VAR28) * 16 + (VAR14 >> 1);
            VAR47 = FUN4(VAR47, -16, VAR49);
            if (VAR47 == VAR49)
                VAR46 &= ~1;
            VAR48 = FUN4(VAR48, -16, VAR50);
            if (VAR48 == VAR50)
                VAR46 &= ~2;
            VAR53[VAR46](VAR44, VAR45, VAR2->VAR36, 16);
            VAR53[VAR46](VAR44 + 8, VAR45 + 8, VAR2->VAR36, 16);
        }
    }
    VAR54[0] = VAR37[VAR8][0];
    VAR54[1] = VAR37[VAR8][1];
    VAR55[0] = VAR37[VAR8 - 1][0];
    VAR55[1] = VAR37[VAR8 - 1][1];
    VAR56[0] = VAR37[VAR8 + 1][0];
    VAR56[1] = VAR37[VAR8 + 1][1];
    VAR57[0] = VAR37[VAR8 + VAR6][0];
    VAR57[1] = VAR37[VAR8 + VAR6][1];
    if ((VAR4 == 0 || VAR2->VAR58))
    {
    }
    else
    {
        VAR59[0] = VAR37[VAR8 - VAR6][0];
        VAR59[1] = VAR37[VAR8 - VAR6][1];
        VAR60[0] = VAR37[VAR8 - VAR6 + 1][0];
        VAR60[1] = VAR37[VAR8 - VAR6 + 1][1];
        VAR61[0] = FUN5(VAR55[0], VAR59[0], VAR60[0]);
        VAR61[1] = FUN5(VAR55[1], VAR59[1], VAR60[1]);
    }
    VAR9 = FUN6(VAR2, &VAR29, &VAR30, VAR5, 0, 0, -16, -16, 15, 15, VAR34);
    if (VAR29 == 0 && VAR30 == 0)
        VAR9 = 99999999;
    if (VAR10 < VAR9)
    {
        VAR9 = VAR10;
        VAR29 = 0;
        VAR30 = 0;
    }
    VAR31 = VAR29 = VAR29 * 2;
    VAR32 = VAR30 = VAR30 * 2;
    for (VAR28 = -1; VAR28 < 2; VAR28++)
    {
        if (VAR32 + VAR28 < -32)
            continue;
        for (VAR27 = -1; VAR27 < 2; VAR27++)
        {
            if (VAR27 == 0 && VAR28 == 0)
                continue;
            if (VAR31 + VAR27 < -32)
                continue;
            VAR10 = FUN3(VAR2, VAR3, VAR4, VAR31 + VAR27 + VAR11, VAR32 + VAR28 + VAR12, VAR31 + VAR27 + VAR13, VAR32 + VAR28 + VAR14, VAR31 + VAR27 + VAR11, VAR32 + VAR28 + VAR12, VAR13, VAR14) - VAR2->VAR43;
            if (VAR10 < VAR9)
            {
                VAR9 = VAR10;
                VAR29 = VAR31 + VAR27;
                VAR30 = VAR32 + VAR28;
            }
        }
    }
    VAR29 *= 2;
    VAR30 *= 2;
    if (VAR29 == 0 && VAR30 == 0)
    {
        VAR13 = VAR15;
        VAR14 = VAR16;
    }
    VAR2->VAR38[VAR8][0] = VAR29;
    VAR2->VAR38[VAR8][1] = VAR30;
    VAR2->VAR62[VAR8][0] = VAR11 + VAR29;
    VAR2->VAR62[VAR8][1] = VAR12 + VAR30;
    VAR2->VAR63[VAR8][0] = VAR13 + VAR29;
    VAR2->VAR63[VAR8][1] = VAR14 + VAR30;
    return VAR9;
}