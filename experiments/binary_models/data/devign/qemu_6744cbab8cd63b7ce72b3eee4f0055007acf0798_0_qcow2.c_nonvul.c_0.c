static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    const char *VAR4 = NULL;
    const char *VAR5 = NULL;
    uint64_t VAR6 = 0;
    int VAR7 = 0;
    size_t VAR8 = VAR9;
    int VAR10 = 0;
    int VAR11 = 2;
    while (VAR3 && VAR3->VAR12)
    {
        if (!strcmp(VAR3->VAR12, VAR13))
        {
            VAR6 = VAR3->VAR14.VAR15 / 512;
        }
        else if (!strcmp(VAR3->VAR12, VAR16))
        {
            VAR4 = VAR3->VAR14.VAR17;
        }
        else if (!strcmp(VAR3->VAR12, VAR18))
        {
            VAR5 = VAR3->VAR14.VAR17;
        }
        else if (!strcmp(VAR3->VAR12, VAR19))
        {
            VAR7 |= VAR3->VAR14.VAR15 ? VAR20 : 0;
        }
        else if (!strcmp(VAR3->VAR12, VAR21))
        {
            if (VAR3->VAR14.VAR15)
            {
                VAR8 = VAR3->VAR14.VAR15;
            }
        }
        else if (!strcmp(VAR3->VAR12, VAR22))
        {
            if (!VAR3->VAR14.VAR17 || !strcmp(VAR3->VAR14.VAR17, ""))
            {
                VAR10 = 0;
            }
            else if (!strcmp(VAR3->VAR14.VAR17, ""))
            {
                VAR10 = 1;
            }
            else
            {
                fprintf(VAR23, "", VAR3->VAR14.VAR17);
                return -VAR24;
            }
        }
        else if (!strcmp(VAR3->VAR12, VAR25))
        {
            if (!VAR3->VAR14.VAR17 || !strcmp(VAR3->VAR14.VAR17, ""))
            {
                VAR11 = 2;
            }
            else if (!strcmp(VAR3->VAR14.VAR17, ""))
            {
                VAR11 = 3;
            }
            else
            {
                fprintf(VAR23, "", VAR3->VAR14.VAR17);
                return -VAR24;
            }
        }
        VAR3++;
    }
    if (VAR4 && VAR10)
    {
        fprintf(VAR23, ""
                        "");
        return -VAR24;
    }
    return FUN2(VAR1, VAR6, VAR4, VAR5, VAR7, VAR8, VAR10, VAR3, VAR11);
}