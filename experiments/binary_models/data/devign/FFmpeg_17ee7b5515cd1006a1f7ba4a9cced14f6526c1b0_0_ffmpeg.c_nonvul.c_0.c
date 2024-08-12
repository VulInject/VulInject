static void FUN1(VAR1 **VAR2, VAR3 **VAR4, int VAR5, int VAR6)
{
    char VAR7[1024];
    VAR3 *VAR8;
    VAR1 *VAR9;
    int64_t VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15;
    double VAR16, VAR17, VAR18;
    static int64_t VAR19 = -1;
    static int VAR20[52];
    if (!VAR6)
    {
        int64_t VAR21;
        VAR21 = FUN2();
        if (VAR19 == -1)
        {
            VAR19 = VAR21;
            return;
        }
        if ((VAR21 - VAR19) < 500000)
            return;
        VAR19 = VAR21;
    }
    VAR9 = VAR2[0];
    VAR10 = FUN3(VAR9->VAR22);
    if (VAR10 < 0)
        VAR10 = FUN4(VAR9->VAR22);
    VAR7[0] = '';
    VAR17 = 1e10;
    VAR14 = 0;
    for (VAR15 = 0; VAR15 < VAR5; VAR15++)
    {
        float VAR23 = -1;
        VAR8 = VAR4[VAR15];
        VAR12 = VAR8->VAR24->VAR25;
        if (!VAR8->VAR24->VAR26 && VAR12->VAR27)
            VAR23 = VAR12->VAR27->VAR28 / (float)VAR29;
        if (VAR14 && VAR12->VAR30 == VAR31)
        {
            snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR23);
        }
        if (!VAR14 && VAR12->VAR30 == VAR31)
        {
            float VAR32 = (FUN2() - VAR33) / 1000000.0;
            VAR13 = VAR8->VAR13;
            snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR13, (VAR32 > 1) ? (int)(VAR13 / VAR32 + 0.5) : 0, VAR23);
            if (VAR6)
                snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "");
            if (VAR34)
            {
                int VAR35;
                int VAR36 = FUN5(VAR23);
                if (VAR36 >= 0 && VAR36 < FUN6(VAR20))
                    VAR20[VAR36]++;
                for (VAR35 = 0; VAR35 < 32; VAR35++)
                    snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", (int)FUN5(FUN7(VAR20[VAR35] + 1) / FUN7(2)));
            }
            if (VAR12->VAR37 & VAR38)
            {
                int VAR35;
                double VAR39, VAR40 = 0;
                double VAR41, VAR42 = 0;
                char VAR43[3] = {'', '', ''};
                snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "");
                for (VAR35 = 0; VAR35 < 3; VAR35++)
                {
                    if (VAR6)
                    {
                        VAR39 = VAR12->VAR39[VAR35];
                        VAR41 = VAR12->VAR44 * VAR12->VAR45 * 255.0 * 255.0 * VAR13;
                    }
                    else
                    {
                        VAR39 = VAR12->VAR27->VAR39[VAR35];
                        VAR41 = VAR12->VAR44 * VAR12->VAR45 * 255.0 * 255.0;
                    }
                    if (VAR35)
                        VAR41 /= 4;
                    VAR40 += VAR39;
                    VAR42 += VAR41;
                    snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR43[VAR35], FUN8(VAR39 / VAR41));
                }
                snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", FUN8(VAR40 / VAR42));
            }
            VAR14 = 1;
        }
        VAR18 = (double)VAR8->VAR24->VAR18.VAR46 * FUN9(VAR8->VAR24->VAR47);
        if ((VAR18 < VAR17) && (VAR18 > 0))
            VAR17 = VAR18;
    }
    if (VAR17 < 0.01)
        VAR17 = 0.01;
    if (VAR48 > 0 || VAR6)
    {
        VAR16 = (double)(VAR10 * 8) / VAR17 / 1000.0;
        snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", (double)VAR10 / 1024, VAR17, VAR16);
        if (VAR49 || VAR50)
            snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR49, VAR50);
        if (VAR48 >= 0)
            fprintf(VAR51, "", VAR7);
        FUN10(VAR51);
    }
    if (VAR6 && VAR48 >= 0)
    {
        int64_t VAR52 = VAR53 + VAR54 + VAR55;
        fprintf(VAR51, "");
        fprintf(VAR51, "", VAR54 / 1024.0, VAR53 / 1024.0, VAR55 / 1024.0, 100.0 * (VAR10 - VAR52) / VAR52);
    }
}