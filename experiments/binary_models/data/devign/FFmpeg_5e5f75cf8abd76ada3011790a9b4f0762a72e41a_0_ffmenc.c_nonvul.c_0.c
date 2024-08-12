static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int64_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    if (VAR7 && VAR9->VAR12 == 0)
    {
        VAR9->VAR12 = VAR9->VAR13 - VAR9->VAR14 + VAR15;
        VAR9->VAR6 = VAR6;
    }
    while (VAR5 > 0)
    {
        VAR11 = VAR9->VAR16 - VAR9->VAR13;
        if (VAR11 > VAR5)
            VAR11 = VAR5;
        memcpy(VAR9->VAR13, VAR4, VAR11);
        VAR9->VAR13 += VAR11;
        VAR4 += VAR11;
        VAR5 -= VAR11;
        if (VAR9->VAR13 >= VAR9->VAR16)
            FUN2(VAR2);
    }
}