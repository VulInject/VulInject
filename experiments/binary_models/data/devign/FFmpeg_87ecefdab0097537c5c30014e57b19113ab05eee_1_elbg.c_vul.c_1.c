static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        if (VAR2->VAR5 * VAR2->VAR6[VAR3] > VAR2->VAR7)
            VAR4 += VAR2->VAR6[VAR3];
        VAR2->VAR8[VAR3] = VAR4;
    }
}