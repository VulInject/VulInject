int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    const VAR3 *VAR6 = VAR4;
    const VAR3 *VAR7 = VAR6 + VAR5;
    const VAR3 *VAR8, *VAR9;
    VAR5 = 0;
    VAR8 = FUN2(VAR6, VAR7);
    for (;;)
    {
        while (VAR8 < VAR7 && !*(VAR8++))
            ;
        if (VAR8 == VAR7)
            break;
        VAR9 = FUN2(VAR8, VAR7);
        FUN3(VAR2, VAR9 - VAR8);
        FUN4(VAR2, VAR8, VAR9 - VAR8);
        VAR5 += 4 + VAR9 - VAR8;
        VAR8 = VAR9;
    }
    return VAR5;
}