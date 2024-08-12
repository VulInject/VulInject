static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int64_t VAR7, int64_t VAR8)
{
    char VAR9[1024];
    VAR3 *VAR10;
    VAR11 *VAR12;
    int64_t VAR13;
    VAR14 *VAR15;
    int VAR16, VAR17, VAR18;
    double VAR19;
    int64_t VAR20 = VAR21;
    static int64_t VAR22 = -1;
    static int VAR23[52];
    int VAR24, VAR25, VAR26, VAR27;
    if (!VAR6)
    {
        if (VAR22 == -1)
        {
            VAR22 = VAR8;
            return;
        }
        if ((VAR8 - VAR22) < 500000)
            return;
        VAR22 = VAR8;
    }
    VAR12 = VAR2[0].VAR28;
    VAR13 = FUN2(VAR12->VAR29);
    if (VAR13 < 0)
        VAR13 = FUN3(VAR12->VAR29);
    VAR9[0] = '';
    VAR17 = 0;
    for (VAR18 = 0; VAR18 < VAR5; VAR18++)
    {
        float VAR30 = -1;
        VAR10 = &VAR4[VAR18];
        VAR15 = VAR10->VAR31->VAR32;
        if (!VAR10->VAR31->VAR33 && VAR15->VAR34)
            VAR30 = VAR15->VAR34->VAR35 / (float)VAR36;
        if (VAR17 && VAR15->VAR37 == VAR38)
        {
            snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR30);
        }
        if (!VAR17 && VAR15->VAR37 == VAR38)
        {
            float VAR39 = (VAR8 - VAR7) / 1000000.0;
            VAR16 = VAR10->VAR16;
            snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR16, (VAR39 > 1) ? (int)(VAR16 / VAR39 + 0.5) : 0, VAR30);
            if (VAR6)
                snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "");
            if (VAR40)
            {
                int VAR41;
                int VAR42 = FUN4(VAR30);
                if (VAR42 >= 0 && VAR42 < FUN5(VAR23))
                    VAR23[VAR42]++;
                for (VAR41 = 0; VAR41 < 32; VAR41++)
                    snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", (int)FUN4(FUN6(VAR23[VAR41] + 1) / FUN6(2)));
            }
            if (VAR15->VAR43 & VAR44)
            {
                int VAR41;
                double VAR45, VAR46 = 0;
                double VAR47, VAR48 = 0;
                char VAR49[3] = {'', '', ''};
                snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "");
                for (VAR41 = 0; VAR41 < 3; VAR41++)
                {
                    if (VAR6)
                    {
                        VAR45 = VAR15->VAR45[VAR41];
                        VAR47 = VAR15->VAR50 * VAR15->VAR51 * 255.0 * 255.0 * VAR16;
                    }
                    else
                    {
                        VAR45 = VAR15->VAR34->VAR45[VAR41];
                        VAR47 = VAR15->VAR50 * VAR15->VAR51 * 255.0 * 255.0;
                    }
                    if (VAR41)
                        VAR47 /= 4;
                    VAR46 += VAR45;
                    VAR48 += VAR47;
                    snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR49[VAR41], FUN7(VAR45 / VAR47));
                }
                snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", FUN7(VAR46 / VAR48));
            }
            VAR17 = 1;
        }
        VAR20 = FUN8(VAR20, FUN9(VAR10->VAR31->VAR20.VAR52, VAR10->VAR31->VAR53, VAR54));
    }
    VAR26 = VAR20 / VAR55;
    VAR27 = VAR20 % VAR55;
    VAR25 = VAR26 / 60;
    VAR26 %= 60;
    VAR24 = VAR25 / 60;
    VAR25 %= 60;
    VAR19 = VAR20 ? VAR13 * 8 / (VAR20 / 1000.0) : 0;
    snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR13 / 1024.0);
    snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR24, VAR25, VAR26, (100 * VAR27) / VAR55);
    snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR19);
    if (VAR56 || VAR57)
        snprintf(VAR9 + strlen(VAR9), sizeof(VAR9) - strlen(VAR9), "", VAR56, VAR57);
    FUN10(NULL, VAR6 ? VAR58 : VAR59, "", VAR9);
    FUN11(VAR60);
    if (VAR6)
    {
        int64_t VAR61 = VAR62 + VAR63 + VAR64;
        FUN10(NULL, VAR59, "");
        FUN10(NULL, VAR59, "", VAR63 / 1024.0, VAR62 / 1024.0, VAR64 / 1024.0, 100.0 * (VAR13 - VAR61) / VAR61);
    }
}