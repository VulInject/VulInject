static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = FUN2((VAR5 *)VAR1);
    VAR6 *VAR7 = VAR4->VAR8;
    VAR9 *VAR10;
    char *VAR11 = NULL;
    size_t VAR12 = 0;
    ssize_t read;
    VAR10 = fopen("", "");
    if (VAR10 == NULL)
    {
        return -VAR13;
    }
    while ((read = FUN3(&VAR11, &VAR12, VAR10)) != -1)
    {
        int VAR14, VAR15, VAR16, VAR17;
        uint64_t VAR18, VAR19, VAR20;
        char VAR21, VAR22, VAR23, VAR24;
        char VAR25[512] = "";
        VAR14 = sscanf(VAR11, "" VAR26 "" VAR26 "" VAR26 ""
                              "",
                        &VAR18, &VAR19, &VAR21, &VAR22, &VAR23, &VAR24, &VAR20, &VAR15, &VAR16, &VAR17, VAR25);
        if ((VAR14 < 10) || (VAR14 > 11))
        {
            continue;
        }
        if (FUN4(VAR18))
        {
            int VAR27 = FUN5(FUN6(VAR18));
            VAR19 = FUN4(VAR19 - 1) ? VAR19 : (VAR28)FUN7(VAR29);
            if (FUN8(FUN6(VAR18), VAR19 - VAR18, VAR27) == -1)
            {
                continue;
            }
            if (FUN6(VAR18) == VAR7->VAR30->VAR31)
            {
                FUN9(VAR25, sizeof(VAR25), "");
            }
            FUN10(VAR2, VAR32 "" VAR32 "" VAR26 "", FUN6(VAR18), FUN6(VAR19 - 1) + 1, VAR21, VAR22, VAR23, VAR24, VAR20, VAR15, VAR16, VAR17, VAR25[0] ? "" : "", VAR25);
        }
    }
    free(VAR11);
    fclose(VAR10);
    return 0;
}