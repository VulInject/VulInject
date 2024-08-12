static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = NULL, *VAR16 = NULL;
    GetBitContext VAR17;
    enum RawDataBlockType VAR18, VAR19 = VAR20;
    int VAR21, VAR22, VAR23;
    int VAR24;
    int VAR25 = 1024, VAR26;
    int VAR27;
    FUN2(&VAR17, VAR8, VAR9 * 8);
    if (FUN3(&VAR17, 12) == 0xfff)
    {
        if (FUN4(VAR12, &VAR17) < 0)
        {
            FUN5(VAR2, VAR28, "");
            return -1;
        }
        if (VAR12->VAR29.VAR30 > 12)
        {
            FUN5(VAR12->VAR2, VAR28, "", VAR12->VAR29.VAR30);
            return -1;
        }
    }
    while ((VAR18 = FUN6(&VAR17, 3)) != VAR20)
    {
        VAR22 = FUN6(&VAR17, 4);
        if (VAR18 < VAR31 && !(VAR15 = FUN7(VAR12, VAR18, VAR22)))
        {
            FUN5(VAR12->VAR2, VAR28, "", VAR18, VAR22);
            return -1;
        }
        switch (VAR18)
        {
        case VAR32:
            VAR21 = FUN8(VAR12, &VAR15->VAR33[0], &VAR17, 0, 0);
            break;
        case VAR34:
            VAR21 = FUN9(VAR12, &VAR17, VAR15);
            break;
        case VAR35:
            VAR21 = FUN10(VAR12, &VAR17, VAR15);
            break;
        case VAR36:
            VAR21 = FUN8(VAR12, &VAR15->VAR33[0], &VAR17, 0, 0);
            break;
        case VAR31:
            VAR21 = FUN11(VAR12, &VAR17);
            break;
        case VAR37:
        {
            enum ChannelPosition VAR38[4][VAR39];
            memset(VAR38, 0, 4 * VAR39 * sizeof(VAR38[0][0]));
            if ((VAR21 = FUN12(VAR12, VAR38, &VAR17)))
                break;
            if (VAR12->VAR40 > VAR41)
                FUN5(VAR2, VAR28, "");
            else
                VAR21 = FUN13(VAR12, VAR12->VAR42, VAR38, 0, VAR41);
            break;
        }
        case VAR43:
            if (VAR22 == 15)
                VAR22 += FUN6(&VAR17, 8) - 1;
            if (FUN14(&VAR17) < 8 * VAR22)
            {
                FUN5(VAR2, VAR28, VAR44);
                return -1;
            }
            while (VAR22 > 0)
                VAR22 -= FUN15(VAR12, &VAR17, VAR22, VAR16, VAR19);
            VAR21 = 0;
            break;
        default:
            VAR21 = -1;
            break;
        }
        VAR16 = VAR15;
        VAR19 = VAR18;
        if (VAR21)
            return VAR21;
        if (FUN14(&VAR17) < 3)
        {
            FUN5(VAR2, VAR28, VAR44);
            return -1;
        }
    }
    FUN16(VAR12);
    VAR26 = (VAR12->VAR29.VAR45 == 1) ? VAR12->VAR29.VAR46 > VAR12->VAR29.VAR47 : 0;
    VAR25 <<= VAR26;
    if (VAR12->VAR40 < VAR48)
    {
        VAR2->VAR47 = VAR12->VAR29.VAR47 << VAR26;
        VAR2->VAR49 = VAR25;
    }
    VAR23 = VAR25 * VAR2->VAR50 * sizeof(VAR51);
    if (*VAR4 < VAR23)
    {
        FUN5(VAR2, VAR28, "", *VAR4, VAR23);
        return -1;
    }
    *VAR4 = VAR23;
    VAR12->VAR52.FUN17(VAR3, (const float **)VAR12->VAR53, VAR25, VAR2->VAR50);
    if (VAR12->VAR40)
        VAR12->VAR40 = VAR48;
    VAR24 = (FUN18(&VAR17) + 7) >> 3;
    for (VAR27 = VAR24; VAR27 < VAR9; VAR27++)
        if (VAR8[VAR27])
            break;
    return VAR9 > VAR27 ? VAR24 : VAR9;