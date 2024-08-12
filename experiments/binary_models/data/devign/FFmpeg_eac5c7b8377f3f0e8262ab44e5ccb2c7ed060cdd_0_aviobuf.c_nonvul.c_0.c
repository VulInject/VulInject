int FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
    int VAR5 = 0;
    char VAR6;
    do
    {
        VAR6 = FUN2(VAR2);
        if (VAR6 && VAR5 < VAR4 - 1)
            VAR3[VAR5++] = VAR6;
    } while (VAR6 != '' && VAR6 != '' && VAR6);
    if (VAR6 == '' && FUN2(VAR2) != '' && !FUN3(VAR2))
        FUN4(VAR2, -1);
    VAR3[VAR5] = 0;
    return VAR5;
}