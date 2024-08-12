static void FUN1(int *VAR1, int *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6 = VAR3 < 0 ? -1 : 1;
    int VAR7 = FUN2(VAR3);
    unsigned int VAR8;
    int VAR9, VAR10, VAR11 = VAR12[VAR7 & 3];
    VAR7 = VAR4 - (VAR7 >> 2);
    if (VAR7 > 31)
    {
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            VAR1[VAR9] = 0;
        }
    }
    else if (VAR7 > 0)
    {
        VAR8 = 1 << (VAR7 - 1);
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            VAR10 = (int)(((VAR13)VAR2[VAR9] * VAR11) >> 32);
            VAR1[VAR9] = ((int)(VAR10 + VAR8) >> VAR7) * VAR6;
        }
    }
    else
    {
        VAR7 = VAR7 + 32;
        VAR8 = 1U << (VAR7 - 1);
        for (VAR9 = 0; VAR9 < VAR5; VAR9++)
        {
            VAR10 = (int)((VAR13)((VAR13)VAR2[VAR9] * VAR11 + VAR8) >> VAR7);
            VAR1[VAR9] = VAR10 * VAR6;
        }
    }
}