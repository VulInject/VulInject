static void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, int VAR5)
{
    long VAR6;
    for (VAR6 = 0; VAR6 <= VAR5 - sizeof(long); VAR6 += sizeof(long))
    {
        long VAR7 = *(long *)(VAR3 + VAR6);
        long VAR8 = *(long *)(VAR4 + VAR6);
        *(long *)(VAR2 + VAR6) = ((VAR7 & VAR9) + (VAR8 & VAR9)) ^ ((VAR7 ^ VAR8) & VAR10);
    }
    for (; VAR6 < VAR5; VAR6++)
        VAR2[VAR6] = VAR3[VAR6] + VAR4[VAR6];
}