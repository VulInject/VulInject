static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    if (!VAR2->VAR10.VAR11 || !VAR2->VAR10.VAR11->VAR12[0])
        return 1;
    VAR6 = 0;
    for (VAR4 = 0; VAR4 < VAR2->VAR13; VAR4++)
    {
        const int VAR14 = VAR2->VAR15[VAR4];
        const int VAR16 = VAR2->VAR17[VAR14];
        if (!((VAR16 & VAR18) && (VAR16 & VAR19)))
            VAR6++;
    }
    if (VAR2->VAR20->VAR21 == VAR22 && VAR2->VAR23 <= 0)
        return 1;
    if (VAR6 < 5)
        return 0;
    FF_DISABLE_DEPRECATION_WARNINGS if (VAR24 && VAR2->VAR20->VAR25 && VAR2->VAR26.VAR11->VAR27 == VAR28) return 1;
    FF_ENABLE_DEPRECATION_WARNINGS VAR7 = FUN2(VAR6 / 50, 1);
    VAR3 = 0;
    VAR5 = 0;
    for (VAR9 = 0; VAR9 < VAR2->VAR29 - 1; VAR9++)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR30; VAR8++)
        {
            int VAR16;
            const int VAR14 = VAR8 + VAR9 * VAR2->VAR31;
            VAR16 = VAR2->VAR17[VAR14];
            if ((VAR16 & VAR18) && (VAR16 & VAR19))
                continue;
            VAR5++;
            if ((VAR5 % VAR7) != 0)
                continue;
            if (VAR2->VAR26.VAR11->VAR27 == VAR28)
            {
                int *VAR32 = VAR2->VAR26.VAR11->VAR32;
                VAR33 *VAR34 = VAR2->VAR26.VAR11->VAR12[0] + VAR8 * 16 + VAR9 * 16 * VAR32[0];
                VAR33 *VAR35 = VAR2->VAR10.VAR11->VAR12[0] + VAR8 * 16 + VAR9 * 16 * VAR32[0];
                if (VAR2->VAR20->VAR21 == VAR22)
                {
                }
                else
                {
                    FUN3(VAR2->VAR10.VAR36, VAR9, 0);
                }
                VAR3 += VAR2->VAR37.VAR38[0](NULL, VAR35, VAR34, VAR32[0], 16);
                VAR3 -= VAR2->VAR37.VAR38[0](NULL, VAR35, VAR35 + VAR32[0] * 16, VAR32[0], 16);
            }
            else
            {
                if (FUN4(VAR2->VAR26.VAR39[VAR14]))
                    VAR3++;
                else
                    VAR3--;
            }
        }
    }
    return VAR3 > 0;
}