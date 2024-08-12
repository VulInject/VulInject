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
    double VAR17;
    int64_t VAR18 = VAR19 + 1;
    static int64_t VAR20 = -1;
    static int VAR21[52];
    int VAR22, VAR23, VAR24, VAR25;
    float VAR26;
    if (!VAR27 && !VAR1 && !VAR28)
        return;
    if (!VAR1)
    {
        if (VAR20 == -1)
        {
            VAR20 = VAR3;
            return;
        }
        if ((VAR3 - VAR20) < 500000)
            return;
        VAR20 = VAR3;
    }
    VAR26 = (VAR3 - VAR2) / 1000000.0;
    VAR9 = VAR29[0]->VAR30;
    VAR10 = FUN2(VAR9->VAR31);
    if (VAR10 <= 0)
        VAR10 = FUN3(VAR9->VAR31);
    VAR4[0] = '';
    VAR14 = 0;
    FUN4(&VAR5, 0, 1);
    for (VAR15 = 0; VAR15 < VAR32; VAR15++)
    {
        float VAR33 = -1;
        VAR7 = VAR34[VAR15];
        VAR12 = VAR7->VAR35;
        if (!VAR7->VAR36)
            VAR33 = VAR7->VAR37 / (float)VAR38;
        if (VAR14 && VAR12->VAR39 == VAR40)
        {
            snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR33);
            FUN5(&VAR5, "", VAR7->VAR41, VAR7->VAR42, VAR33);
        }
        if (!VAR14 && VAR12->VAR39 == VAR40)
        {
            float VAR43;
            VAR13 = VAR7->VAR13;
            VAR43 = VAR26 > 1 ? VAR13 / VAR26 : 0;
            snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR13, VAR43 < 9.95, VAR43, VAR33);
            FUN5(&VAR5, "", VAR13);
            FUN5(&VAR5, "", VAR43);
            FUN5(&VAR5, "", VAR7->VAR41, VAR7->VAR42, VAR33);
            if (VAR1)
                snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
            if (VAR44)
            {
                int VAR45;
                int VAR46 = FUN6(VAR33);
                if (VAR46 >= 0 && VAR46 < FUN7(VAR21))
                    VAR21[VAR46]++;
                for (VAR45 = 0; VAR45 < 32; VAR45++)
                    snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", (int)FUN6(FUN8(VAR21[VAR45] + 1)));
            }
            if ((VAR12->VAR47 & VAR48) && (VAR7->VAR49 != VAR50 || VAR1))
            {
                int VAR45;
                double VAR51, VAR52 = 0;
                double VAR53, VAR54 = 0;
                double VAR55;
                char VAR56[3] = {'', '', ''};
                snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
                for (VAR45 = 0; VAR45 < 3; VAR45++)
                {
                    if (VAR1)
                    {
                        VAR51 = VAR12->VAR51[VAR45];
                        VAR53 = VAR12->VAR57 * VAR12->VAR58 * 255.0 * 255.0 * VAR13;
                    }
                    else
                    {
                        VAR51 = VAR7->VAR51[VAR45];
                        VAR53 = VAR12->VAR57 * VAR12->VAR58 * 255.0 * 255.0;
                    }
                    if (VAR45)
                        VAR53 /= 4;
                    VAR52 += VAR51;
                    VAR54 += VAR53;
                    VAR55 = FUN9(VAR51 / VAR53);
                    snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR56[VAR45], VAR55);
                    FUN5(&VAR5, "", VAR7->VAR41, VAR7->VAR42, VAR56[VAR45] | 32, VAR55);
                }
                VAR55 = FUN9(VAR52 / VAR54);
                snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", FUN9(VAR52 / VAR54));
                FUN5(&VAR5, "", VAR7->VAR41, VAR7->VAR42, VAR55);
            }
            VAR14 = 1;
        }
        if (FUN10(VAR7->VAR59) != VAR60)
            VAR18 = FUN11(VAR18, FUN12(FUN10(VAR7->VAR59), VAR7->VAR59->VAR61, VAR62));
        if (VAR1)
            VAR63 += VAR7->VAR64;
    }
    VAR24 = FUN13(VAR18) / VAR65;
    VAR25 = FUN13(VAR18) % VAR65;
    VAR23 = VAR24 / 60;
    VAR24 %= 60;
    VAR22 = VAR23 / 60;
    VAR23 %= 60;
    VAR16 = VAR18 && VAR10 >= 0 ? VAR10 * 8 / (VAR18 / 1000.0) : -1;
    VAR17 = VAR26 != 0.0 ? (double)VAR18 / VAR65 / VAR26 : -1;
    if (VAR10 < 0)
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
    else
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR10 / 1024.0);
    if (VAR18 < 0)
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
    snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR22, VAR23, VAR24, (100 * VAR25) / VAR65);
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
        FUN5(&VAR5, "" VAR66 "", VAR10);
    FUN5(&VAR5, "" VAR66 "", VAR18);
    FUN5(&VAR5, "", VAR22, VAR23, VAR24, VAR25);
    if (VAR67 || VAR63)
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR67, VAR63);
    FUN5(&VAR5, "", VAR67);
    FUN5(&VAR5, "", VAR63);
    if (VAR17 < 0)
    {
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "");
        FUN5(&VAR5, "");
    }
    else
    {
        snprintf(VAR4 + strlen(VAR4), sizeof(VAR4) - strlen(VAR4), "", VAR17);
        FUN5(&VAR5, "", VAR17);
    }
    if (VAR27 || VAR1)
    {
        const char VAR68 = VAR1 ? '' : '';
        if (VAR27 == 1 && VAR69 > FUN14())
        {
            fprintf(VAR70, "", VAR4, VAR68);
        }
        else
            FUN15(NULL, VAR69, "", VAR4, VAR68);
        FUN16(VAR70);
    }
    if (VAR28)
    {
        FUN5(&VAR5, "", VAR1 ? "" : "");
        FUN17(VAR28, VAR5.VAR71, FUN18(VAR5.VAR72, VAR5.VAR73 - 1));
        FUN19(VAR28);
        FUN20(&VAR5, NULL);
        if (VAR1)
        {
            FUN21(&VAR28);
        }
    }
    if (VAR1)
        FUN22(VAR10);
}