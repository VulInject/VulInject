FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5[2], const VAR3 *VAR6[2], const VAR3 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, int VAR12, enum PixelFormat VAR13)
{
    const VAR3 *VAR14 = VAR5[0], *VAR15 = VAR5[1], *VAR16 = VAR6[0], *VAR17 = VAR6[1];
    int VAR18;
    if (VAR11 < 2048)
    {
        for (VAR18 = 0; VAR18 < (VAR10 >> 1); VAR18++)
        {
            int VAR19 = VAR4[VAR18 * 2] >> 7;
            int VAR20 = VAR4[VAR18 * 2 + 1] >> 7;
            int VAR21 = VAR15[VAR18] >> 7;
            int VAR22 = VAR17[VAR18] >> 7;
            FUN2(VAR18 * 4, VAR19, VAR21, VAR20, VAR22);
        }
    }
    else
    {
        for (VAR18 = 0; VAR18 < (VAR10 >> 1); VAR18++)
        {
            int VAR19 = VAR4[VAR18 * 2] >> 7;
            int VAR20 = VAR4[VAR18 * 2 + 1] >> 7;
            int VAR21 = (VAR14[VAR18] + VAR15[VAR18]) >> 8;
            int VAR22 = (VAR16[VAR18] + VAR17[VAR18]) >> 8;
            FUN2(VAR18 * 4, VAR19, VAR21, VAR20, VAR22);
        }
    }
}