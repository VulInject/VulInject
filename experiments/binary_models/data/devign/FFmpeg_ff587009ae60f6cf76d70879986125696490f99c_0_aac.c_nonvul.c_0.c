static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    enum RawDataBlockType VAR12;
    int VAR13, VAR14, VAR15;
    FUN2(&VAR11, VAR6, VAR7 * 8);
    if (FUN3(&VAR11, 12) == 0xfff)
    {
        if ((VAR13 = FUN4(VAR9, &VAR11)) < 0)
        {
            FUN5(VAR2, VAR16, "");
            return -1;
        }
        if (VAR9->VAR17.VAR18 > 11)
        {
            FUN5(VAR9->VAR2, VAR16, "", VAR9->VAR17.VAR18);
            return -1;
        }
    }
    while ((VAR12 = FUN6(&VAR11, 3)) != VAR19)
    {
        VAR14 = FUN6(&VAR11, 4);
        VAR13 = -1;
        if (VAR12 == VAR20 && VAR14 == 1 && !VAR9->VAR21[VAR20][VAR14] && VAR9->VAR21[VAR22][0])
        {
            VAR9->VAR21[VAR20][VAR14] = VAR9->VAR21[VAR22][0];
            VAR9->VAR21[VAR22][0] = NULL;
        }
        if (VAR12 < VAR23)
        {
            if (!VAR9->VAR21[VAR12][VAR14])
                return -1;
        }
        switch (VAR12)
        {
        case VAR20:
            VAR13 = FUN7(VAR9, &VAR9->VAR21[VAR20][VAR14]->VAR24[0], &VAR11, 0, 0);
            break;
        case VAR25:
            VAR13 = FUN8(VAR9, &VAR11, VAR14);
            break;
        case VAR26:
            VAR13 = FUN9(VAR9, &VAR11, VAR9->VAR21[VAR26][VAR14]);
            break;
        case VAR22:
            VAR13 = FUN7(VAR9, &VAR9->VAR21[VAR22][VAR14]->VAR24[0], &VAR11, 0, 0);
            break;
        case VAR23:
            FUN10(&VAR11);
            VAR13 = 0;
            break;
        case VAR27:
        {
            enum ChannelPosition VAR28[4][VAR29];
            memset(VAR28, 0, 4 * VAR29 * sizeof(VAR28[0][0]));
            if ((VAR13 = FUN11(VAR9, VAR28, &VAR11)))
                break;
            VAR13 = FUN12(VAR9, VAR9->VAR30, VAR28);
            break;
        }
        case VAR31:
            if (VAR14 == 15)
                VAR14 += FUN6(&VAR11, 8) - 1;
            while (VAR14 > 0)
                VAR14 -= FUN13(VAR9, &VAR11, VAR14);
            VAR13 = 0;
            break;
        default:
            VAR13 = -1;
            break;
        }
        if (VAR13)
            return VAR13;
    }
    FUN14(VAR9);
    if (!VAR9->VAR32)
    {
        VAR9->VAR32 = 1;
        *VAR4 = 0;
        return VAR7;
    }
    VAR15 = 1024 * VAR2->VAR33 * sizeof(VAR34);
    if (*VAR4 < VAR15)
    {
        FUN5(VAR2, VAR16, "", *VAR4, VAR15);
        return -1;
    }
    *VAR4 = VAR15;
    VAR9->VAR35.FUN15(VAR3, (const float **)VAR9->VAR36, 1024, VAR2->VAR33);
    return VAR7;
}