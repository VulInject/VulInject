FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR5 **VAR6, int VAR7, const VAR3 *VAR8, const VAR5 **VAR9, const VAR5 **VAR10, int VAR11, const VAR5 **VAR12, VAR13 *VAR14, int VAR15, int VAR16, enum PixelFormat VAR17)
{
    int VAR18;
    for (VAR18 = 0; VAR18 < (VAR15 >> 1); VAR18++)
    {
        int VAR19;
        int VAR20 = 1 << 14;
        int VAR21 = 1 << 14;
        for (VAR19 = 0; VAR19 < VAR7; VAR19++)
        {
            VAR20 += VAR6[VAR19][VAR18 * 2] * VAR4[VAR19];
            VAR21 += VAR6[VAR19][VAR18 * 2 + 1] * VAR4[VAR19];
        }
        VAR20 >>= 15;
        VAR21 >>= 15;
        if ((VAR20 | VAR21) & 0x10000)
        {
            VAR20 = FUN2(VAR20);
            VAR21 = FUN2(VAR21);
        }
        FUN3(&VAR14[VAR18 * 2 + 0], VAR20);
        FUN3(&VAR14[VAR18 * 2 + 1], VAR21);
    }
}