static int FUN1(void *VAR1, const VAR2 *VAR3, const char *VAR4, void *VAR5)
{
    int VAR6 = 0, VAR7 = 0;
    for (;;)
    {
        int VAR8, VAR9 = 1;
        char VAR10[256];
        int VAR11 = 0;
        double VAR12, VAR13 = 1;
        int64_t VAR14 = 1;
        VAR8 = 0;
        if (*VAR4 == '' || *VAR4 == '')
        {
            if (VAR3->VAR15 == VAR16)
                VAR11 = *(VAR4++);
            else if (!VAR7)
                VAR10[VAR8++] = *VAR4;
        }
        for (; VAR8 < sizeof(VAR10) - 1 && VAR4[VAR8] && VAR4[VAR8] != '' && VAR4[VAR8] != ''; VAR8++)
            VAR10[VAR8] = VAR4[VAR8];
        VAR10[VAR8] = 0;
        {
            const VAR2 *VAR17 = FUN2(VAR1, VAR10, VAR3->VAR18, 0, 0);
            if (VAR17 && VAR17->VAR15 == VAR19)
                VAR12 = FUN3(VAR17);
            else if (!strcmp(VAR10, ""))
                VAR12 = FUN3(VAR3);
            else if (!strcmp(VAR10, ""))
                VAR12 = VAR3->VAR20;
            else if (!strcmp(VAR10, ""))
                VAR12 = VAR3->VAR21;
            else if (!strcmp(VAR10, ""))
                VAR12 = 0;
            else if (!strcmp(VAR10, ""))
                VAR12 = ~0;
            else
            {
                int VAR22 = FUN4(&VAR12, VAR10, VAR23, VAR24, NULL, NULL, NULL, NULL, NULL, 0, VAR1);
                if (VAR22 < 0)
                {
                    FUN5(VAR1, VAR25, ""%VAR26\"", VAR4);
                    return VAR22;
                }
            }
        }
        if (VAR3->VAR15 == VAR16)
        {
            FUN6(VAR3, VAR5, NULL, NULL, &VAR14);
            if (VAR11 == '')
                VAR12 = VAR14 | (VAR27)VAR12;
            else if (VAR11 == '')
                VAR12 = VAR14 & ~(VAR27)VAR12;
        }
        else
        {
            FUN6(VAR3, VAR5, &VAR13, &VAR9, &VAR14);
            if (VAR11 == '')
                VAR12 = VAR7 * VAR13 * VAR14 / VAR9 + VAR12;
            else if (VAR11 == '')
                VAR12 = VAR7 * VAR13 * VAR14 / VAR9 - VAR12;
        }
        if ((VAR6 = FUN7(VAR1, VAR3, VAR5, VAR12, 1, 1)) < 0)
            return VAR6;
        VAR4 += VAR8;
        if (!*VAR4)
            return 0;
        VAR7 = 1;
    }
    return 0;
}