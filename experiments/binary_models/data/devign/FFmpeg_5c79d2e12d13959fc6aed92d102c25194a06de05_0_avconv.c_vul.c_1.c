static void FUN1(int VAR1, int64_t VAR2)
{
    char VAR3[1024];
    VAR4 *VAR5;
    VAR6 *VAR7;
    int64_t VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13;
    double VAR14, VAR15, VAR16;
    static int64_t VAR17 = -1;
    static int VAR18[52];
    if (!VAR19 && !VAR1)
        return;
    if (!VAR1)
    {
        int64_t VAR20;
        VAR20 = FUN2();
        if (VAR17 == -1)
        {
            VAR17 = VAR20;
            return;
        }
        if ((VAR20 - VAR17) < 500000)
            return;
        VAR17 = VAR20;
    }
    VAR7 = VAR21[0]->VAR22;
    VAR8 = FUN3(VAR7->VAR23);
    if (VAR8 <= 0)
        VAR8 = FUN4(VAR7->VAR23);
    if (VAR8 < 0)
    {
        char VAR24[128];
        FUN5(VAR8, VAR24, sizeof(VAR24));
        FUN6(NULL, VAR25, ""
                                     "",
               VAR24);
        VAR8 = 0;
    }
    VAR3[0] = '';
    VAR15 = 1e10;
    VAR12 = 0;
    for (VAR13 = 0; VAR13 < VAR26; VAR13++)
    {
        float VAR27 = -1;
        VAR5 = VAR28[VAR13];
        VAR10 = VAR5->VAR29->VAR30;
        if (!VAR5->VAR31 && VAR10->VAR32)
            VAR27 = VAR10->VAR32->VAR33 / (float)VAR34;
        if (VAR12 && VAR10->VAR35 == VAR36)
        {
            snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", VAR27);
        }
        if (!VAR12 && VAR10->VAR35 == VAR36)
        {
            float VAR37 = (FUN2() - VAR2) / 1000000.0;
            VAR11 = VAR5->VAR11;
            snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", VAR11, (VAR37 > 1) ? (int)(VAR11 / VAR37 + 0.5) : 0, VAR27);
            if (VAR1)
                snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "");
            if (VAR38)
            {
                int VAR39;
                int VAR40 = FUN7(VAR27);
                if (VAR40 >= 0 && VAR40 < FUN8(VAR18))
                    VAR18[VAR40]++;
                for (VAR39 = 0; VAR39 < 32; VAR39++)
                    snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", (int)FUN7(FUN9(VAR18[VAR39] + 1)));
            }
            if (VAR10->VAR41 & VAR42)
            {
                int VAR39;
                double VAR43, VAR44 = 0;
                double VAR45, VAR46 = 0;
                char VAR47[3] = {'', '', ''};
                snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "");
                for (VAR39 = 0; VAR39 < 3; VAR39++)
                {
                    if (VAR1)
                    {
                        VAR43 = VAR10->VAR43[VAR39];
                        VAR45 = VAR10->VAR48 * VAR10->VAR49 * 255.0 * 255.0 * VAR11;
                    }
                    else
                    {
                        VAR43 = VAR10->VAR32->VAR43[VAR39];
                        VAR45 = VAR10->VAR48 * VAR10->VAR49 * 255.0 * 255.0;
                    }
                    if (VAR39)
                        VAR45 /= 4;
                    VAR44 += VAR43;
                    VAR46 += VAR45;
                    snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", VAR47[VAR39], FUN10(VAR43 / VAR45));
                }
                snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", FUN10(VAR44 / VAR46));
            }
            VAR12 = 1;
        }
        VAR16 = (double)VAR5->VAR29->VAR16.VAR50 * FUN11(VAR5->VAR29->VAR51);
        if ((VAR16 < VAR15) && (VAR16 > 0))
            VAR15 = VAR16;
    }
    if (VAR15 < 0.01)
        VAR15 = 0.01;
    VAR14 = (double)(VAR8 * 8) / VAR15 / 1000.0;
    snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", (double)VAR8 / 1024, VAR15, VAR14);
    if (VAR52 || VAR53)
        snprintf(VAR3 + strlen(VAR3), sizeof(VAR3) - strlen(VAR3), "", VAR52, VAR53);
    FUN6(NULL, VAR54, "", VAR3);
    FUN12(VAR55);
    if (VAR1)
    {
        int64_t VAR56 = VAR57 + VAR58 + VAR59;
        FUN6(NULL, VAR54, "");
        FUN6(NULL, VAR54, "", VAR58 / 1024.0, VAR57 / 1024.0, VAR59 / 1024.0, 100.0 * (VAR8 - VAR56) / VAR56);
    }
}