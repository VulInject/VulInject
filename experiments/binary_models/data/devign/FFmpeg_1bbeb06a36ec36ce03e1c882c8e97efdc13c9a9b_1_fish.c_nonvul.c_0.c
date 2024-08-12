void FUN1(void *VAR1, VAR2 *VAR3, enum PixelFormat VAR4, int VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = (VAR8 *)VAR1;
    VAR10 *VAR11 = VAR12 + VAR13;
    int VAR14 = VAR3->VAR15[0];
    FUN2(NULL, VAR16, "", VAR4, VAR5, VAR7, VAR9->VAR17);
    if (VAR7 < VAR9->VAR17)
        return;
    if (VAR5 < VAR9->VAR18)
        return;
    VAR9->VAR17 = VAR7 + 1000000;
    if (VAR4 == VAR19)
    {
        VAR10 *VAR20, *VAR21, *VAR22;
        int VAR23 = VAR5 >> 1;
        int VAR24 = 0;
        int VAR25;
        int VAR26;
        int VAR27, VAR28;
        int VAR29, VAR30;
        VAR28 = 2 * ((VAR9->VAR31 * VAR6) / 200);
        VAR27 = VAR6 - VAR28;
        VAR30 = (VAR9->VAR31 * VAR23) / 100;
        VAR29 = VAR23 - VAR30;
        VAR25 = ((VAR27 - VAR28) >> 1) * (VAR29 - VAR30);
        VAR20 = VAR3->VAR32[0] + VAR28 * VAR3->VAR15[0] + VAR30 * 2;
        VAR21 = VAR3->VAR32[1] + VAR28 * VAR3->VAR15[1] / 2 + VAR30;
        VAR22 = VAR3->VAR32[2] + VAR28 * VAR3->VAR15[2] / 2 + VAR30;
        for (VAR26 = VAR27; VAR26 > VAR28; VAR26 -= 2)
        {
            int VAR33;
            for (VAR33 = VAR29; VAR33 > VAR30; VAR33--)
            {
                unsigned int VAR34, VAR35, VAR36;
                HSV VAR37;
                int VAR38, VAR39, VAR40, VAR41, VAR42, VAR43;
                FUN3(VAR21[0], VAR22[0]);
                FUN4(VAR34, VAR35, VAR36, VAR20[0]);
                FUN5(&VAR37, VAR34, VAR35, VAR36);
                if (VAR9->VAR44 > 1)
                    FUN2(NULL, VAR16, "", VAR34, VAR35, VAR36, VAR37.VAR26, VAR37.VAR45, VAR37.VAR22);
                if (VAR37.VAR26 >= VAR9->VAR46.VAR26 && VAR37.VAR26 <= VAR9->VAR47.VAR26 && VAR37.VAR45 >= VAR9->VAR46.VAR45 && VAR37.VAR45 <= VAR9->VAR47.VAR45 && VAR37.VAR22 >= VAR9->VAR46.VAR22 && VAR37.VAR22 <= VAR9->VAR47.VAR22)
                {
                    VAR24++;
                }
                else if (VAR9->VAR48)
                {
                    VAR20[0] = VAR20[1] = VAR20[VAR14] = VAR20[VAR14 + 1] = 16;
                    VAR21[0] = 128;
                    VAR22[0] = 128;
                }
                VAR20 += 2;
                VAR21++;
                VAR22++;
            }
            VAR20 += VAR3->VAR15[0] * 2 - (VAR29 - VAR30) * 2;
            VAR21 += VAR3->VAR15[1] - (VAR29 - VAR30);
            VAR22 += VAR3->VAR15[2] - (VAR29 - VAR30);
        }
        if (VAR9->VAR44)
            FUN2(NULL, VAR49, "", VAR24, VAR25, 1000 * VAR24 / VAR25);
        if (VAR24 * 1000 / VAR25 >= VAR9->VAR50)
        {
            int VAR51;
            char *VAR52;
            AVPicture VAR53;
            static int VAR54;
            static int VAR55;
            if ((VAR54++ % 20) == 0)
            {
                VAR56 *VAR57;
                VAR55 = 0;
                VAR57 = FUN6(VAR9->VAR58);
                if (VAR57)
                {
                    struct VAR59 *VAR60;
                    while ((VAR60 = FUN7(VAR57)))
                    {
                        if (FUN8("", VAR60->VAR61, 7) == 0)
                        {
                            if (strcmp("", VAR60->VAR61 + strlen(VAR60->VAR61) - 4) == 0)
                            {
                                VAR55++;
                            }
                        }
                    }
                    FUN9(VAR57);
                }
            }
            if (VAR55 < VAR9->VAR62)
            {
                VAR63 *VAR64;
                char VAR65[256];
                VAR51 = FUN10(VAR66, VAR5, VAR6);
                VAR52 = FUN11(VAR51);
                FUN12(&VAR53, VAR52, VAR66, VAR5, VAR6);
                VAR9->VAR67 = FUN13(VAR9->VAR67, VAR5, VAR6, VAR4, VAR5, VAR6, VAR66, VAR68, NULL, NULL, NULL);
                if (VAR9->VAR67 == NULL)
                {
                    FUN2(NULL, VAR69, "");
                    return;
                }
                FUN14(VAR9->VAR67, VAR3->VAR32, VAR3->VAR15, 0, VAR6, VAR53.VAR32, VAR53.VAR15);
                snprintf(VAR65, sizeof(VAR65), "" VAR70 "", VAR9->VAR58, (long)(FUN15() / 1000000), VAR7);
                VAR64 = fopen(VAR65, "");
                if (VAR64)
                {
                    fprintf(VAR64, "", VAR5, VAR6);
                    if (!fwrite(VAR52, VAR5 * VAR6 * 3, 1, VAR64))
                        FUN2(VAR1, VAR69, "", VAR65);
                    fclose(VAR64);
                }
                FUN16(VAR52);
                VAR9->VAR17 = VAR7 + VAR9->VAR71;
            }
        }
    }
}