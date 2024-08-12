static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    int VAR9;
    if (VAR4 < 0)
    {
        VAR3 -= VAR5 - 1;
    }
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR8 = VAR3;
        VAR9 = ((VAR8 + VAR5 - 1) & VAR2->VAR10) + 1;
        assert(VAR9 >= VAR8);
        FUN2(&VAR2->VAR11.VAR12, VAR8, VAR9 - VAR8);
        VAR3 += VAR4;
    }
}