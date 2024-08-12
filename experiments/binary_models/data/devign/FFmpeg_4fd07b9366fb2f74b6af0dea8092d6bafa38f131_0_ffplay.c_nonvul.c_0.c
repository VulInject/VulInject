static int FUN1(VAR1 *VAR2, double *VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR6;
    VAR4 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = VAR2->VAR11->VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int64_t VAR17;
    int VAR18;
    double VAR19;
    int VAR20 = 0;
    int VAR21 = 0;
    int VAR22;
    for (;;)
    {
        while (VAR5->VAR23 > 0 || (!VAR5->VAR24 && VAR20))
        {
            if (!VAR2->VAR25)
            {
                if (!(VAR2->VAR25 = FUN2()))
                    return FUN3(VAR26);
            }
            else
                FUN4(VAR2->VAR25);
            if (VAR2->VAR27)
                return -1;
            if (VAR21)
                break;
            VAR20 = 0;
            VAR13 = FUN5(VAR10, VAR2->VAR25, &VAR18, VAR5);
            if (VAR13 < 0)
            {
                VAR5->VAR23 = 0;
                break;
            }
            VAR5->VAR24 += VAR13;
            VAR5->VAR23 -= VAR13;
            if (!VAR18)
            {
                if (!VAR5->VAR24 && VAR10->VAR12->VAR28 & VAR29)
                    VAR21 = 1;
                continue;
            }
            VAR15 = FUN6(NULL, VAR10->VAR30, VAR2->VAR25->VAR31, VAR10->VAR32, 1);
            VAR17 = (VAR10->VAR33 && VAR10->VAR30 == FUN7(VAR10->VAR33)) ? VAR10->VAR33 : FUN8(VAR10->VAR30);
            VAR22 = FUN9(VAR2, VAR2->VAR25->VAR31);
            if (VAR10->VAR32 != VAR2->VAR34.VAR35 || VAR17 != VAR2->VAR34.VAR33 || VAR10->VAR36 != VAR2->VAR34.VAR37 || (VAR22 != VAR2->VAR25->VAR31 && !VAR2->VAR38))
            {
                FUN10(&VAR2->VAR38);
                VAR2->VAR38 = FUN11(NULL, VAR2->VAR39.VAR33, VAR2->VAR39.VAR35, VAR2->VAR39.VAR37, VAR17, VAR10->VAR32, VAR10->VAR36, 0, NULL);
                if (!VAR2->VAR38 || FUN12(VAR2->VAR38) < 0)
                {
                    fprintf(VAR40, "", VAR10->VAR36, FUN13(VAR10->VAR32), VAR10->VAR30, VAR2->VAR39.VAR37, FUN13(VAR2->VAR39.VAR35), VAR2->VAR39.VAR30);
                    break;
                }
                VAR2->VAR34.VAR33 = VAR17;
                VAR2->VAR34.VAR30 = VAR10->VAR30;
                VAR2->VAR34.VAR37 = VAR10->VAR36;
                VAR2->VAR34.VAR35 = VAR10->VAR32;
            }
            VAR16 = VAR15;
            if (VAR2->VAR38)
            {
                const VAR41 *VAR42[] = {VAR2->VAR25->VAR24[0]};
                VAR41 *VAR43[] = {VAR2->VAR44};
                if (VAR22 != VAR2->VAR25->VAR31)
                {
                    if (FUN14(VAR2->VAR38, (VAR22 - VAR2->VAR25->VAR31) * VAR2->VAR39.VAR37 / VAR10->VAR36, VAR22 * VAR2->VAR39.VAR37 / VAR10->VAR36) < 0)
                    {
                        fprintf(VAR40, "");
                        break;
                    }
                }
                VAR14 = FUN15(VAR2->VAR38, VAR43, sizeof(VAR2->VAR44) / VAR2->VAR39.VAR30 / FUN16(VAR2->VAR39.VAR35), VAR42, VAR2->VAR25->VAR31);
                if (VAR14 < 0)
                {
                    fprintf(VAR40, "");
                    break;
                }
                if (VAR14 == sizeof(VAR2->VAR44) / VAR2->VAR39.VAR30 / FUN16(VAR2->VAR39.VAR35))
                {
                    fprintf(VAR40, "");
                    FUN12(VAR2->VAR38);
                }
                VAR2->VAR45 = VAR2->VAR44;
                VAR16 = VAR14 * VAR2->VAR39.VAR30 * FUN16(VAR2->VAR39.VAR35);
            }
            else
            {
                VAR2->VAR45 = VAR2->VAR25->VAR24[0];
            }
            VAR19 = VAR2->VAR46;
            *VAR3 = VAR19;
            VAR2->VAR46 += (double)VAR15 / (VAR10->VAR30 * VAR10->VAR36 * FUN16(VAR10->VAR32));
            {
                static double VAR47;
                FUN17("", VAR2->VAR46 - VAR47, VAR2->VAR46, VAR19);
                VAR47 = VAR2->VAR46;
            }
            return VAR16;
        }
        if (VAR7->VAR24)
            FUN18(VAR7);
        memset(VAR5, 0, sizeof(*VAR5));
        if (VAR2->VAR27 || VAR2->VAR48.VAR49)
        {
            return -1;
        }
        if ((VAR20 = FUN19(&VAR2->VAR48, VAR7, 1)) < 0)
            return -1;
        if (VAR7->VAR24 == VAR50.VAR24)
        {
            FUN20(VAR10);
            VAR21 = 0;
        }
        *VAR5 = *VAR7;
        if (VAR7->VAR19 != VAR51)
        {
            VAR2->VAR46 = FUN21(VAR2->VAR11->VAR52) * VAR7->VAR19;
        }
    }
}