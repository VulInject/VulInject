int FUN1(VAR1 *VAR2, int VAR3, const VAR4 **VAR5, int *VAR6)
{
    if (VAR2->VAR7)
    {
        FUN2(NULL, "", VAR2->VAR7, VAR2->VAR8, VAR3, VAR2->VAR9, VAR2->VAR10);
        FUN2(NULL, "", (*VAR5)[0], (*VAR5)[1], (*VAR5)[2], (*VAR5)[3]);
    }
    for (; VAR2->VAR7 > 0; VAR2->VAR7--)
    {
        VAR2->VAR11[VAR2->VAR9++] = VAR2->VAR11[VAR2->VAR10++];
    }
    if (!*VAR6 && VAR3 == VAR12)
    {
        VAR3 = 0;
    }
    VAR2->VAR13 = VAR2->VAR9;
    if (VAR3 == VAR12)
    {
        void *VAR14 = FUN3(VAR2->VAR11, &VAR2->VAR15, (*VAR6) + VAR2->VAR9 + VAR16);
        if (!VAR14)
            return FUN4(VAR17);
        VAR2->VAR11 = VAR14;
        memcpy(&VAR2->VAR11[VAR2->VAR9], *VAR5, *VAR6);
        VAR2->VAR9 += *VAR6;
        return -1;
    }
    *VAR6 = VAR2->VAR10 = VAR2->VAR9 + VAR3;
    if (VAR2->VAR9)
    {
        void *VAR14 = FUN3(VAR2->VAR11, &VAR2->VAR15, VAR3 + VAR2->VAR9 + VAR16);
        if (!VAR14)
            return FUN4(VAR17);
        VAR2->VAR11 = VAR14;
        memcpy(&VAR2->VAR11[VAR2->VAR9], *VAR5, VAR3 + VAR16);
        VAR2->VAR9 = 0;
        *VAR5 = VAR2->VAR11;
    }
    for (; VAR3 < 0; VAR3++)
    {
        VAR2->VAR8 = (VAR2->VAR8 << 8) | VAR2->VAR11[VAR2->VAR13 + VAR3];
        VAR2->VAR18 = (VAR2->VAR18 << 8) | VAR2->VAR11[VAR2->VAR13 + VAR3];
        VAR2->VAR7++;
    }
    if (VAR2->VAR7)
    {
        FUN2(NULL, "", VAR2->VAR7, VAR2->VAR8, VAR3, VAR2->VAR9, VAR2->VAR10);
        FUN2(NULL, "", (*VAR5)[0], (*VAR5)[1], (*VAR5)[2], (*VAR5)[3]);
    }
    return 0;