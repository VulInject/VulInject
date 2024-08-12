FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 **VAR5, int VAR6, const VAR3 *VAR7, const VAR3 **VAR8, const VAR3 **VAR9, int VAR10, const VAR3 **VAR11, VAR12 *VAR13, int VAR14, int VAR15, enum AVPixelFormat VAR16, int VAR17)
{
    int VAR18;
    int VAR19 = (VAR16 == VAR20 || VAR16 == VAR21) ? 3 : 4;
    int VAR22[4] = {0};
    if (VAR16 == VAR23 || VAR16 == VAR24 || VAR16 == VAR25 || VAR16 == VAR26)
        VAR19 = 1;
    for (VAR18 = 0; VAR18 < VAR14; VAR18++)
    {
        int VAR27;
        int VAR28 = 1 << 9;
        int VAR29 = (1 << 9) - (128 << 19);
        int VAR30 = (1 << 9) - (128 << 19);
        int VAR31;
        for (VAR27 = 0; VAR27 < VAR6; VAR27++)
        {
            VAR28 += VAR5[VAR27][VAR18] * VAR4[VAR27];
        }
        for (VAR27 = 0; VAR27 < VAR10; VAR27++)
        {
            VAR29 += VAR8[VAR27][VAR18] * VAR7[VAR27];
            VAR30 += VAR9[VAR27][VAR18] * VAR7[VAR27];
        }
        VAR28 >>= 10;
        VAR29 >>= 10;
        VAR30 >>= 10;
        if (VAR17)
        {
            VAR31 = 1 << 18;
            for (VAR27 = 0; VAR27 < VAR6; VAR27++)
            {
                VAR31 += VAR11[VAR27][VAR18] * VAR4[VAR27];
            }
            VAR31 >>= 19;
            if (VAR31 & 0x100)
                VAR31 = FUN2(VAR31);
        }
        FUN3(VAR2, VAR13, VAR18, VAR28, VAR31, VAR29, VAR30, VAR15, VAR16, VAR17, VAR22);
        VAR13 += VAR19;
    }
    VAR2->VAR32[0][VAR18] = VAR22[0];
    VAR2->VAR32[1][VAR18] = VAR22[1];
    VAR2->VAR32[2][VAR18] = VAR22[2];
}