int FUN1(const VAR1 *VAR2, const VAR1 *VAR3, const VAR1 *VAR4, VAR1 *VAR5, int VAR6)
{
    int VAR7 = strlen(VAR4);
    int VAR8;
    while (*VAR2 != VAR9 && VAR2 < VAR3)
    {
        VAR8 = FUN2(VAR2, VAR3);
        if (VAR8 < 0)
            VAR8 = VAR3 - VAR2;
        VAR2 += VAR8;
    }
    if (VAR3 - VAR2 < 3)
        return -1;
    VAR2++;
    for (;;)
    {
        int VAR10 = FUN3(&VAR2);
        if (!VAR10)
            break;
        if (VAR2 + VAR10 >= VAR3 || VAR2 + VAR10 < VAR2)
            return -1;
        VAR2 += VAR10;
        if (VAR10 == VAR7 && !memcmp(VAR2 - VAR10, VAR4, VAR7))
        {
            switch (*VAR2++)
            {
            case VAR11:
                snprintf(VAR5, VAR6, "", FUN4(FUN5(VAR2)));
                break;
            case VAR12:
                snprintf(VAR5, VAR6, "", *VAR2 ? "" : "");
                break;
            case VAR13:
                VAR8 = FUN3(&VAR2);
                FUN6(VAR5, VAR2, FUN7(VAR8 + 1, VAR6));
                break;
            default:
                return -1;
            }
            return 0;
        }
        VAR8 = FUN2(VAR2, VAR3);
        if (VAR8 < 0 || VAR2 + VAR8 >= VAR3 || VAR2 + VAR8 < VAR2)
            return -1;
        VAR2 += VAR8;
    }
    return -1;
}