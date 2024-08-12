static void FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4, int VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR4; VAR6++, VAR2 += VAR5, VAR3 += VAR5)
        memcpy(VAR2, VAR3, VAR4 * sizeof(VAR2[0]));
}