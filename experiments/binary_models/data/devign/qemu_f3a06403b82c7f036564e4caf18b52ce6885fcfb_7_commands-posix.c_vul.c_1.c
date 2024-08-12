static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    char const *VAR7 = "";
    VAR8 *VAR9;
    char *VAR10 = NULL, *VAR11;
    size_t VAR12;
    char VAR13;
    unsigned int VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    VAR9 = fopen(VAR7, "");
    if (!VAR9)
    {
        FUN2(VAR2, VAR4);
        return;
    }
    while (FUN3(&VAR10, &VAR12, VAR9) != -1)
    {
        VAR16 = sscanf(VAR10, "", &VAR14, &VAR15, &VAR17, &VAR18, &VAR13);
        if (VAR16 < 3)
        {
            continue;
        }
        VAR11 = strstr(VAR10 + VAR18, "");
        if (!VAR11)
        {
            continue;
        }
        VAR16 = sscanf(VAR11, "", &VAR19, &VAR20, &VAR21, &VAR22, &VAR13);
        if (VAR16 < 1)
        {
            continue;
        }
        VAR10[VAR18] = 0;
        VAR11[VAR20] = 0;
        VAR11[VAR22] = 0;
        FUN4(VAR10 + VAR17, VAR18 - VAR17);
        FUN4(VAR11 + VAR21, VAR22 - VAR21);
        if (VAR14 == 0)
        {
            if (strcmp("", VAR11 + VAR19) != 0 || FUN5(VAR11 + VAR21, &VAR14, &VAR15) < 0)
            {
                continue;
            }
        }
        VAR6 = FUN6(sizeof(VAR5));
        VAR6->VAR23 = FUN7(VAR10 + VAR17);
        VAR6->VAR24 = FUN7(VAR11 + VAR19);
        VAR6->VAR14 = VAR14;
        VAR6->VAR15 = VAR15;
        FUN8(VAR2, VAR6, VAR25);
    }
    free(VAR10);
    fclose(VAR9);
}