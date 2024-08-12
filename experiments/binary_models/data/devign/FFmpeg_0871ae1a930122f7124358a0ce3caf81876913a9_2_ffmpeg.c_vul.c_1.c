static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned char *VAR7, int VAR8)
{
    VAR9 *VAR10;
    static VAR9 *VAR11 = NULL;
    static VAR9 *VAR12 = NULL;
    const int VAR13 = 4 * VAR14;
    int VAR15, VAR16, VAR17;
    VAR18 *VAR19 = VAR4->VAR20->VAR21;
    VAR18 *VAR22 = VAR6->VAR20->VAR21;
    if (!VAR11)
        VAR11 = FUN2(2 * VAR14);
    if (!VAR12)
        VAR12 = FUN2(VAR13);
    if (!VAR11 || !VAR12)
        return;
    if (VAR19->VAR23 != VAR22->VAR23)
        VAR4->VAR24 = 1;
    if (VAR4->VAR24 && !VAR4->VAR25)
    {
        VAR4->VAR25 = FUN3(VAR19->VAR23, VAR22->VAR23, VAR19->VAR26, VAR22->VAR26);
        if (!VAR4->VAR25)
        {
            fprintf(VAR27, "", VAR22->VAR23, VAR22->VAR26, VAR19->VAR23, VAR19->VAR26);
            FUN4(1);
        }
    }
    if (VAR28)
    {
        double VAR29 = FUN5(VAR4) * VAR19->VAR26 - VAR4->VAR30 - FUN6(&VAR4->VAR31) / (VAR4->VAR20->VAR21->VAR23 * 2);
        double VAR32 = VAR29 * VAR6->VAR20->VAR21->VAR26 / VAR19->VAR26;
        int VAR33 = ((int)VAR32) * 2 * VAR6->VAR20->VAR21->VAR23;
        if (FUN7(VAR29) > 50)
        {
            if (VAR6->VAR34 || FUN7(VAR29) > VAR35 * VAR19->VAR26)
            {
                if (VAR33 < 0)
                {
                    VAR33 = FUN8(VAR33, -VAR8);
                    VAR8 += VAR33;
                    VAR7 -= VAR33;
                    if (VAR36 > 2)
                        fprintf(VAR27, "", (int)-VAR29);
                    if (!VAR8)
                        return;
                    VAR6->VAR34 = 0;
                }
                else
                {
                    static VAR9 *VAR37 = NULL;
                    VAR37 = FUN9(VAR37, VAR33 + VAR8);
                    if (VAR33 + VAR8 <= VAR14)
                        VAR6->VAR34 = 0;
                    else
                        VAR33 = VAR14 - VAR8;
                    memset(VAR37, 0, VAR33);
                    memcpy(VAR37 + VAR33, VAR7, VAR8);
                    VAR7 = VAR37;
                    VAR8 += VAR33;
                    if (VAR36 > 2)
                        fprintf(VAR27, "", (int)VAR29);
                }
            }
            else if (VAR28 > 1)
            {
                int VAR38 = FUN10(VAR29, -VAR28, VAR28);
                assert(VAR4->VAR24);
                if (VAR36 > 2)
                    fprintf(VAR27, "", VAR29, VAR38, VAR19->VAR26);
                FUN11(*(struct VAR39 **)VAR4->VAR25, VAR38, VAR19->VAR26);
            }
        }
    }
    else
        VAR4->VAR30 = FUN12(FUN5(VAR4) * VAR19->VAR26) - FUN6(&VAR4->VAR31) / (VAR4->VAR20->VAR21->VAR23 * 2);
    if (VAR4->VAR24)
    {
        VAR10 = VAR11;
        VAR15 = FUN13(VAR4->VAR25, (short *)VAR10, (short *)VAR7, VAR8 / (VAR6->VAR20->VAR21->VAR23 * 2));
        VAR15 = VAR15 * VAR19->VAR23 * 2;
    }
    else
    {
        VAR10 = VAR7;
        VAR15 = VAR8;
    }
    if (VAR19->VAR40 > 1)
    {
        FUN14(&VAR4->VAR31, FUN6(&VAR4->VAR31) + VAR15 + 1);
        FUN15(&VAR4->VAR31, VAR10, VAR15);
        VAR16 = VAR19->VAR40 * 2 * VAR19->VAR23;
        while (FUN16(&VAR4->VAR31, VAR11, VAR16) == 0)
        {
            AVPacket VAR41;
            FUN17(&VAR41);
            VAR17 = FUN18(VAR19, VAR12, VAR13, (short *)VAR11);
            VAR42 += VAR17;
            VAR41.VAR43 = VAR4->VAR44;
            VAR41.VAR45 = VAR12;
            VAR41.VAR8 = VAR17;
            if (VAR19->VAR46 && VAR19->VAR46->VAR47 != VAR48)
                VAR41.VAR47 = FUN19(VAR19->VAR46->VAR47, VAR19->VAR49, VAR4->VAR20->VAR49);
            VAR41.VAR50 |= VAR51;
            FUN20(VAR2, &VAR41, VAR4->VAR20->VAR21, VAR52[VAR4->VAR53][VAR41.VAR43]);
            VAR4->VAR30 += VAR19->VAR40;
        }
    }
    else
    {
        AVPacket VAR41;
        FUN17(&VAR41);
        VAR4->VAR30 += VAR15 / (2 * VAR19->VAR23);
        switch (VAR19->VAR21->VAR54)
        {
        case VAR55:
        case VAR56:
        case VAR57:
        case VAR58:
            VAR15 = VAR15 << 1;
            break;
        case VAR59:
        case VAR60:
        case VAR61:
        case VAR62:
        case VAR63:
            VAR15 = VAR15 / 2 * 3;
            break;
        case VAR64:
        case VAR65:
        case VAR66:
        case VAR67:
            break;
        default:
            VAR15 = VAR15 >> 1;
            break;
        }
        VAR17 = FUN18(VAR19, VAR12, VAR15, (short *)VAR10);
        VAR42 += VAR17;
        VAR41.VAR43 = VAR4->VAR44;
        VAR41.VAR45 = VAR12;
        VAR41.VAR8 = VAR17;
        if (VAR19->VAR46 && VAR19->VAR46->VAR47 != VAR48)
            VAR41.VAR47 = FUN19(VAR19->VAR46->VAR47, VAR19->VAR49, VAR4->VAR20->VAR49);
        VAR41.VAR50 |= VAR51;
        FUN20(VAR2, &VAR41, VAR4->VAR20->VAR21, VAR52[VAR4->VAR53][VAR41.VAR43]);
    }
}