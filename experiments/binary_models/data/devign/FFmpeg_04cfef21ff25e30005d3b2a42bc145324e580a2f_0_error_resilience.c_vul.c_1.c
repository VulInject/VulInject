void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = FUN2(VAR3 + VAR4 * VAR2->VAR9, 0, VAR2->VAR10 - 1);
    const int VAR11 = FUN2(VAR5 + VAR6 * VAR2->VAR9, 0, VAR2->VAR10);
    const int VAR12 = VAR2->VAR13[VAR8];
    const int VAR14 = VAR2->VAR13[VAR11];
    int VAR15 = -1;
    if (!VAR2->VAR16)
        return;
    VAR15 &= ~VAR17;
    if (VAR7 & (VAR18 | VAR19))
    {
        VAR15 &= ~(VAR18 | VAR19);
        VAR2->VAR20 -= VAR11 - VAR8 + 1;
        if (VAR7 & (VAR21 | VAR22))
        {
            VAR15 &= ~(VAR21 | VAR22);
            VAR2->VAR20 -= VAR11 - VAR8 + 1;
            if (VAR7 & (VAR23 | VAR24))
            {
                VAR15 &= ~(VAR23 | VAR24);
                VAR2->VAR20 -= VAR11 - VAR8 + 1;
                if (VAR7 & (VAR18 | VAR21 | VAR23))
                    VAR2->VAR20 = VAR25;
                if (VAR15 == ~0x7F)
                {
                    memset(&VAR2->VAR26[VAR12], 0, (VAR14 - VAR12) * sizeof(VAR27));
                }
                else
                {
                    int VAR28;
                    for (VAR28 = VAR12; VAR28 < VAR14; VAR28++)
                    {
                        VAR2->VAR26[VAR28] &= VAR15;
                        if (VAR11 == VAR2->VAR10)
                            VAR2->VAR20 = VAR25;
                        else
                        {
                            VAR2->VAR26[VAR14] &= VAR15;
                            VAR2->VAR26[VAR14] |= VAR7;
                            VAR2->VAR26[VAR12] |= VAR17;
                            if (VAR12 > 0 && VAR2->VAR29->VAR30 <= 1 && VAR2->VAR29->VAR31 * VAR2->VAR9 < VAR8)
                            {
                                int VAR32 = VAR2->VAR26[VAR2->VAR13[VAR8 - 1]];
                                VAR32 &= ~VAR17;
                                if (VAR32 != (VAR24 | VAR22 | VAR19))
                                VAR2->VAR20 = VAR25