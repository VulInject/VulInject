void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    if (!VAR2->VAR7 && VAR2->VAR8 == 0 && VAR2->VAR9 > 0)
    {
        fprintf(VAR10, "");
        FUN2();
    }
    while (!VAR2->VAR7 && VAR5 > 0)
    {
        VAR6 = VAR11 - VAR2->VAR9;
        if (VAR6 > VAR5)
            VAR6 = VAR5;
        memcpy(VAR2->VAR4 + VAR2->VAR9, VAR4, VAR6);
        VAR2->VAR8 = 1;
        VAR2->VAR9 += VAR6;
        VAR4 += VAR6;
        VAR5 -= VAR6;
        if (VAR2->VAR9 >= VAR11)
            FUN3(VAR2);
    }
}