static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7;
    char VAR8[1024];
    char VAR9[1024];
    VAR1 *VAR10 = NULL;
    int VAR11 = 0;
    const char *VAR12;
    VAR7 = fopen(VAR3->VAR13, "");
    if (!VAR7)
    {
        FUN2(VAR3->VAR13);
        return NULL;
    }
    VAR10 = FUN3(sizeof(VAR1));
    while (fgets(VAR8, sizeof(VAR8), VAR7))
    {
        VAR11++;
        VAR12 = VAR8;
        while (FUN4(*VAR12))
            VAR12++;
        if (*VAR12 == '' || *VAR12 == '')
            continue;
        FUN5(VAR9, sizeof(VAR9), &VAR12);
        if (!FUN6(VAR9, ""))
            FUN7(NULL, NULL, VAR10, VAR12, VAR3->VAR13, VAR11);
    }
    fclose(VAR7);
    return VAR10;
}