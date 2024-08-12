static void FUN1(int VAR1, int64_t VAR2, int64_t VAR3)
{
    char VAR4[1024];
    AVBPrint VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    int64_t VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15;
    double VAR16;
    int64_t VAR17 = VAR18;
    static int64_t VAR19 = -1;
    static int VAR20[52];
    int VAR21, VAR22, VAR23, VAR24;
    if (!VAR25 && !VAR1 && !VAR26)
        return;
    if (!VAR1)
    {
        if (VAR19 == -1)
        {
            VAR19 = VAR3;
            return;
        }
        if ((VAR3 - VAR19) < 500000)
            return;
        VAR19 = VAR3;
    }
    VAR9 = VAR27[0]->VAR28;
    VAR10 = FUN2(VAR9->VAR29);
    if (VAR10 <= 0)
        VAR10 = FUN3(VAR9->VAR29);
    VAR4[0] = '';
    VAR14 = 0;
    FUN4(&VAR5, 0, 1);
    for (VAR15 = 0; VAR15 < VAR30; VAR15++)
    {
        float VAR31 = -1;
        VAR7 = VAR32[VAR15];
        VAR12 = VAR7->VAR33;
        if (!VAR7->VAR34 && VAR12->VAR35)
            VAR31 = VAR12->VAR35->VAR36 / (float)VAR37;
        if (VAR14 && VAR12->VAR38 == VAR39)
        {
            snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR31);
            FUN5(&VAR5, "", VAR7->VAR40, VAR7->VAR41, VAR31);
        }
        if (!VAR14 && VAR12->VAR38 == VAR39)
        {
            float VAR42, VAR43 = (VAR3 - VAR2) / 1000000.0;
            VAR13 = VAR7->VAR13;
            VAR42 = VAR43 > 1 ? VAR13 / VAR43 : 0;
            snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR13, VAR42 < 9.95, VAR42, VAR31);
            FUN5(&VAR5, "", VAR13);
            FUN5(&VAR5, "", VAR42);
            FUN5(&VAR5, "", VAR7->VAR40, VAR7->VAR41, VAR31);
            if (VAR1)
                snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
            if (VAR44)
            {
                int VAR45;
                int VAR46 = FUN6(VAR31);
                if (VAR46 >= 0 && VAR46 < FUN7(VAR20))
                    VAR20[VAR46]++;
                for (VAR45 = 0; VAR45 < 32; VAR45++)
                    snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", (int)FUN6(FUN8(VAR20[VAR45] + 1)));
            }
            if ((VAR12->VAR47 & VAR48) && (VAR12->VAR35 || VAR1))
            {
                int VAR45;
                double VAR49, VAR50 = 0;
                double VAR51, VAR52 = 0;
                double VAR53;
                char VAR54[3] = {'', '', ''};
                snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
                for (VAR45 = 0; VAR45 < 3; VAR45++)
                {
                    if (VAR1)
                    {
                        VAR49 = VAR12->VAR49[VAR45];
                        VAR51 = VAR12->VAR55 * VAR12->VAR56 * 255.0 * 255.0 * VAR13;
                    }
                    else
                    {
                        VAR49 = VAR12->VAR35->VAR49[VAR45];
                        VAR51 = VAR12->VAR55 * VAR12->VAR56 * 255.0 * 255.0;
                    }
                    if (VAR45)
                        VAR51 /= 4;
                    VAR50 += VAR49;
                    VAR52 += VAR51;
                    VAR53 = FUN9(VAR49 / VAR51);
                    snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR54[VAR45], VAR53);
                    FUN5(&VAR5, "", VAR7->VAR40, VAR7->VAR41, VAR54[VAR45] | 32, VAR53);
                }
                VAR53 = FUN9(VAR50 / VAR52);
                snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", FUN9(VAR50 / VAR52));
                FUN5(&VAR5, "", VAR7->VAR40, VAR7->VAR41, VAR53);
            }
            VAR14 = 1;
        }
        if (FUN10(VAR7->VAR57) != VAR58)
            VAR17 = FUN11(VAR17, FUN12(FUN10(VAR7->VAR57), VAR7->VAR57->VAR59, VAR60));
        if (VAR1)
            VAR61 += VAR7->VAR62;
    }
    VAR23 = FUN13(VAR17) / VAR63;
    VAR24 = FUN13(VAR17) % VAR63;
    VAR22 = VAR23 / 60;
    VAR23 %= 60;
    VAR21 = VAR22 / 60;
    VAR22 %= 60;
    VAR16 = VAR17 && VAR10 >= 0 ? VAR10 * 8 / (VAR17 / 1000.0) : -1;
    if (VAR10 < 0)
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
    else
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR10 / 1024.0);
    if (VAR17 < 0)
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
    snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR21, VAR22, VAR23, (100 * VAR24) / VAR63);
    if (VAR16 < 0)
    {
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
        FUN5(&VAR5, "");
    }
    else
    {
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR16);
        FUN5(&VAR5, "", VAR16);
    }
    if (VAR10 < 0)
        FUN5(&VAR5, "");
    else
        FUN5(&VAR5, "" VAR64 "", VAR10);
    FUN5(&VAR5, "" VAR64 "", VAR17);
    FUN5(&VAR5, "", VAR21, VAR22, VAR23, VAR24);
    if (VAR65 || VAR61)
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR65, VAR61);
    FUN5(&VAR5, "", VAR65);
    FUN5(&VAR5, "", VAR61);
    if (VAR25 || VAR1)
    {
        const char VAR66 = VAR1 ? '' : '';
        if (VAR25 == 1 && VAR67 > FUN14())
        {
            fprintf(VAR68, "", VAR4, VAR66);
        }
        else
            FUN15(NULL, VAR67, "", VAR4, VAR66);
        FUN16(VAR68);
    }
    if (VAR26)
    {
        FUN5(&VAR5, "", VAR1 ? "" : "");
        FUN17(VAR26, VAR5.VAR69, FUN18(VAR5.VAR70, VAR5.VAR71 - 1));
        FUN19(VAR26);
        FUN20(&VAR5, NULL);
        if (VAR1)
        {
            FUN21(&VAR26);
        }
    }
    if (VAR1)
        FUN22(VAR10);
}