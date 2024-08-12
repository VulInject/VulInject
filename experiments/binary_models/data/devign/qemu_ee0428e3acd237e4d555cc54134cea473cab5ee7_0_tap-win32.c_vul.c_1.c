static int FUN1(char *VAR1, int VAR2, char *VAR3, int VAR4)
{
    LONG VAR5;
    HKEY VAR6;
    DWORD VAR7;
    int VAR8 = 0;
    int VAR9 = 0;
    VAR5 = FUN2(VAR10, VAR11, 0, VAR12, &VAR6);
    if (VAR5 != VAR13)
    {
        return -1;
    }
    while (!VAR9)
    {
        char VAR14[256];
        char VAR15[256];
        HKEY VAR16;
        char VAR17[256];
        DWORD VAR18;
        const char VAR19[] = "";
        VAR7 = sizeof(VAR14);
        VAR5 = FUN3(VAR6, VAR8, VAR14, &VAR7, NULL, NULL, NULL, NULL);
        if (VAR5 == VAR20)
            break;
        else if (VAR5 != VAR13)
        {
            return -1;
        }
        snprintf(VAR15, sizeof(VAR15), "", VAR11, VAR14);
        VAR5 = FUN2(VAR10, VAR15, 0, VAR12, &VAR16);
        if (VAR5 == VAR13)
        {
            VAR7 = sizeof(VAR17);
            VAR5 = RegQueryValueEx(VAR16, VAR19, NULL, &VAR18, (VAR21)VAR17, &VAR7);
            if (VAR5 != VAR13 || VAR18 != VAR22)
            {
                return -1;
            }
            else
            {
                if (FUN4(VAR14))
                {
                    snprintf(VAR1, VAR2, "", VAR14);
                    if (VAR3)
                    {
                        if (strcmp(VAR3, "") != 0)
                        {
                            if (strcmp(VAR17, VAR3) != 0)
                            {
                                FUN5(VAR16);
                                ++VAR8;
                                continue;
                            }
                        }
                        else
                        {
                            snprintf(VAR3, VAR4, "", VAR17);
                        }
                    }
                    VAR9 = 1;
                }
            }
            FUN5(VAR16);
        }
        ++VAR8;
    }
    FUN5(VAR6);
    if (VAR9 == 0)
        return -1;
    return 0;
}