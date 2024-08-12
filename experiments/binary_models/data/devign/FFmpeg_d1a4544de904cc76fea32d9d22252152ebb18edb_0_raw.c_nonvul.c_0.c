static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0, VAR5;
    VAR6 *VAR7, *VAR8, *VAR9;
    AC3HeaderInfo VAR10;
    VAR3 = 0;
    VAR7 = VAR2->VAR7;
    VAR9 = VAR7 + VAR2->VAR11;
    for (; VAR7 < VAR9; VAR7++)
    {
        VAR8 = VAR7;
        for (VAR5 = 0; VAR8 < VAR9; VAR5++)
        {
            if (FUN2(VAR8, &VAR10) < 0)
                break;
            VAR8 += VAR10.VAR12;
        }
        VAR3 = FUN3(VAR3, VAR5);
        if (VAR7 == VAR2->VAR7)
            VAR4 = VAR5;
    }
    if (VAR4 >= 3)
        return VAR13 * 3 / 4;
    else if (VAR3 >= 3)
        return VAR13 / 2;
    else if (VAR3 >= 1)
        return 1;
    else
        return 0;
}