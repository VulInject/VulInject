static inline void FUN1(VAR1 *VAR2, const int VAR3, const int VAR4, const int VAR5, int VAR6, const int VAR7, const int VAR8, int VAR9, const int VAR10, int VAR11, FUN2 (*VAR12)[16], FUN3(*VAR13))
{
    VAR14 *VAR15 = &VAR2->VAR15;
    VAR16 *VAR17, *VAR18, *VAR19, *VAR20, *VAR21, *VAR22;
    int VAR23, VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31, VAR32, VAR33, VAR34, VAR35;
    int VAR36 = VAR15->VAR37 * 2 + VAR15->VAR38 * 2 * VAR15->VAR39 + VAR6;
    int VAR40 = 1;
    if (VAR10)
    {
        int VAR41, VAR42;
        VAR24 = (VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][0] + (3 << 24)) / 3 - (1 << 24);
        VAR25 = (VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][1] + (3 << 24)) / 3 - (1 << 24);
        VAR28 = (VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][0] + (3 << 24)) % 3;
        VAR29 = (VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][1] + (3 << 24)) % 3;
        VAR41 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][0] / 2;
        VAR42 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][1] / 2;
        VAR26 = (VAR41 + (3 << 24)) / 3 - (1 << 24);
        VAR27 = (VAR42 + (3 << 24)) / 3 - (1 << 24);
        VAR30 = VAR46[(VAR41 + (3 << 24)) % 3];
        VAR31 = VAR46[(VAR42 + (3 << 24)) % 3];
    }
    else
    {
        int VAR47, VAR48;
        VAR24 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][0] >> 2;
        VAR25 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][1] >> 2;
        VAR28 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][0] & 3;
        VAR29 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][1] & 3;
        VAR47 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][0] / 2;
        VAR48 = VAR15->VAR43->VAR44.VAR45[VAR9][VAR36][1] / 2;
        VAR26 = VAR47 >> 2;
        VAR27 = VAR48 >> 2;
        VAR30 = (VAR47 & 3) << 1;
        VAR31 = (VAR48 & 3) << 1;
        if (VAR30 == 6 && VAR31 == 6)
            VAR30 = VAR31 = 4;
    }
    VAR23 = VAR29 * 4 + VAR28;
    VAR20 = VAR9 ? VAR15->VAR49->VAR44.VAR50[0] : VAR15->VAR51->VAR44.VAR50[0];
    VAR21 = VAR9 ? VAR15->VAR49->VAR44.VAR50[1] : VAR15->VAR51->VAR44.VAR50[1];
    VAR22 = VAR9 ? VAR15->VAR49->VAR44.VAR50[2] : VAR15->VAR51->VAR44.VAR50[2];
    VAR32 = VAR15->VAR37 * 16 + VAR4 + VAR24;
    VAR33 = VAR15->VAR38 * 16 + VAR5 + VAR25;
    VAR34 = VAR15->VAR37 * 8 + (VAR4 >> 1) + VAR26;
    VAR35 = VAR15->VAR38 * 8 + (VAR5 >> 1) + VAR27;
    VAR20 += VAR33 * VAR15->VAR52 + VAR32;
    VAR21 += VAR35 * VAR15->VAR53 + VAR34;
    VAR22 += VAR35 * VAR15->VAR53 + VAR34;
    if ((unsigned)(VAR32 - !!VAR28 * 2) > VAR15->VAR54 - !!VAR28 * 2 - (VAR7 << 3) - 4 || (unsigned)(VAR33 - !!VAR29 * 2) > VAR15->VAR55 - !!VAR29 * 2 - (VAR8 << 3) - 4)
    {
        VAR16 *VAR56 = VAR15->VAR57 + 22 * VAR15->VAR52;
        VAR20 -= 2 + 2 * VAR15->VAR52;
        VAR15->VAR58.FUN4(VAR15->VAR57, VAR20, VAR15->VAR52, (VAR7 << 3) + 6, (VAR8 << 3) + 6, VAR32 - 2, VAR33 - 2, VAR15->VAR54, VAR15->VAR55);
        VAR20 = VAR15->VAR57 + 2 + 2 * VAR15->VAR52;
        VAR15->VAR58.FUN4(VAR56, VAR21, VAR15->VAR53, (VAR7 << 2) + 1, (VAR8 << 2) + 1, VAR34, VAR35, VAR15->VAR54 >> 1, VAR15->VAR55 >> 1);
        VAR15->VAR58.FUN4(VAR56 + 16, VAR22, VAR15->VAR53, (VAR7 << 2) + 1, (VAR8 << 2) + 1, VAR34, VAR35, VAR15->VAR54 >> 1, VAR15->VAR55 >> 1);
        VAR21 = VAR56;
        VAR22 = VAR56 + 16;
    }
    if (!VAR11)
    {
        VAR17 = VAR15->VAR59[0] + VAR4 + VAR5 * VAR15->VAR52;
        VAR18 = VAR15->VAR59[1] + (VAR4 >> 1) + (VAR5 >> 1) * VAR15->VAR53;
        VAR19 = VAR15->VAR59[2] + (VAR4 >> 1) + (VAR5 >> 1) * VAR15->VAR53;
    }
    else
    {
        VAR17 = VAR2->VAR60[VAR9] + VAR4 + VAR5 * VAR15->VAR52;
        VAR18 = VAR2->VAR61[VAR9 * 2] + (VAR4 >> 1) + (VAR5 >> 1) * VAR15->VAR53;
        VAR19 = VAR2->VAR61[VAR9 * 2 + 1] + (VAR4 >> 1) + (VAR5 >> 1) * VAR15->VAR53;
    }
    if (VAR3 == VAR62)
    {
        VAR12[1][VAR23](VAR17, VAR20, VAR15->VAR52);
        VAR17 += 8;
        VAR20 += 8;
    }
    else if (VAR3 == VAR63)
    {
        VAR12[1][VAR23](VAR17, VAR20, VAR15->VAR52);
        VAR17 += 8 * VAR15->VAR52;
        VAR20 += 8 * VAR15->VAR52;
    }
    VAR40 = (VAR3 != VAR64) && (VAR3 != VAR62) && (VAR3 != VAR63);
    VAR12[!VAR40][VAR23](VAR17, VAR20, VAR15->VAR52);
    VAR13[2 - VAR7](VAR18, VAR21, VAR15->VAR53, VAR8 * 4, VAR30, VAR31);
    VAR13[2 - VAR7](VAR19, VAR22, VAR15->VAR53, VAR8 * 4, VAR30, VAR31);
}