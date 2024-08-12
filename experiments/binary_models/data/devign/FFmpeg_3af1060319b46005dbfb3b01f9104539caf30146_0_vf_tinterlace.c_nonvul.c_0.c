void FUN1(VAR1 *VAR2, VAR3 *VAR4[4], int VAR5[4], const VAR3 *VAR6[4], int VAR7[4], enum AVPixelFormat VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14)
{
    const VAR15 *VAR16 = FUN2(VAR8);
    int VAR17 = VAR16->VAR18;
    int VAR19, VAR20 = VAR16->VAR21;
    int VAR22 = VAR11 == VAR23 ? 1 : 2;
    int VAR24;
    for (VAR19 = 0; VAR19 < VAR16->VAR25; VAR19++)
    {
        int VAR26 = VAR19 == 1 || VAR19 == 2 ? FUN3(VAR10, VAR20) : VAR10;
        int VAR27 = VAR19 == 1 || VAR19 == 2 ? FUN3(VAR9, VAR17) : VAR9;
        VAR3 *VAR28 = VAR4[VAR19];
        const VAR3 *VAR29 = VAR6[VAR19];
        int VAR30 = VAR7[VAR19] * VAR22;
        int VAR31 = VAR5[VAR19] * (VAR12 ? 2 : 1);
        VAR26 = (VAR26 + (VAR11 == VAR32)) / VAR22;
        if (VAR11 == VAR33)
            VAR29 += VAR7[VAR19];
        if (VAR12 && VAR13 == VAR33)
            VAR28 += VAR5[VAR19];
        if (VAR14 & (VAR34 | VAR35))
        {
            int VAR36 = !!(VAR14 & VAR35);
            for (VAR24 = VAR26; VAR24 > 0; VAR24--)
            {
                ptrdiff_t VAR37 = VAR7[VAR19];
                ptrdiff_t VAR38 = -VAR37;
                if (VAR24 >= (VAR26 - VAR36))
                    VAR38 = 0;
                else if (VAR24 <= (1 + VAR36))
                    VAR37 = 0;
                VAR2->FUN4(VAR28, VAR27, VAR29, VAR38, VAR37);
                VAR28 += VAR31;
                VAR29 += VAR30;
            }
        }
        else
        {
            FUN5(VAR28, VAR31, VAR29, VAR30, VAR27, VAR26);
        }
    }
}