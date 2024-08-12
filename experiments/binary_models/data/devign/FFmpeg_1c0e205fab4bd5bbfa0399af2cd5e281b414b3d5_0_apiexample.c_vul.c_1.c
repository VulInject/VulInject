void FUN1(const char *VAR1, const char *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6 = NULL;
    int VAR7, VAR8, VAR9;
    VAR10 *VAR11, *VAR12;
    VAR13 *VAR14;
    uint8_t VAR15[VAR16 + VAR17], *VAR18;
    FUN2("");
    memset(VAR15 + VAR16, 0, VAR17);
    VAR4 = FUN3(VAR19);
    if (!VAR4)
    {
        fprintf(VAR20, "");
        FUN4(1);
    }
    VAR6 = FUN5();
    if (FUN6(VAR6, VAR4) < 0)
    {
        fprintf(VAR20, "");
        FUN4(1);
    }
    VAR14 = malloc(VAR21);
    VAR11 = fopen(VAR2, "");
    if (!VAR11)
    {
        fprintf(VAR20, "", VAR2);
        FUN4(1);
    }
    VAR12 = fopen(VAR1, "");
    if (!VAR12)
    {
        free(VAR6);
        FUN4(1);
    }
    VAR18 = VAR15;
    for (;;)
    {
        VAR8 = fread(VAR15, 1, VAR16, VAR11);
        if (VAR8 == 0)
            break;
        VAR18 = VAR15;
        while (VAR8 > 0)
        {
            VAR9 = FUN7(VAR6, (short *)VAR14, &VAR7, VAR18, VAR8);
            if (VAR9 < 0)
            {
                fprintf(VAR20, "");
                FUN4(1);
            }
            if (VAR7 > 0)
            {
                fwrite(VAR14, 1, VAR7, VAR12);
            }
            VAR8 -= VAR9;
            VAR18 += VAR9;
        }
    }
    fclose(VAR12);
    fclose(VAR11);
    free(VAR14);
    FUN8(VAR6);
    free(VAR6);
}