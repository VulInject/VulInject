static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
    {
        for (VAR7 = 0; VAR7 < VAR3; VAR7++)
        {
            VAR6[VAR2[VAR7]]++;
        }
        VAR2 += VAR3;
    }
}