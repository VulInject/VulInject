static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    const char *VAR4 = NULL;
    const char *VAR5 = NULL;
    uint64_t VAR6 = 0;
    int VAR7 = 0;
    size_t VAR8 = 65536;
    int VAR9 = 0;
    while (VAR3 && VAR3->VAR10)
    {
        if (!strcmp(VAR3->VAR10, VAR11))
        {
            VAR6 = VAR3->VAR12.VAR13 / 512;
        }
        else if (!strcmp(VAR3->VAR10, VAR14))
        {
            VAR4 = VAR3->VAR12.VAR15;
        }
        else if (!strcmp(VAR3->VAR10, VAR16))
        {
            VAR5 = VAR3->VAR12.VAR15;
        }
        else if (!strcmp(VAR3->VAR10, VAR17))
        {
            VAR7 |= VAR3->VAR12.VAR13 ? VAR18 : 0;
        }
        else if (!strcmp(VAR3->VAR10, VAR19))
        {
            if (VAR3->VAR12.VAR13)
            {
                VAR8 = VAR3->VAR12.VAR13;
            }
        }
        else if (!strcmp(VAR3->VAR10, VAR20))
        {
            if (!VAR3->VAR12.VAR15 || !strcmp(VAR3->VAR12.VAR15, ""))
            {
                VAR9 = 0;
            }
            else if (!strcmp(VAR3->VAR12.VAR15, ""))
            {
                VAR9 = 1;
            }
            else
            {
                fprintf(VAR21, "", VAR3->VAR12.VAR15);
                return -VAR22;
            }
        }
        VAR3++;
    }
    if (VAR4 && VAR9)
    {
        fprintf(VAR21, ""
                        "");
        return -VAR22;
    }
    return FUN2(VAR1, VAR6, VAR4, VAR5, VAR7, VAR8, VAR9, VAR3);
}