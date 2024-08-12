static int FUN1(const char *VAR1, VAR2 *VAR3, const char *VAR4)
{
    int VAR5;
    char VAR6[11];
    char VAR7[11];
    char VAR8[512];
    const char *VAR9 = VAR1;
    int64_t VAR10 = 0;
    int64_t VAR11;
    char VAR12[VAR13];
    VAR2 *VAR14;
    VAR15 *VAR16 = NULL;
    while (*VAR9)
    {
        VAR11 = -1;
        VAR5 = sscanf(VAR9, "" VAR17 ""%511[^\VAR18\VAR19\"" %" VAR17, VAR6, &VAR10, VAR7, VAR8, &VAR11);
        if (VAR5 < 4 || strcmp(VAR6, ""))
        {
            goto VAR20;
        }
        else if (!strcmp(VAR7, ""))
        {
            if (VAR5 != 5 || VAR11 < 0)
            {
                return -VAR21;
            }
        }
        else if (VAR5 != 4)
        {
            return -VAR21;
        }
        if (VAR10 <= 0 || (strcmp(VAR7, "") && strcmp(VAR7, "") && strcmp(VAR7, "") && strcmp(VAR7, "")) || (strcmp(VAR6, "")))
        {
            goto VAR20;
        }
        FUN2(VAR12, sizeof(VAR12), VAR4, VAR8);
        VAR5 = FUN3(&VAR14, VAR12, NULL, VAR3->VAR22, &VAR16);
        if (VAR5)
        {
            FUN4(VAR16);
            FUN5(VAR16);
            return VAR5;
        }
        if (!strcmp(VAR7, "") || !strcmp(VAR7, ""))
        {
            VAR23 *VAR24;
            VAR5 = FUN6(VAR3, VAR14, true, VAR10, 0, 0, 0, 0, VAR10, &VAR24);
            if (VAR5 < 0)
            {
                return VAR5;
            }
            VAR24->VAR25 = VAR11 << 9;
        }
        else if (!strcmp(VAR7, "") || !strcmp(VAR7, ""))
        {
            VAR5 = FUN7(VAR3, VAR14, VAR3->VAR22);
            if (VAR5)
            {
                FUN8(VAR14);
                return VAR5;
            }
        }
        else
        {
            fprintf(VAR26, ""%VAR27\""
                            "",
                    VAR7);
            return -VAR28;
        }
    VAR20:
        while (*VAR9 && *VAR9 != '')
        {
            VAR9++;
        }
        VAR9++;
    }
    return 0;
}