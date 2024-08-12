static VAR1 FUN1(int argc, char **argv, void **VAR2, abi_ulong VAR3)
{
    char *VAR4, *VAR5, *VAR6 = NULL;
    int VAR7, VAR8 = 0;
    if (!VAR3)
    {
        return 0;
    }
    while (argc-- > 0)
    {
        VAR4 = argv[argc];
        if (!VAR4)
        {
            fprintf(VAR9, "");
            FUN2(-1);
        }
        VAR5 = VAR4;
        while (*VAR4++)
            ;
        VAR7 = VAR4 - VAR5;
        if (VAR3 < VAR7)
        {
            return 0;
        }
        while (VAR7)
        {
            --VAR3;
            --VAR4;
            --VAR7;
            if (--VAR8 < 0)
            {
                VAR8 = VAR3 % VAR10;
                VAR6 = (char *)VAR2[VAR3 / VAR10];
                if (!VAR6)
                {
                    VAR6 = (char *)malloc(VAR10);
                    memset(VAR6, 0, VAR10);
                    VAR2[VAR3 / VAR10] = VAR6;
                    if (!VAR6)
                        return 0;
                }
            }
            if (VAR7 == 0 || VAR8 == 0)
            {
                *(VAR6 + VAR8) = *VAR4;
            }
            else
            {
                int VAR11 = (VAR7 > VAR8) ? VAR8 : VAR7;
                VAR4 -= VAR11;
                VAR3 -= VAR11;
                VAR8 -= VAR11;
                VAR7 -= VAR11;
                FUN3(VAR6 + VAR8, VAR4, VAR11 + 1);
            }
        }
    }
    return VAR3;
}