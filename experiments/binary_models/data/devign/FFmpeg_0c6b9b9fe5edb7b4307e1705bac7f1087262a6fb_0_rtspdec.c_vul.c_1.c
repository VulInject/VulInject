static inline int FUN1(VAR1 *VAR2, char *VAR3, const int VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = 0;
    int VAR10 = 0;
    *VAR5 = 0;
    do
    {
        VAR10 = FUN2(VAR7->VAR11, VAR3 + VAR9, 1);
        if (VAR10 < 0)
            return VAR10;
        if (VAR3[VAR9] == '')
        {
        }
        else if (VAR3[VAR9] == '')
        {
            VAR3[VAR9] = '';
            *VAR5 = VAR9;
            return 0;
        }
        else
            VAR9++;
    } while (VAR9 < VAR4);
    FUN3(VAR2, VAR12, "");
    return FUN4(VAR13);
}