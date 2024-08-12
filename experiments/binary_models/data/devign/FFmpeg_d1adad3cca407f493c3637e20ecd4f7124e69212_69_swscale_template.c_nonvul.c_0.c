static void FUN1(VAR1)(VAR2 *VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        VAR3[VAR5] = (VAR3[VAR5] * 1799 + 4081085) >> 11;
        VAR3[VAR5 + VAR6] = (VAR3[VAR5 + VAR6] * 1799 + 4081085) >> 11;
    }
}