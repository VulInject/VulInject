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
    while (*VAR9)
    {
        VAR11 = -1;
        VAR5 = sscanf(VAR9, "" VAR15 ""%511[^\VAR16\VAR17\"" %" VAR15, VAR6, &VAR10, VAR7, VAR8, &VAR11);
        if (VAR5 < 4 || strcmp(VAR6, ""))
        {
            goto VAR18;
        }
        else if (!strcmp(VAR7, ""))
        {
            if (VAR5 != 5 || VAR11 < 0)
            {
                return -VAR19;
            }
        }
        else if (VAR5 != 4)
        {
            return -VAR19;
        }
        if (VAR10 <= 0 || (strcmp(VAR7, "") && strcmp(VAR7, "")) || (strcmp(VAR6, "")))
        {
            goto VAR18;
        }
        FUN2(VAR12, sizeof(VAR12), VAR4, VAR8);
        VAR5 = FUN3(&VAR14, VAR12, NULL, VAR3->VAR20);
        if (VAR5)
        {
            return VAR5;
        }
        if (!strcmp(VAR7, ""))
        {
            VAR21 *VAR22;
            VAR5 = FUN4(VAR3, VAR14, true, VAR10, 0, 0, 0, 0, VAR10, &VAR22);
            if (VAR5 < 0)
            {
                return VAR5;
            }
            VAR22->VAR23 = VAR11 << 9;
        }
        else if (!strcmp(VAR7, ""))
        {
            VAR5 = FUN5(VAR3, VAR14, VAR3->VAR20);
            if (VAR5)
            {
                FUN6(VAR14);
                return VAR5;
            }
        }
        else
        {
            fprintf(VAR24, ""%VAR25\""
                            "",
                    VAR7);
            return -VAR26;
        }
    VAR18:
        while (*VAR9 && *VAR9 != '')
        {
            VAR9++;
        }
        VAR9++;
    }
    return 0;
}