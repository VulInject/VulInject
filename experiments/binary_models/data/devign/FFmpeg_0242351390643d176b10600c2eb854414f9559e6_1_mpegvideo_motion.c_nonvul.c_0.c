void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9, VAR3 **VAR10, FUN2 (*VAR11)[4], int VAR12, int VAR13, int VAR14, int VAR15, int VAR16)
{
    VAR3 *VAR17, *VAR18, *VAR19;
    int VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26, VAR27, VAR28;
    ptrdiff_t VAR29, VAR30;
    if (VAR2->VAR31)
    {
        VAR12 >>= 1;
        VAR13 >>= 1;
    }
    VAR28 = VAR2->VAR28 >> VAR7;
    VAR30 = VAR2->VAR32.VAR33->VAR30[0] << VAR7;
    VAR29 = VAR2->VAR32.VAR33->VAR30[1] << VAR7;
    VAR20 = ((VAR13 & 1) << 1) | (VAR12 & 1);
    VAR24 = VAR2->VAR34 * 16 + (VAR12 >> 1);
    VAR25 = (VAR16 << (4 - VAR7)) + (VAR13 >> 1);
    if (!VAR15 && VAR2->VAR35 == VAR36)
    {
        if ((VAR2->VAR37 & VAR38) && VAR7)
        {
            VAR22 = (VAR12 >> 1) | (VAR12 & 1);
            VAR23 = VAR13 >> 1;
            VAR21 = ((VAR23 & 1) << 1) | (VAR22 & 1);
            VAR26 = VAR2->VAR34 * 8 + (VAR22 >> 1);
            VAR27 = (VAR16 << (3 - VAR7)) + (VAR23 >> 1);
        }
        else
        {
            VAR21 = VAR20 | (VAR13 & 2) | ((VAR12 & 2) >> 1);
            VAR26 = VAR24 >> 1;
            VAR27 = VAR25 >> 1;
        }
    }
    else if (!VAR15 && VAR2->VAR35 == VAR39)
    {
        VAR22 = VAR12 / 4;
        VAR23 = VAR13 / 4;
        VAR21 = 0;
        VAR26 = VAR2->VAR34 * 8 + VAR22;
        VAR27 = VAR16 * 8 + VAR23;
    }
    else
    {
        if (VAR2->VAR40)
        {
            VAR22 = VAR12 / 2;
            VAR23 = VAR13 / 2;
            VAR21 = ((VAR23 & 1) << 1) | (VAR22 & 1);
            VAR26 = VAR2->VAR34 * 8 + (VAR22 >> 1);
            VAR27 = (VAR16 << (3 - VAR7)) + (VAR23 >> 1);
        }
        else
        {
            if (VAR2->VAR41)
            {
                VAR22 = VAR12 / 2;
                VAR21 = ((VAR13 & 1) << 1) | (VAR22 & 1);
                VAR26 = VAR2->VAR34 * 8 + (VAR22 >> 1);
                VAR27 = VAR25;
            }
            else
            {
                VAR21 = VAR20;
                VAR26 = VAR24;
                VAR27 = VAR25;
            }
        }
    }
    VAR17 = VAR10[0] + VAR25 * VAR30 + VAR24;
    VAR18 = VAR10[1] + VAR27 * VAR29 + VAR26;
    VAR19 = VAR10[2] + VAR27 * VAR29 + VAR26;
    if ((unsigned)VAR24 > FUN3(VAR2->VAR42 - (VAR12 & 1) - 16, 0) || (unsigned)VAR25 > FUN3(VAR28 - (VAR13 & 1) - VAR14, 0))
    {
        if (VAR15 || VAR2->VAR43 == VAR44 || VAR2->VAR43 == VAR45)
        {
            FUN4(VAR2->VAR46, VAR47, "", VAR24, VAR25);
            return;
        }
        VAR2->VAR48.FUN5(VAR2->VAR49.VAR50, VAR17, VAR2->VAR30, VAR2->VAR30, 17, 17 + VAR7, VAR24, VAR25 * (1 << VAR7), VAR2->VAR42, VAR2->VAR28);
        VAR17 = VAR2->VAR49.VAR50;
        if (!VAR51 || !(VAR2->VAR46->VAR52 & VAR53))
        {
            VAR3 *VAR54 = VAR2->VAR49.VAR50 + 18 * VAR2->VAR30;
            VAR2->VAR48.FUN5(VAR54, VAR18, VAR2->VAR29, VAR2->VAR29, 9, 9 + VAR7, VAR26, VAR27 * (1 << VAR7), VAR2->VAR42 >> 1, VAR2->VAR28 >> 1);
            VAR2->VAR48.FUN5(VAR54 + 16, VAR19, VAR2->VAR29, VAR2->VAR29, 9, 9 + VAR7, VAR26, VAR27 * (1 << VAR7), VAR2->VAR42 >> 1, VAR2->VAR28 >> 1);
            VAR18 = VAR54;
            VAR19 = VAR54 + 16;
        }
    }
    if (VAR8)
    {
        VAR4 += VAR2->VAR30;
        VAR5 += VAR2->VAR29;
        VAR6 += VAR2->VAR29;
    }
    if (VAR9)
    {
        VAR17 += VAR2->VAR30;
        VAR18 += VAR2->VAR29;
        VAR19 += VAR2->VAR29;
    }
    VAR11[0][VAR20](VAR4, VAR17, VAR30, VAR14);
    if (!VAR51 || !(VAR2->VAR46->VAR52 & VAR53))
    {
        VAR11[VAR2->VAR41][VAR21](VAR5, VAR18, VAR29, VAR14 >> VAR2->VAR40);
        VAR11[VAR2->VAR41][VAR21](VAR6, VAR19, VAR29, VAR14 >> VAR2->VAR40);
    }
    if (!VAR15 && (VAR55 || VAR56) && VAR2->VAR35 == VAR39)
    {
        FUN6(VAR2);
    }
}