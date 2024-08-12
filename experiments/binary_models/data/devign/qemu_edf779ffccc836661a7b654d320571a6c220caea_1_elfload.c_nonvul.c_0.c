static unsigned long FUN1(int argc, char **argv, unsigned long *VAR1, unsigned long VAR2)
{
    char *VAR3, *VAR4, *VAR5 = NULL;
    int VAR6, VAR7 = 0;
    if (!VAR2)
    {
        return 0;
    }
    while (argc-- > 0)
    {
        VAR3 = argv[argc];
        if (!VAR3)
        {
            fprintf(VAR8, "");
            FUN2(-1);
        }
        VAR4 = VAR3;
        while (*VAR3++)
            ;
        VAR6 = VAR3 - VAR4;
        if (VAR2 < VAR6)
        {
            return 0;
        }
        while (VAR6)
        {
            --VAR2;
            --VAR3;
            --VAR6;
            if (--VAR7 < 0)
            {
                VAR7 = VAR2 % VAR9;
                VAR5 = (char *)VAR1[VAR2 / VAR9];
                if (!VAR5)
                {
                    VAR5 = (char *)FUN3();
                    VAR1[VAR2 / VAR9] = (unsigned long)VAR5;
                    if (!VAR5)
                        return 0;
                }
            }
            if (VAR6 == 0 || VAR7 == 0)
            {
                *(VAR5 + VAR7) = *VAR3;
            }
            else
            {
                int VAR10 = (VAR6 > VAR7) ? VAR7 : VAR6;
                VAR3 -= VAR10;
                VAR2 -= VAR10;
                VAR7 -= VAR10;
                VAR6 -= VAR10;
                FUN4(VAR5 + VAR7, VAR3, VAR10 + 1);
            }
        }
    }
    return VAR2;
}