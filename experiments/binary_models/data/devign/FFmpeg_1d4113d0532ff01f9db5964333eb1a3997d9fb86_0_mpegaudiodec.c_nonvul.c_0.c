static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10;
    VAR3 *VAR11;
    FUN2(&VAR2->VAR12, VAR6 + VAR13, (VAR7 - VAR13) * 8);
    if (VAR2->VAR14)
        FUN3(&VAR2->VAR12, 16);
    FUN4(VAR2->VAR15, "", VAR2->VAR16);
    switch (VAR2->VAR17)
    {
    case 1:
        VAR2->VAR15->VAR18 = 384;
        VAR9 = FUN5(VAR2);
        break;
    case 2:
        VAR2->VAR15->VAR18 = 1152;
        VAR9 = FUN6(VAR2);
        break;
    case 3:
        VAR2->VAR15->VAR18 = VAR2->VAR19 ? 576 : 1152;
    default:
        VAR9 = FUN7(VAR2);
        VAR2->VAR20 = 0;
        if (VAR2->VAR21.VAR22)
        {
            FUN8(&VAR2->VAR12);
            VAR8 = (VAR2->VAR12.VAR23 - FUN9(&VAR2->VAR12)) >> 3;
            if (VAR8 >= 0 && VAR8 <= VAR24)
            {
                memmove(VAR2->VAR25, VAR2->VAR12.VAR22 + (FUN9(&VAR2->VAR12) >> 3), VAR8);
                VAR2->VAR20 = VAR8;
            }
            else
                FUN10(VAR2->VAR15, VAR26, "", VAR8);
            VAR2->VAR12 = VAR2->VAR21;
            VAR2->VAR21.VAR22 = NULL;
        }
        FUN8(&VAR2->VAR12);
        assert((FUN9(&VAR2->VAR12) & 7) == 0);
        VAR8 = (VAR2->VAR12.VAR23 - FUN9(&VAR2->VAR12)) >> 3;
        if (VAR8 < 0 || VAR8 > VAR24 || VAR9 < 0)
        {
            if (VAR8 < 0)
                FUN10(VAR2->VAR15, VAR26, "", VAR8);
            VAR8 = FUN11(VAR24, VAR7 - VAR13);
        }
        assert(VAR8 <= VAR7 - VAR13 && VAR8 >= 0);
        memcpy(VAR2->VAR25 + VAR2->VAR20, VAR2->VAR12.VAR22 + VAR7 - VAR13 - VAR8, VAR8);
        VAR2->VAR20 += VAR8;
        break;
    }
    for (VAR10 = 0; VAR10 < VAR2->VAR27; VAR10++)
    {
        VAR11 = VAR4 + VAR10;
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            FUN12(VAR2->VAR28[VAR10], &(VAR2->VAR29[VAR10]), VAR30, &VAR2->VAR31, VAR11, VAR2->VAR27, VAR2->VAR32[VAR10][VAR8]);
            VAR11 += 32 * VAR2->VAR27;
        }
    }
    return VAR9 * 32 * sizeof(VAR3) * VAR2->VAR27;
}