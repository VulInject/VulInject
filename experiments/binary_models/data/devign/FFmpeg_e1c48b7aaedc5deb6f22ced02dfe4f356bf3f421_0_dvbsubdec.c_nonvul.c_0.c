static void FUN1(const char *VAR1, VAR2 *VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    char VAR11[40], VAR12[40];
    char VAR13[1024];
    snprintf(VAR11, sizeof(VAR11), "", VAR1);
    VAR10 = fopen(VAR11, "");
    if (!VAR10)
    {
        FUN2(VAR11);
        FUN3(1);
    }
    fprintf(VAR10, ""
               ""
               "",
            VAR4, VAR5, 255);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR4; VAR6++)
        {
            VAR8 = VAR3[VAR7 * VAR4 + VAR6];
            FUN4((VAR8 >> 16) & 0xff, VAR10);
            FUN4((VAR8 >> 8) & 0xff, VAR10);
            FUN4((VAR8 >> 0) & 0xff, VAR10);
        }
    }
    fclose(VAR10);
    snprintf(VAR12, sizeof(VAR12), "", VAR1);
    VAR10 = fopen(VAR12, "");
    if (!VAR10)
    {
        FUN2(VAR12);
        FUN3(1);
    }
    fprintf(VAR10, ""
               ""
               "",
            VAR4, VAR5, 255);
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR4; VAR6++)
        {
            VAR8 = VAR3[VAR7 * VAR4 + VAR6];
            FUN4((VAR8 >> 24) & 0xff, VAR10);
        }
    }
    fclose(VAR10);
    snprintf(VAR13, sizeof(VAR13), "", VAR12, VAR11, VAR1);
    system(VAR13);
    snprintf(VAR13, sizeof(VAR13), "", VAR11, VAR12);
    system(VAR13);
}