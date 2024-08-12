void FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    uint8_t VAR15[VAR16 + VAR17], *VAR18;
    char VAR19[1024];
    memset(VAR15 + VAR16, 0, VAR17);
    FUN2("");
    VAR4 = FUN3(VAR20);
    if (!VAR4)
    {
        fprintf(VAR21, "");
        FUN4(1);
    }
    VAR6 = FUN5();
    VAR14 = FUN6();
    if (VAR4->VAR22 & VAR23)
        VAR6->VAR24 |= VAR25;
    if (FUN7(VAR6, VAR4) < 0)
    {
        fprintf(VAR21, "");
        FUN4(1);
    }
    VAR12 = fopen(VAR2, "");
    if (!VAR12)
    {
        fprintf(VAR21, "", VAR2);
        FUN4(1);
    }
    VAR7 = 0;
    for (;;)
    {
        VAR8 = fread(VAR15, 1, VAR16, VAR12);
        if (VAR8 == 0)
            break;
        VAR18 = VAR15;
        while (VAR8 > 0)
        {
            VAR10 = FUN8(VAR6, VAR14, &VAR9, VAR18, VAR8);
            if (VAR10 < 0)
            {
                fprintf(VAR21, "", VAR7);
                FUN4(1);
            }
            if (VAR9)
            {
                FUN2("", VAR7);
                FUN9(VAR26);
                snprintf(VAR19, sizeof(VAR19), VAR1, VAR7);
                FUN10(VAR14->VAR27[0], VAR14->VAR28[0], VAR6->VAR29, VAR6->VAR30, VAR19);
                VAR7++;
            }
            VAR8 -= VAR10;
            VAR18 += VAR10;
        }
    }
    VAR10 = FUN8(VAR6, VAR14, &VAR9, NULL, 0);
    if (VAR9)
    {
        FUN2("", VAR7);
        FUN9(VAR26);
        snprintf(VAR19, sizeof(VAR19), VAR1, VAR7);
        FUN10(VAR14->VAR27[0], VAR14->VAR28[0], VAR6->VAR29, VAR6->VAR30, VAR19);
        VAR7++;
    }
    fclose(VAR12);
    FUN11(VAR6);
    free(VAR6);
    free(VAR14);
    FUN2("");
}