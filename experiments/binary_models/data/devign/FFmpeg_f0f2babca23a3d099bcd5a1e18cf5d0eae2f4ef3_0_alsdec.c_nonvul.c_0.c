static void FUN1(unsigned int VAR1, unsigned int VAR2, const unsigned int *VAR3, VAR4 *VAR5)
{
    unsigned int VAR6 = 0;
    while (VAR1 < VAR2)
        VAR6 += VAR3[VAR1++];
    if (VAR6)
        memset(VAR5, 0, sizeof(*VAR5) * VAR6);
}