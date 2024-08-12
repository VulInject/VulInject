static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned char *VAR7, int VAR8)
{
    VAR9 *VAR10;
    int64_t VAR11, VAR12;
    int64_t VAR13 = VAR8;
    int VAR14, VAR15, VAR16;
    VAR17 *VAR18 = VAR4->VAR19->VAR20;
    VAR17 *VAR21 = VAR6->VAR19->VAR20;
    int VAR22 = FUN2(VAR18->VAR23) / 8;
    int VAR24 = FUN2(VAR21->VAR23) / 8;
    const int VAR25 = FUN3(VAR18->VAR20->VAR26);
VAR27:
    VAR12 = (VAR13 + VAR24 * VAR21->VAR28 - 1) / (VAR24 * VAR21->VAR28);
    VAR12 = (VAR12 * VAR18->VAR29 + VAR21->VAR29) / VAR21->VAR29;
    VAR12 = VAR12 * 2 + 10000;
    VAR12 = FUN4(VAR12, VAR18->VAR30);
    VAR12 *= VAR22 * VAR18->VAR28;
    VAR11 = FUN4(VAR12, VAR18->VAR30 * VAR22 * VAR18->VAR28);
    if (VAR25 > 8 * VAR22)
        VAR11 = VAR11 * VAR25 / (8 * VAR22);
    VAR11 += VAR31;
    if (VAR11 > VAR32 || VAR12 > VAR32)
    {
        fprintf(VAR33, "");
        FUN5(1);
    }
    FUN6(&VAR34, &VAR35, VAR12);
    FUN6(&VAR36, &VAR37, VAR11);
    if (!VAR34 || !VAR36)
    {
        fprintf(VAR33, "");
        FUN5(1);
    }
    if (VAR18->VAR28 != VAR21->VAR28)
        VAR4->VAR38 = 1;
    if (VAR4->VAR38 && !VAR4->VAR39)
    {
        if (VAR21->VAR23 != VAR40)
            fprintf(VAR33, "");
        VAR4->VAR39 = FUN7(VAR18->VAR28, VAR21->VAR28, VAR18->VAR29, VAR21->VAR29, VAR18->VAR23, VAR21->VAR23, 16, 10, 0, 0.8);
        if (!VAR4->VAR39)
        {
            fprintf(VAR33, "", VAR21->VAR28, VAR21->VAR29, VAR18->VAR28, VAR18->VAR29);
            FUN5(1);
        }
    }
    if (!VAR4->VAR38 && VAR21->VAR23 != VAR18->VAR23 && FUN8(VAR18->VAR23, VAR21->VAR23) != VAR4->VAR41)
    {
        if (VAR4->VAR42)
            FUN9(VAR4->VAR42);
        VAR4->VAR42 = FUN10(VAR18->VAR23, 1, VAR21->VAR23, 1, NULL, 0);
        if (!VAR4->VAR42)
        {
            fprintf(VAR33, "", FUN11(VAR21->VAR23), FUN11(VAR18->VAR23));
            FUN5(1);
        }
        VAR4->VAR41 = FUN8(VAR18->VAR23, VAR21->VAR23);
    }
    if (VAR43)
    {
        double VAR44 = FUN12(VAR4) * VAR18->VAR29 - VAR4->VAR45 - FUN13(VAR4->VAR46) / (VAR18->VAR28 * 2);
        double VAR47 = VAR44 * VAR21->VAR29 / VAR18->VAR29;
        int VAR48 = ((int)VAR47) * 2 * VAR21->VAR28;
        if (FUN14(VAR44) > 50)
        {
            if (VAR6->VAR49 || FUN14(VAR44) > VAR50 * VAR18->VAR29)
            {
                if (VAR48 < 0)
                {
                    VAR48 = FUN4(VAR48, -VAR8);
                    VAR8 += VAR48;
                    VAR7 -= VAR48;
                    if (VAR51 > 2)
                        fprintf(VAR33, "", (int)-VAR44);
                    if (!VAR8)
                        return;
                    VAR6->VAR49 = 0;
                }
                else
                {
                    static VAR9 *VAR52 = NULL;
                    VAR52 = FUN15(VAR52, VAR48 + VAR8);
                    if (VAR48 > VAR13 - VAR8)
                    {
                        VAR13 = VAR48 + (VAR53)VAR8;
                        goto VAR27;
                    }
                    VAR6->VAR49 = 0;
                    memset(VAR52, 0, VAR48);
                    memcpy(VAR52 + VAR48, VAR7, VAR8);
                    VAR7 = VAR52;
                    VAR8 += VAR48;
                    if (VAR51 > 2)
                        fprintf(VAR33, "", (int)VAR44);
                }
            }
            else if (VAR43 > 1)
            {
                int VAR54 = FUN16(VAR44, -VAR43, VAR43);
                FUN17(VAR4->VAR38);
                if (VAR51 > 2)
                    fprintf(VAR33, "", VAR44, VAR54, VAR18->VAR29);
                FUN18(*(struct VAR55 **)VAR4->VAR39, VAR54, VAR18->VAR29);
            }
        }
    }
    else
        VAR4->VAR45 = FUN19(FUN12(VAR4) * VAR18->VAR29) - FUN13(VAR4->VAR46) / (VAR18->VAR28 * 2);
    if (VAR4->VAR38)
    {
        VAR10 = VAR34;
        VAR14 = FUN20(VAR4->VAR39, (short *)VAR10, (short *)VAR7, VAR8 / (VAR21->VAR28 * VAR24));
        VAR14 = VAR14 * VAR18->VAR28 * VAR22;
    }
    else
    {
        VAR10 = VAR7;
        VAR14 = VAR8;
    }
    if (!VAR4->VAR38 && VAR21->VAR23 != VAR18->VAR23)
    {
        const void *VAR56[6] = {VAR10};
        void *VAR57[6] = {VAR34};
        int VAR58[6] = {VAR24};
        int VAR59[6] = {VAR22};
        int VAR60 = VAR14 / VAR58[0];
        if (FUN21(VAR4->VAR42, VAR57, VAR59, VAR56, VAR58, VAR60) < 0)
        {
            FUN22("");
            if (VAR61)
                FUN5(1);
            return;
        }
        VAR10 = VAR34;
        VAR14 = VAR60 * VAR22;
    }
    if (VAR18->VAR30 > 1)
    {
        if (FUN23(VAR4->VAR46, FUN13(VAR4->VAR46) + VAR14) < 0)
        {
            fprintf(VAR33, "");
            FUN5(1);
        }
        FUN24(VAR4->VAR46, VAR10, VAR14, NULL);
        VAR15 = VAR18->VAR30 * VAR22 * VAR18->VAR28;
        while (FUN13(VAR4->VAR46) >= VAR15)
        {
            AVPacket VAR62;
            FUN25(&VAR62);
            FUN26(VAR4->VAR46, VAR34, VAR15, NULL);
            VAR16 = FUN27(VAR18, VAR36, VAR11, (short *)VAR34);
            if (VAR16 < 0)
            {
                fprintf(VAR33, "");
                FUN5(1);
            }
            VAR63 += VAR16;
            VAR62.VAR64 = VAR4->VAR65;
            VAR62.VAR66 = VAR36;
            VAR62.VAR8 = VAR16;
            if (VAR18->VAR67 && VAR18->VAR67->VAR68 != VAR69)
                VAR62.VAR68 = FUN28(VAR18->VAR67->VAR68, VAR18->VAR70, VAR4->VAR19->VAR70);
            VAR62.VAR71 |= VAR72;
            FUN29(VAR2, &VAR62, VAR18, VAR73[VAR4->VAR74][VAR62.VAR64]);
            VAR4->VAR45 += VAR18->VAR30;
        }
    }
    else
    {
        AVPacket VAR62;
        FUN25(&VAR62);
        VAR4->VAR45 += VAR14 / (VAR22 * VAR18->VAR28);
        VAR14 /= VAR22;
        if (VAR25)
            VAR14 = VAR14 * VAR25 / 8;
        if (VAR14 > VAR11)
        {
            fprintf(VAR33, "");
            FUN5(1);
        }
        VAR16 = FUN27(VAR18, VAR36, VAR14, (short *)VAR10);
        if (VAR16 < 0)
        {
            fprintf(VAR33, "");
            FUN5(1);
        }
        VAR63 += VAR16;
        VAR62.VAR64 = VAR4->VAR65;
        VAR62.VAR66 = VAR36;
        VAR62.VAR8 = VAR16;
        if (VAR18->VAR67 && VAR18->VAR67->VAR68 != VAR69)
            VAR62.VAR68 = FUN28(VAR18->VAR67->VAR68, VAR18->VAR70, VAR4->VAR19->VAR70);
        VAR62.VAR71 |= VAR72;
        FUN29(VAR2, &VAR62, VAR18, VAR73[VAR4->VAR74][VAR62.VAR64]);
    }
}