static int FUN1(const char *VAR1, VAR2 *VAR3, const char *VAR4, VAR5 **VAR6)
{
    int VAR7;
    char VAR8[11];
    char VAR9[11];
    char VAR10[512];
    const char *VAR11 = VAR1;
    int64_t VAR12 = 0;
    int64_t VAR13;
    char VAR14[VAR15];
    VAR2 *VAR16;
    VAR17 *VAR18 = VAR3->VAR19;
    VAR20 *VAR21;
    while (*VAR11)
    {
        VAR13 = -1;
        VAR7 = sscanf(VAR11, "" VAR22 ""%511[^\VAR23\VAR24\"" %" VAR22, VAR8, &VAR12, VAR9, VAR10, &VAR13);
        if (VAR7 < 4 || strcmp(VAR8, ""))
        {
            goto VAR25;
        }
        else if (!strcmp(VAR9, ""))
        {
            if (VAR7 != 5 || VAR13 < 0)
            {
                FUN2(VAR6, "", VAR11);
                return -VAR26;
            }
        }
        else if (!strcmp(VAR9, ""))
        {
            if (VAR7 == 4)
            {
                VAR13 = 0;
            }
            else
            {
                FUN2(VAR6, "", VAR11);
                return -VAR26;
            }
        }
        else if (VAR7 != 4)
        {
            FUN2(VAR6, "", VAR11);
            return -VAR26;
        }
        if (VAR12 <= 0 || (strcmp(VAR9, "") && strcmp(VAR9, "") && strcmp(VAR9, "") && strcmp(VAR9, "")) || (strcmp(VAR8, "")))
        {
            goto VAR25;
        }
        FUN3(VAR14, sizeof(VAR14), VAR4, VAR10);
        VAR16 = NULL;
        VAR7 = FUN4(&VAR16, VAR14, NULL, NULL, VAR3->VAR27 | VAR28, NULL, VAR6);
        if (VAR7)
        {
            return VAR7;
        }
        if (!strcmp(VAR9, "") || !strcmp(VAR9, ""))
        {
            VAR7 = FUN5(VAR3, VAR16, true, VAR12, 0, 0, 0, 0, 0, &VAR21, VAR6);
            if (VAR7 < 0)
            {
                return VAR7;
            }
            VAR21->VAR29 = VAR13 << 9;
        }
        else if (!strcmp(VAR9, "") || !strcmp(VAR9, ""))
        {
            char *VAR30 = FUN6(VAR16, 0, VAR6);
            if (!VAR30)
            {
                VAR7 = -VAR26;
            }
            else
            {
                VAR7 = FUN7(VAR3, VAR16, VAR3->VAR27, VAR30, VAR6);
            }
            if (VAR7)
            {
                FUN8(VAR30);
                return VAR7;
            }
            VAR21 = &VAR18->VAR31[VAR18->VAR32 - 1];
        }
        else
        {
            FUN2(VAR6, "", VAR9);
            return -VAR33;
        }
        VAR21->VAR9 = FUN9(VAR9);
    VAR25:
        while (*VAR11)
        {
            if (*VAR11 == '')
            {
                VAR11++;
                break;
            }
            VAR11++;
        }
    }
    return 0;