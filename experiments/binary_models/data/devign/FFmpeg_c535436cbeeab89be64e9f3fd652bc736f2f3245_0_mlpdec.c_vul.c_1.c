static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9[VAR5];
    unsigned int VAR10, VAR11;
    for (VAR10 = 0; VAR10 < VAR8->VAR12; VAR10++)
        if (VAR8->VAR13[VAR10])
            VAR2->VAR14[VAR6 + VAR8->VAR15][VAR10] = FUN2(VAR4);
    for (VAR11 = VAR8->VAR16; VAR11 <= VAR8->VAR17; VAR11++)
    {
        VAR18 *VAR19 = &VAR8->VAR20[VAR11];
        int VAR21 = VAR19->VAR21;
        int VAR22 = VAR8->VAR22[VAR11];
        int VAR23 = VAR19->VAR24 - VAR22;
        int VAR25 = 0;
        if (VAR21 > 0)
            VAR25 = FUN3(VAR4, VAR26[VAR21 - 1].VAR27, VAR28, (9 + VAR28 - 1) / VAR28);
        if (VAR25 < 0)
            return VAR29;
        if (VAR23 > 0)
            VAR25 = (VAR25 << VAR23) + FUN4(VAR4, VAR23);
        VAR25 += VAR19->VAR30;
        VAR25 <<= VAR22;
        VAR2->VAR31[VAR6 + VAR8->VAR15][VAR11] = VAR25;
    }
    return 0;
}