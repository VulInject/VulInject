static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (VAR3 < 0)
        for (VAR5 = 0; VAR5 < VAR4; VAR5++)
            VAR2[VAR5] = VAR2[VAR5] >> -VAR3;
    else
        for (VAR5 = 0; VAR5 < VAR4; VAR5++)
            VAR2[VAR5] = VAR2[VAR5] << VAR3;
}