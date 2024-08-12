static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, const VAR3 *VAR8, int VAR9, int VAR10, const int VAR11)
{
    int VAR12, VAR13;
    GetBitContext VAR14;
    VLC VAR15;
    Node VAR16[512];
    for (VAR12 = 0; VAR12 < 256; VAR12++)
        VAR16[VAR12].VAR17 = FUN2(&VAR8);
    VAR9 -= 1024;
    if (FUN3(VAR2->VAR18, &VAR15, 256, VAR16, VAR19, VAR20) < 0)
        return -1;
    VAR2->VAR21.FUN4((VAR22 *)VAR2->VAR23, (const VAR22 *)VAR8, VAR9 >> 2);
    FUN5(&VAR14, VAR2->VAR23, VAR9 * 8);
    for (VAR13 = 0; VAR13 < VAR7; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR6 * VAR11; VAR12 += VAR11)
        {
            VAR4[VAR12] = FUN6(&VAR14, VAR15.VAR24, 9, 3);
            if (VAR13)
                VAR4[VAR12] += VAR4[VAR12 - VAR5];
            else if (VAR10)
                VAR4[VAR12] += 0x80;
        }
        VAR4 += VAR5;
        if (FUN7(&VAR14) < 0)
        {
            FUN8(&VAR15);
            return -1;
        }
    }
    FUN8(&VAR15);
    return 0;
}