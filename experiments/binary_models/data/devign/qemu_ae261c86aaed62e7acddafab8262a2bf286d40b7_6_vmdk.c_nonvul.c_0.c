static int FUN1(const VAR1 *VAR2, int VAR3, const char *VAR4)
{
    uint32_t VAR5;
    if (VAR3 < 4)
    {
        return 0;
    }
    VAR5 = FUN2(*(VAR6 *)VAR2);
    if (VAR5 == VAR7 || VAR5 == VAR8)
    {
        return 100;
    }
    else
    {
        const char *VAR9 = (const char *)VAR2;
        const char *VAR10 = VAR9 + VAR3;
        while (VAR9 < VAR10)
        {
            if (*VAR9 == '')
            {
                while (VAR9 < VAR10 && *VAR9 != '')
                {
                    VAR9++;
                }
                VAR9++;
                continue;
            }
            if (*VAR9 == '')
            {
                while (VAR9 < VAR10 && *VAR9 == '')
                {
                    VAR9++;
                }
                if (VAR9 < VAR10 && *VAR9 == '')
                {
                    VAR9++;
                }
                if (VAR9 == VAR10 || *VAR9 != '')
                {
                    return 0;
                }
                VAR9++;
                continue;
            }
            if (VAR10 - VAR9 >= strlen(""))
            {
                if (FUN3("", VAR9, strlen("")) == 0 || FUN3("", VAR9, strlen("")) == 0)
                {
                    return 100;
                }
            }
            if (VAR10 - VAR9 >= strlen(""))
            {
                if (FUN3("", VAR9, strlen("")) == 0 || FUN3("", VAR9, strlen("")) == 0)
                {
                    return 100;
                }
            }
            return 0;
        }
        return 0;
    }
}