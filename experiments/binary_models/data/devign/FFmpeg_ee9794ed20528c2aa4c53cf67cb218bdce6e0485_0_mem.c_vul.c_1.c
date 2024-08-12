void FUN1(void *VAR1, int *VAR2, void *VAR3)
{
    int VAR4, VAR5;
    VAR6 *VAR7;
    VAR4 = *VAR2;
    VAR7 = *(VAR6 **)VAR1;
    if ((VAR4 & (VAR4 - 1)) == 0)
    {
        if (VAR4 == 0)
            VAR5 = 1;
        else
            VAR5 = VAR4 * 2;
        VAR7 = FUN2(VAR7, VAR5 * sizeof(VAR6));
        *(VAR6 **)VAR1 = VAR7;
    }
    VAR7[VAR4++] = (VAR6)VAR3;
    *VAR2 = VAR4;
}