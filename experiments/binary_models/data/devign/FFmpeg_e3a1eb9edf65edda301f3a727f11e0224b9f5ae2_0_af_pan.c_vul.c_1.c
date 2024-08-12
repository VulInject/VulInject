static int FUN1(char **VAR1, int *VAR2, int *VAR3)
{
    char VAR4[8];
    int VAR5, VAR6, VAR7 = 0;
    int64_t VAR8, VAR9;
    if (sscanf(*VAR1, "", VAR4, &VAR5))
    {
        VAR9 = VAR8 = FUN2(VAR4);
        for (VAR6 = 32; VAR6 > 0; VAR6 >>= 1)
        {
            if (VAR8 >= (VAR10)1 << VAR6)
            {
                VAR7 += VAR6;
                VAR8 >>= VAR6;
            }
        }
        if (VAR7 >= VAR11 || VAR9 != (VAR10)1 << VAR7)
            return FUN3(VAR12);
        *VAR2 = VAR7;
        *VAR3 = 1;
        *VAR1 += VAR5;
        return 0;
    }
    if (sscanf(*VAR1, "", &VAR7, &VAR5) && VAR7 >= 0 && VAR7 < VAR11)
    {
        *VAR2 = VAR7;
        *VAR3 = 0;
        *VAR1 += VAR5;
        return 0;
    }
    return FUN3(VAR12);
}