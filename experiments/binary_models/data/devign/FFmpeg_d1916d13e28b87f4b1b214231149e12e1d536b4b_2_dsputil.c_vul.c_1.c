static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    long VAR5;
    for (VAR5 = 0; VAR5 <= VAR4 - sizeof(long); VAR5 += sizeof(long))
    {
        long VAR6 = *(long *)(VAR3 + VAR5);
        long VAR7 = *(long *)(VAR2 + VAR5);
        *(long *)(VAR2 + VAR5) = ((VAR6 & VAR8) + (VAR7 & VAR8)) ^ ((VAR6 ^ VAR7) & VAR9);
    }
    for (; VAR5 < VAR4; VAR5++)
        VAR2[VAR5 + 0] += VAR3[VAR5 + 0];
}