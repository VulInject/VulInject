static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, int VAR5)
{
    long VAR6;
    if ((long)VAR4 & (sizeof(long) - 1))
    {
        for (VAR6 = 0; VAR6 + 7 < VAR5; VAR6 += 8)
        {
            VAR2[VAR6 + 0] = VAR3[VAR6 + 0] - VAR4[VAR6 + 0];
            VAR2[VAR6 + 1] = VAR3[VAR6 + 1] - VAR4[VAR6 + 1];
            VAR2[VAR6 + 2] = VAR3[VAR6 + 2] - VAR4[VAR6 + 2];
            VAR2[VAR6 + 3] = VAR3[VAR6 + 3] - VAR4[VAR6 + 3];
            VAR2[VAR6 + 4] = VAR3[VAR6 + 4] - VAR4[VAR6 + 4];
            VAR2[VAR6 + 5] = VAR3[VAR6 + 5] - VAR4[VAR6 + 5];
            VAR2[VAR6 + 6] = VAR3[VAR6 + 6] - VAR4[VAR6 + 6];
            VAR2[VAR6 + 7] = VAR3[VAR6 + 7] - VAR4[VAR6 + 7];
        }
    }
    else
        for (VAR6 = 0; VAR6 <= VAR5 - sizeof(long); VAR6 += sizeof(long))
        {
            long VAR7 = *(long *)(VAR3 + VAR6);
            long VAR8 = *(long *)(VAR4 + VAR6);
            *(long *)(VAR2 + VAR6) = ((VAR7 | VAR9) - (VAR8 & VAR10)) ^ ((VAR7 ^ VAR8 ^ VAR9) & VAR9);
        }
    for (; VAR6 < VAR5; VAR6++)
        VAR2[VAR6 + 0] = VAR3[VAR6 + 0] - VAR4[VAR6 + 0];
}