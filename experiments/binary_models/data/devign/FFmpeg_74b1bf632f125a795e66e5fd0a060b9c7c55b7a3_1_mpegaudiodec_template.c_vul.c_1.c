static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    VAR3 *VAR12;
    FUN2(&VAR2->VAR13, VAR6 + VAR14, (VAR7 - VAR14) * 8);
    if (VAR2->VAR15)
        FUN3(&VAR2->VAR13, 16);
    switch (VAR2->VAR16)
    {
    case 1:
        VAR2->VAR17->VAR18 = 384;
        VAR9 = FUN4(VAR2);
        break;
    case 2:
        VAR2->VAR17->VAR18 = 1152;
        VAR9 = FUN5(VAR2);
        break;
    case 3:
        VAR2->VAR17->VAR18 = VAR2->VAR19 ? 576 : 1152;
    default:
        VAR9 = FUN6(VAR2);
        if (VAR9 < 0)
            return VAR9;
        VAR2->VAR20 = 0;
        if (VAR2->VAR21.VAR22)
        {
            FUN7(&VAR2->VAR13);
            VAR8 = FUN8(&VAR2->VAR13) >> 3;
            if (VAR8 >= 0 && VAR8 <= VAR23)
            {
                memmove(VAR2->VAR24, VAR2->VAR13.VAR22 + (FUN9(&VAR2->VAR13) >> 3), VAR8);
                VAR2->VAR20 = VAR8;
            }
            else
                FUN10(VAR2->VAR17, VAR25, "", VAR8);
            VAR2->VAR13 = VAR2->VAR21;
            VAR2->VAR21.VAR22 = NULL;
        }
        FUN7(&VAR2->VAR13);
        assert((FUN9(&VAR2->VAR13) & 7) == 0);
        VAR8 = FUN8(&VAR2->VAR13) >> 3;
        if (VAR8 < 0 || VAR8 > VAR23 || VAR9 < 0)
        {
            if (VAR8 < 0)
                FUN10(VAR2->VAR17, VAR25, "", VAR8);
            VAR8 = FUN11(VAR23, VAR7 - VAR14);
        }
        assert(VAR8 <= VAR7 - VAR14 && VAR8 >= 0);
        memcpy(VAR2->VAR24 + VAR2->VAR20, VAR2->VAR13.VAR22 + VAR7 - VAR14 - VAR8, VAR8);
        VAR2->VAR20 += VAR8;
    }
    if (!VAR4)
    {
        FUN12(VAR2->VAR26 != NULL);
        VAR2->VAR26->VAR27 = VAR2->VAR17->VAR18;
        if ((VAR11 = FUN13(VAR2->VAR17, VAR2->VAR26, 0)) < 0)
        {
            FUN10(VAR2->VAR17, VAR25, "");
            return VAR11;
        }
        VAR4 = (VAR3 **)VAR2->VAR26->VAR28;
    }
    for (VAR10 = 0; VAR10 < VAR2->VAR29; VAR10++)
    {
        int VAR30;
        if (VAR2->VAR17->VAR31 == VAR32)
        {
            VAR12 = VAR4[VAR10];
            VAR30 = 1;
        }
        else
        {
            VAR12 = VAR4[0] + VAR10;
            VAR30 = VAR2->VAR29;
        }
        for (VAR8 = 0; VAR8 < VAR9; VAR8++)
        {
            FUN14(VAR33)
            (&VAR2->VAR34, VAR2->VAR35[VAR10], &(VAR2->VAR36[VAR10]), FUN14(VAR37), &VAR2->VAR38, VAR12, VAR30, VAR2->VAR39[VAR10][VAR8]);
            VAR12 += 32 * VAR30;
        }
    }
    return VAR9 * 32 * sizeof(VAR3) * VAR2->VAR29;
}