FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum PixelFormat VAR13, int VAR14)
{
    const VAR3 *VAR15 = VAR5[0], *VAR16 = VAR6[0];
    int VAR17;
    if (VAR11 < 2048)
    {
        for (VAR17 = 0; VAR17 < (VAR10 >> 1); VAR17++)
        {
            int VAR18 = VAR4[VAR17 * 2] >> 7;
            int VAR19 = VAR4[VAR17 * 2 + 1] >> 7;
            int VAR20 = VAR15[VAR17] >> 7;
            int VAR21 = VAR16[VAR17] >> 7;
            int VAR22, VAR23;
            const void *VAR24 = VAR2->VAR25[VAR21], *VAR26 = (VAR2->VAR27[VAR20] + VAR2->VAR28[VAR21]), *VAR29 = VAR2->VAR30[VAR20];
            if (VAR14)
            {
                VAR22 = VAR7[VAR17 * 2] >> 7;
                VAR23 = VAR7[VAR17 * 2 + 1] >> 7;
            }
            FUN2(VAR9, VAR17, VAR18, VAR19, VAR14 ? VAR22 : 0, VAR14 ? VAR23 : 0, VAR24, VAR26, VAR29, VAR12, VAR13, VAR14);
        }
    }
    else
    {
        const VAR3 *VAR31 = VAR5[1], *VAR32 = VAR6[1];
        for (VAR17 = 0; VAR17 < (VAR10 >> 1); VAR17++)
        {
            int VAR18 = VAR4[VAR17 * 2] >> 7;
            int VAR19 = VAR4[VAR17 * 2 + 1] >> 7;
            int VAR20 = (VAR15[VAR17] + VAR31[VAR17]) >> 8;
            int VAR21 = (VAR16[VAR17] + VAR32[VAR17]) >> 8;
            int VAR22, VAR23;
            const void *VAR24 = VAR2->VAR25[VAR21], *VAR26 = (VAR2->VAR27[VAR20] + VAR2->VAR28[VAR21]), *VAR29 = VAR2->VAR30[VAR20];
            if (VAR14)
            {
                VAR22 = VAR7[VAR17 * 2] >> 7;
                VAR23 = VAR7[VAR17 * 2 + 1] >> 7;
            }
            FUN2(VAR9, VAR17, VAR18, VAR19, VAR14 ? VAR22 : 0, VAR14 ? VAR23 : 0, VAR24, VAR26, VAR29, VAR12, VAR13, VAR14);
        }
    }