static void FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    uint8_t VAR14[VAR15 + VAR16];
    char VAR17[1024];
    AVPacket VAR18;
    FUN2(&VAR18);
    memset(VAR14 + VAR15, 0, VAR16);
    FUN3("", VAR2);
    VAR4 = FUN4(VAR19);
    if (!VAR4)
    {
        fprintf(VAR20, "");
        FUN5(1);
    }
    VAR6 = FUN6(VAR4);
    VAR13 = FUN7();
    if (VAR4->VAR21 & VAR22)
        VAR6->VAR23 |= VAR24;
    if (FUN8(VAR6, VAR4, NULL) < 0)
    {
        fprintf(VAR20, "");
        FUN5(1);
    }
    VAR11 = fopen(VAR2, "");
    if (!VAR11)
    {
        fprintf(VAR20, "", VAR2);
        FUN5(1);
    }
    VAR7 = 0;
    for (;;)
    {
        VAR18.VAR25 = fread(VAR14, 1, VAR15, VAR11);
        if (VAR18.VAR25 == 0)
            break;
        VAR18.VAR26 = VAR14;
        while (VAR18.VAR25 > 0)
        {
            VAR9 = FUN9(VAR6, VAR13, &VAR8, &VAR18);
            if (VAR9 < 0)
            {
                fprintf(VAR20, "", VAR7);
                FUN5(1);
            }
            if (VAR8)
            {
                FUN3("", VAR7);
                FUN10(VAR27);
                snprintf(VAR17, sizeof(VAR17), VAR1, VAR7);
                FUN11(VAR13->VAR26[0], VAR13->VAR28[0], VAR6->VAR29, VAR6->VAR30, VAR17);
                VAR7++;
            }
            VAR18.VAR25 -= VAR9;
            VAR18.VAR26 += VAR9;
        }
    }
    VAR18.VAR26 = NULL;
    VAR18.VAR25 = 0;
    VAR9 = FUN9(VAR6, VAR13, &VAR8, &VAR18);
    if (VAR8)
    {
        FUN3("", VAR7);
        FUN10(VAR27);
        snprintf(VAR17, sizeof(VAR17), VAR1, VAR7);
        FUN11(VAR13->VAR26[0], VAR13->VAR28[0], VAR6->VAR29, VAR6->VAR30, VAR17);
        VAR7++;
    }
    fclose(VAR11);
    FUN12(VAR6);
    FUN13(VAR6);
    FUN13(VAR13);
    FUN3("");
}