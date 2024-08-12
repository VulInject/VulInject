FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum PixelFormat VAR13)
{
    const VAR3 *VAR14 = VAR5[0], *VAR15 = VAR6[0];
    int VAR16;
    if (VAR11 < 2048)
    {
        for (VAR16 = 0; VAR16 < (VAR10 >> 1); VAR16++)
        {
            int VAR17 = VAR4[VAR16 * 2] >> 7;
            int VAR18 = VAR4[VAR16 * 2 + 1] >> 7;
            int VAR19 = VAR14[VAR16] >> 7;
            int VAR20 = VAR15[VAR16] >> 7;
            FUN2(VAR16 * 4, VAR17, VAR19, VAR18, VAR20);
        }
    }
    else
    {
        const VAR3 *VAR21 = VAR5[1], *VAR22 = VAR6[1];
        for (VAR16 = 0; VAR16 < (VAR10 >> 1); VAR16++)
        {
            int VAR17 = VAR4[VAR16 * 2] >> 7;
            int VAR18 = VAR4[VAR16 * 2 + 1] >> 7;
            int VAR19 = (VAR14[VAR16] + VAR21[VAR16]) >> 8;
            int VAR20 = (VAR15[VAR16] + VAR22[VAR16]) >> 8;
            FUN2(VAR16 * 4, VAR17, VAR19, VAR18, VAR20);
        }
    }