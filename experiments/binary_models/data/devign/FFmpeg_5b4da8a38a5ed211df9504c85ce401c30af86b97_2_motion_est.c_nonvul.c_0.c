static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    VAR13 *const VAR14 = &VAR2->VAR15;
    VAR16 *const VAR17 = VAR14->VAR18[VAR2->VAR19] + VAR20;
    VAR16 *const VAR21 = VAR14->VAR18[VAR2->VAR22] + VAR20;
    int VAR23 = VAR14->VAR23;
    VAR16 *VAR24 = VAR14->VAR25;
    VAR16 *VAR26;
    int VAR27;
    int VAR28, VAR29;
    int VAR30;
    VAR16 **VAR31 = VAR14->VAR32[0];
    VAR16 **VAR33 = VAR14->VAR34[0];
    VAR16 **VAR35 = VAR14->VAR34[2];
    if (VAR2->VAR36)
    {
        VAR27 = ((VAR4 & 3) << 2) | (VAR3 & 3);
        VAR28 = VAR3 >> 2;
        VAR29 = VAR4 >> 2;
        VAR26 = VAR33[0] + (VAR29 * VAR23) + VAR28;
        VAR2->VAR37.VAR38[0][VAR27](VAR24, VAR26, VAR23);
        VAR27 = ((VAR6 & 3) << 2) | (VAR5 & 3);
        VAR28 = VAR5 >> 2;
        VAR29 = VAR6 >> 2;
        VAR26 = VAR35[0] + (VAR29 * VAR23) + VAR28;
        VAR2->VAR37.VAR39[VAR11][VAR27](VAR24, VAR26, VAR23);
    }
    else
    {
        VAR27 = ((VAR4 & 1) << 1) | (VAR3 & 1);
        VAR28 = VAR3 >> 1;
        VAR29 = VAR4 >> 1;
        VAR26 = VAR33[0] + (VAR29 * VAR23) + VAR28;
        VAR2->VAR40.VAR41[VAR11][VAR27](VAR24, VAR26, VAR23, VAR12);
        VAR27 = ((VAR6 & 1) << 1) | (VAR5 & 1);
        VAR28 = VAR5 >> 1;
        VAR29 = VAR6 >> 1;
        VAR26 = VAR35[0] + (VAR29 * VAR23) + VAR28;
        VAR2->VAR40.VAR42[VAR11][VAR27](VAR24, VAR26, VAR23, VAR12);
    }
    VAR30 = (VAR17[VAR3 - VAR7] + VAR17[VAR4 - VAR8]) * VAR14->VAR43 + (VAR21[VAR5 - VAR9] + VAR21[VAR6 - VAR10]) * VAR14->VAR43 + VAR2->VAR44.VAR45[VAR11](VAR2, VAR31[0], VAR24, VAR23, VAR12);
    if (VAR14->VAR46->VAR45 & VAR47)
    {
    }
    return VAR30;
}