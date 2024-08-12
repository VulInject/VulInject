int FUN1(const VAR1 *VAR2, const VAR1 *VAR3)
{
    const VAR1 *VAR4 = VAR2;
    if (VAR2 >= VAR3)
        return -1;
    switch (*VAR2++)
    {
    case VAR5:
        return 9;
    case VAR6:
        return 2;
    case VAR7:
        return 3 + FUN2(VAR2);
    case VAR8:
        return 5 + FUN3(VAR2);
    case VAR9:
        return 1;
    case VAR10:
        VAR2 += 4;
    case VAR11:
        for (;;)
        {
            int VAR12 = FUN4(&VAR2);
            int VAR13;
            if (!VAR12)
            {
                VAR2++;
                break;
            }
            if (VAR2 + VAR12 >= VAR3 || VAR2 + VAR12 < VAR2)
                return -1;
            VAR2 += VAR12;
            VAR13 = FUN1(VAR2, VAR3);
            if (VAR13 < 0 || VAR2 + VAR13 >= VAR3)
                return -1;
            VAR2 += VAR13;
        }
        return VAR2 - VAR4;
    case VAR14:
        return 1;
    default:
        return -1;
    }
}