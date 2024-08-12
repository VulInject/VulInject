static void FUN1(int *VAR1, int VAR2, int VAR3, int VAR4)
{
    int VAR5 = VAR2 < 0 ? -1 : 1;
    int VAR6 = FUN2(VAR2);
    unsigned int VAR7;
    int VAR8, VAR9, VAR10 = VAR11[VAR6 & 3];
    int VAR12 = 0;
    while (VAR3 > 0x7fff)
    {
        VAR3 >>= 1;
        VAR12++;
    }
    VAR10 /= VAR3;
    VAR6 = 21 + VAR12 - (VAR6 >> 2);
    if (VAR6 > 0)
    {
        VAR7 = 1 << (VAR6 - 1);
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
        {
            VAR9 = (int)(((VAR13)VAR1[VAR8] * VAR10) >> 32);
            VAR1[VAR8] = ((int)(VAR9 + VAR7) >> VAR6) * VAR5;
        }
    }
    else
    {
        VAR6 = VAR6 + 32;
        VAR7 = 1 << (VAR6 - 1);
        for (VAR8 = 0; VAR8 < VAR4; VAR8++)
        {
            VAR9 = (int)((VAR13)((VAR13)VAR1[VAR8] * VAR10 + VAR7) >> VAR6);
            VAR1[VAR8] = VAR9 * VAR5;
        }
    }
}