static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9[1])
{
    const int VAR10 = VAR4->VAR11;
    int VAR12;
    const int VAR13 = FUN2(VAR2->VAR13 + VAR4->VAR13, 0, VAR14 * 16);
    int VAR15 = VAR16[VAR13 & (VAR14 - 1)] << (VAR13 >> VAR17);
    int VAR18 = (VAR2->VAR19 * VAR15) >> VAR20;
    int VAR21 = 0;
    if (VAR4->VAR22 == VAR2->VAR23 || VAR2->VAR13 == VAR24)
    {
        VAR18 = 0;
        VAR15 = 1 << VAR25;
    }
    if (VAR7 != 0)
        VAR21 = VAR9[0];
    for (VAR12 = VAR7; VAR12 < VAR8; VAR12++)
    {
        int VAR26 = 0;
        int VAR27;
        VAR28 *VAR29 = FUN3(VAR6, VAR12 * VAR4->VAR30 + VAR4->VAR31) + VAR4->VAR32;
        memset(VAR29, 0, VAR4->VAR11 * sizeof(VAR28));
        VAR27 = VAR4->VAR33[VAR21].VAR34;
        VAR26 = VAR4->VAR33[VAR21++].VAR26;
        while (VAR26 < VAR10)
        {
            register int VAR35 = ((VAR27 >> 1) * VAR15 + VAR18) >> VAR25;
            register int VAR36 = -(VAR27 & 1);
            VAR29[VAR26] = (VAR35 ^ VAR36) - VAR36;
            VAR27 = VAR4->VAR33[VAR21].VAR34;
            VAR26 = VAR4->VAR33[VAR21++].VAR26;
        }
    }
    VAR9[0] = VAR21;
    return;
}