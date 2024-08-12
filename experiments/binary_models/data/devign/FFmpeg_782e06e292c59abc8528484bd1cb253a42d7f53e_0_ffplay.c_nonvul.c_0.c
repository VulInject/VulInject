static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5;
    VAR3 *VAR6 = &VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10->VAR11;
    int VAR12, VAR13, VAR14;
    int64_t VAR15;
    int VAR16;
    av_unused double VAR17;
    int VAR18;
    AVRational VAR19;
    int VAR20;
    int VAR21;
    for (;;)
    {
        while (VAR4->VAR22 != -1 || VAR2->VAR23)
        {
            if (!VAR2->VAR24)
            {
                if (!(VAR2->VAR24 = FUN2()))
                    return FUN3(VAR25);
            }
            else
            {
                FUN4(VAR2->VAR24);
                FUN5(VAR2->VAR24);
            }
            if (VAR2->VAR26.VAR27 != VAR2->VAR28)
                break;
            if (VAR2->VAR29)
                return -1;
            if (!VAR2->VAR23)
            {
                VAR12 = FUN6(VAR9, VAR2->VAR24, &VAR16, VAR4);
                if (VAR12 < 0)
                {
                    VAR4->VAR30 = 0;
                    break;
                }
                VAR4->VAR31 += VAR12;
                VAR4->VAR30 -= VAR12;
                if (VAR4->VAR31 && VAR4->VAR30 <= 0 || !VAR4->VAR31 && !VAR16)
                    VAR4->VAR22 = -1;
                if (!VAR16)
                    continue;
                VAR19 = (VAR32){1, VAR2->VAR24->VAR33};
                if (VAR2->VAR24->VAR34 != VAR35)
                    VAR2->VAR24->VAR34 = FUN7(VAR2->VAR24->VAR34, VAR9->VAR36, VAR19);
                else if (VAR2->VAR24->VAR37 != VAR35)
                    VAR2->VAR24->VAR34 = FUN7(VAR2->VAR24->VAR37, VAR2->VAR10->VAR36, VAR19);
                if (VAR4->VAR34 != VAR35)
                    VAR4->VAR34 += (double)VAR2->VAR24->VAR38 / VAR2->VAR24->VAR33 / FUN8(VAR2->VAR10->VAR36);
                VAR15 = FUN9(VAR2->VAR24->VAR39, FUN10(VAR2->VAR24));
                VAR21 = FUN11(VAR2->VAR40.VAR41, VAR2->VAR40.VAR42, VAR2->VAR24->VAR43, FUN10(VAR2->VAR24)) || VAR2->VAR40.VAR39 != VAR15 || VAR2->VAR40.VAR44 != VAR2->VAR24->VAR33 || VAR2->VAR28 != VAR2->VAR45;
                if (VAR21)
                {
                    char VAR46[1024], VAR47[1024];
                    FUN12(VAR46, sizeof(VAR46), -1, VAR2->VAR40.VAR39);
                    FUN12(VAR47, sizeof(VAR47), -1, VAR15);
                    FUN13(NULL, VAR48, "", VAR2->VAR40.VAR44, VAR2->VAR40.VAR42, FUN14(VAR2->VAR40.VAR41), VAR46, VAR2->VAR45, VAR2->VAR24->VAR33, FUN10(VAR2->VAR24), FUN14(VAR2->VAR24->VAR43), VAR47, VAR2->VAR28);
                    VAR2->VAR40.VAR41 = VAR2->VAR24->VAR43;
                    VAR2->VAR40.VAR42 = FUN10(VAR2->VAR24);
                    VAR2->VAR40.VAR39 = VAR15;
                    VAR2->VAR40.VAR44 = VAR2->VAR24->VAR33;
                    VAR2->VAR45 = VAR2->VAR28;
                    if ((VAR20 = FUN15(VAR2, VAR49, 1)) < 0)
                        return VAR20;
                }
                if ((VAR20 = FUN16(VAR2->VAR50, VAR2->VAR24)) < 0)
                    return VAR20;
                FUN4(VAR2->VAR24);
            }
            if ((VAR20 = FUN17(VAR2->VAR51, VAR2->VAR24, 0)) < 0)
            {
                if (VAR20 == FUN3(VAR52))
                {
                    VAR2->VAR23 = 0;
                    continue;
                }
                return VAR20;
            }
            VAR2->VAR23 = 1;
            VAR19 = VAR2->VAR51->VAR53[0]->VAR36;
            VAR13 = FUN18(NULL, FUN10(VAR2->VAR24), VAR2->VAR24->VAR38, VAR2->VAR24->VAR43, 1);
            VAR15 = (VAR2->VAR24->VAR39 && FUN10(VAR2->VAR24) == FUN19(VAR2->VAR24->VAR39)) ? VAR2->VAR24->VAR39 : FUN20(FUN10(VAR2->VAR24));
            VAR18 = FUN21(VAR2, VAR2->VAR24->VAR38);
            if (VAR2->VAR24->VAR43 != VAR2->VAR54.VAR41 || VAR15 != VAR2->VAR54.VAR39 || VAR2->VAR24->VAR33 != VAR2->VAR54.VAR44 || (VAR18 != VAR2->VAR24->VAR38 && !VAR2->VAR55))
            {
                FUN22(&VAR2->VAR55);
                VAR2->VAR55 = FUN23(NULL, VAR2->VAR56.VAR39, VAR2->VAR56.VAR41, VAR2->VAR56.VAR44, VAR15, VAR2->VAR24->VAR43, VAR2->VAR24->VAR33, 0, NULL);
                if (!VAR2->VAR55 || FUN24(VAR2->VAR55) < 0)
                {
                    FUN13(NULL, VAR57, "", VAR2->VAR24->VAR33, FUN14(VAR2->VAR24->VAR43), FUN10(VAR2->VAR24), VAR2->VAR56.VAR44, FUN14(VAR2->VAR56.VAR41), VAR2->VAR56.VAR42);
                    break;
                }
                VAR2->VAR54.VAR39 = VAR15;
                VAR2->VAR54.VAR42 = FUN10(VAR2->VAR24);
                VAR2->VAR54.VAR44 = VAR2->VAR24->VAR33;
                VAR2->VAR54.VAR41 = VAR2->VAR24->VAR43;
            }
            if (VAR2->VAR55)
            {
                const VAR58 **VAR59 = (const VAR58 **)VAR2->VAR24->VAR60;
                VAR58 **VAR61 = &VAR2->VAR62;
                int VAR63 = (VAR64)VAR18 * VAR2->VAR56.VAR44 / VAR2->VAR24->VAR33 + 256;
                int VAR65 = FUN18(NULL, VAR2->VAR56.VAR42, VAR63, VAR2->VAR56.VAR41, 0);
                int VAR66;
                if (VAR65 < 0)
                {
                    FUN13(NULL, VAR57, "");
                    break;
                }
                if (VAR18 != VAR2->VAR24->VAR38)
                {
                    if (FUN25(VAR2->VAR55, (VAR18 - VAR2->VAR24->VAR38) * VAR2->VAR56.VAR44 / VAR2->VAR24->VAR33, VAR18 * VAR2->VAR56.VAR44 / VAR2->VAR24->VAR33) < 0)
                    {
                        FUN13(NULL, VAR57, "");
                        break;
                    }
                }
                FUN26(&VAR2->VAR62, &VAR2->VAR67, VAR65);
                if (!VAR2->VAR62)
                    return FUN3(VAR25);
                VAR66 = FUN27(VAR2->VAR55, VAR61, VAR63, VAR59, VAR2->VAR24->VAR38);
                if (VAR66 < 0)
                {
                    FUN13(NULL, VAR57, "");
                    break;
                }
                if (VAR66 == VAR63)
                {
                    FUN13(NULL, VAR68, "");
                    FUN24(VAR2->VAR55);
                }
                VAR2->VAR69 = VAR2->VAR62;
                VAR14 = VAR66 * VAR2->VAR56.VAR42 * FUN28(VAR2->VAR56.VAR41);
            }
            else
            {
                VAR2->VAR69 = VAR2->VAR24->VAR31[0];
                VAR14 = VAR13;
            }
            VAR17 = VAR2->VAR70;
            if (VAR2->VAR24->VAR34 != VAR35)
                VAR2->VAR70 = VAR2->VAR24->VAR34 * FUN8(VAR19) + (double)VAR2->VAR24->VAR38 / VAR2->VAR24->VAR33;
            else
                VAR2->VAR70 = VAR71;
            VAR2->VAR72 = VAR2->VAR28;
            {
                static double VAR73;
                FUN29("", VAR2->VAR70 - VAR73, VAR2->VAR70, VAR17);
                VAR73 = VAR2->VAR70;
            }
            return VAR14;
        }
        if (VAR6->VAR31)
            FUN30(VAR6);
        memset(VAR4, 0, sizeof(*VAR4));
        VAR4->VAR22 = -1;
        if (VAR2->VAR26.VAR74)
        {
            return -1;
        }
        if (VAR2->VAR26.VAR75 == 0)
            FUN31(VAR2->VAR76);
        if ((FUN32(&VAR2->VAR26, VAR6, 1, &VAR2->VAR28)) < 0)
            return -1;
        if (VAR6->VAR31 == VAR77.VAR31)
        {
            FUN33(VAR9);
            VAR2->VAR23 = 0;
        }
        *VAR4 = *VAR6;
    }
}