FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8;
    int VAR9 = 19 - VAR7;
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        int VAR10 = VAR2[VAR8] + (1 << (VAR9 - 1));
        FUN2(&VAR4[VAR8], VAR10, 0, VAR11);
    }
}