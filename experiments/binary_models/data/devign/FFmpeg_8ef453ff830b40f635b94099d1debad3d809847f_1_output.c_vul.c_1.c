FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum AVPixelFormat VAR13, int VAR14)
{
    const VAR3 *VAR15 = VAR5[0], *VAR16 = VAR6[0];
    int VAR17;
    int VAR18 = (VAR13 == VAR19 || VAR13 == VAR20) ? 3 : 4;
    int VAR21[4] = {0};
    if (VAR13 == VAR22 || VAR13 == VAR23 || VAR13 == VAR24 || VAR13 == VAR25)
        VAR18 = 1;
    if (VAR11 < 2048)
    {
        for (VAR17 = 0; VAR17 < VAR10; VAR17++)
        {
            int VAR26 = VAR4[VAR17] << 2;
            int VAR27 = (VAR15[VAR17] - (128 << 7)) << 2;
            int VAR28 = (VAR16[VAR17] - (128 << 7)) << 2;
            int VAR29;
            if (VAR14)
            {
                VAR29 = (VAR7[VAR17] + 64) >> 7;
                if (VAR29 & 0x100)
                    VAR29 = FUN2(VAR29);
            }
            FUN3(VAR2, VAR9, VAR17, VAR26, VAR29, VAR27, VAR28, VAR12, VAR13, VAR14, VAR21);
            VAR9 += VAR18;
        }
    }
    else
    {
        const VAR3 *VAR30 = VAR5[1], *VAR31 = VAR6[1];
        for (VAR17 = 0; VAR17 < VAR10; VAR17++)
        {
            int VAR26 = VAR4[VAR17] << 2;
            int VAR27 = (VAR15[VAR17] + VAR30[VAR17] - (128 << 8)) << 1;
            int VAR28 = (VAR16[VAR17] + VAR31[VAR17] - (128 << 8)) << 1;
            int VAR29;
            if (VAR14)
            {
                VAR29 = (VAR7[VAR17] + 64) >> 7;
                if (VAR29 & 0x100)
                    VAR29 = FUN2(VAR29);
            }
            FUN3(VAR2, VAR9, VAR17, VAR26, VAR29, VAR27, VAR28, VAR12, VAR13, VAR14, VAR21);
            VAR9 += VAR18;
        }
    }
    VAR2->VAR32[0][VAR17] = VAR21[0];
    VAR2->VAR32[1][VAR17] = VAR21[1];
    VAR2->VAR32[2][VAR17] = VAR21[2];
}