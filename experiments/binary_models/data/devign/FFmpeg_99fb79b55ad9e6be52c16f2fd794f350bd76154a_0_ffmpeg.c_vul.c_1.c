static void FUN1(VAR1 **VAR2, VAR3 **VAR4, int VAR5, int VAR6)
{
    char VAR7[1024];
    VAR3 *VAR8;
    VAR1 *VAR9, *VAR10;
    int64_t VAR11;
    VAR12 *VAR13;
    int VAR14, VAR15, VAR16;
    double VAR17, VAR18, VAR19;
    static int64_t VAR20 = -1;
    static int VAR21[52];
    if (!VAR6)
    {
        int64_t VAR22;
        VAR22 = FUN2();
        if (VAR20 == -1)
        {
            VAR20 = VAR22;
            return;
        }
        if ((VAR22 - VAR20) < 500000)
            return;
        VAR20 = VAR22;
    }
    VAR9 = VAR2[0];
    VAR11 = FUN3(VAR9->VAR23);
    if (VAR11 < 0)
        VAR11 = FUN4(VAR9->VAR23);
    VAR7[0] = '';
    VAR18 = 1e10;
    VAR15 = 0;
    for (VAR16 = 0; VAR16 < VAR5; VAR16++)
    {
        VAR8 = VAR4[VAR16];
        VAR10 = VAR2[VAR8->VAR24];
        VAR13 = VAR8->VAR25->VAR26;
        if (VAR15 && VAR13->VAR27 == VAR28)
        {
            snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR13->VAR29->VAR30 / (float)VAR31);
        }
        if (!VAR15 && VAR13->VAR27 == VAR28)
        {
            float VAR32 = (FUN2() - VAR33) / 1000000.0;
            VAR14 = VAR8->VAR14;
            snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR14, (VAR32 > 1) ? (int)(VAR14 / VAR32 + 0.5) : 0, VAR13->VAR29 ? VAR13->VAR29->VAR30 / (float)VAR31 : -1);
            if (VAR6)
                snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "");
            if (VAR34 && VAR13->VAR29)
            {
                int VAR35;
                int VAR36 = FUN5(VAR13->VAR29->VAR30 / (float)VAR31);
                if (VAR36 >= 0 && VAR36 < sizeof(VAR21) / sizeof(int))
                    VAR21[VAR36]++;
                for (VAR35 = 0; VAR35 < 32; VAR35++)
                    snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", (int)FUN5(FUN6(VAR21[VAR35] + 1) / FUN6(2)));
            }
            if (VAR13->VAR37 & VAR38)
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
                        VAR39 = VAR13->VAR39[VAR35];
                        VAR41 = VAR13->VAR44 * VAR13->VAR45 * 255.0 * 255.0 * VAR14;
                    }
                    else
                    {
                        VAR39 = VAR13->VAR29->VAR39[VAR35];
                        VAR41 = VAR13->VAR44 * VAR13->VAR45 * 255.0 * 255.0;
                    }
                    if (VAR35)
                        VAR41 /= 4;
                    VAR40 += VAR39;
                    VAR42 += VAR41;
                    snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR43[VAR35], FUN7(VAR39 / VAR41));
                }
                snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", FUN7(VAR40 / VAR42));
            }
            VAR15 = 1;
        }
        VAR19 = (double)VAR8->VAR25->VAR19.VAR46 * FUN8(VAR8->VAR25->VAR47);
        if ((VAR19 < VAR18) && (VAR19 > 0))
            VAR18 = VAR19;
    }
    if (VAR18 < 0.01)
        VAR18 = 0.01;
    if (VAR48 || VAR6)
    {
        VAR17 = (double)(VAR11 * 8) / VAR18 / 1000.0;
        snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", (double)VAR11 / 1024, VAR18, VAR17);
        if (VAR48 > 1)
            snprintf(VAR7 + strlen(VAR7), sizeof(VAR7) - strlen(VAR7), "", VAR49, VAR50);
        if (VAR48 >= 0)
            fprintf(VAR51, "", VAR7);
        FUN9(VAR51);
    }
    if (VAR6 && VAR48 >= 0)
    {
        int64_t VAR52 = VAR53 + VAR54 + VAR55;
        fprintf(VAR51, "");
        fprintf(VAR51, "", VAR54 / 1024.0, VAR53 / 1024.0, VAR55 / 1024.0, 100.0 * (VAR11 - VAR52) / VAR52);
    }
}