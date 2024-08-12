void FUN1(VAR1 *VAR2[4], int VAR3[4], const VAR1 *VAR4[4], const int VAR5[4], enum PixelFormat VAR6, int VAR7, int VAR8)
{
    const VAR9 *VAR10 = &VAR11[VAR6];
    if (VAR10->VAR12 & VAR13)
        return;
    if (VAR10->VAR12 & VAR14)
    {
        FUN2(VAR2[0], VAR3[0], VAR4[0], VAR5[0], VAR7, VAR8);
        memcpy(VAR2[1], VAR4[1], 4 * 256);
    }
    else
    {
        int VAR15, VAR16 = 0;
        for (VAR15 = 0; VAR15 < VAR10->VAR17; VAR15++)
            VAR16 = FUN3(VAR16, VAR10->VAR18[VAR15].VAR19 + 1);
        for (VAR15 = 0; VAR15 < VAR16; VAR15++)
        {
            int VAR20 = VAR8;
            int VAR21 = FUN4(VAR6, VAR7, VAR15);
            if (VAR15 == 1 || VAR15 == 2)
            {
                VAR20 = -((-VAR8) >> VAR10->VAR22);
            }
            FUN2(VAR2[VAR15], VAR3[VAR15], VAR4[VAR15], VAR5[VAR15], VAR21, VAR20);
        }
    }
}