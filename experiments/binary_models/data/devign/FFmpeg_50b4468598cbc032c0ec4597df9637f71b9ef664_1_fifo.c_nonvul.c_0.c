void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    do
    {
        int VAR6 = FUN2(VAR2->VAR7 - VAR2->VAR8, VAR5);
        memcpy(VAR2->VAR8, VAR4, VAR6);
        VAR2->VAR8 += VAR6;
        if (VAR2->VAR8 >= VAR2->VAR7)
            VAR2->VAR8 = VAR2->VAR9;
        VAR4 += VAR6;
        VAR5 -= VAR6;
    } while (VAR5 > 0);
}