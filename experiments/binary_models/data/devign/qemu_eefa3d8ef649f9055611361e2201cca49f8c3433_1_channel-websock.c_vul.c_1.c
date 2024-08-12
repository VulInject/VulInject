static VAR1 FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    ssize_t VAR6;
    if (VAR3->VAR7.VAR8 < 4096)
    {
        size_t VAR9 = 4096 - VAR3->VAR7.VAR8;
        FUN2(&VAR3->VAR7, VAR9);
        VAR6 = FUN3(VAR3->VAR10, (char *)VAR3->VAR7.VAR11 + VAR3->VAR7.VAR8, VAR9, VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
        if (VAR6 == 0 && VAR3->VAR7.VAR8 == 0)
        {
            return 0;
        }
        VAR3->VAR7.VAR8 += VAR6;
    }
    while (VAR3->VAR7.VAR8 != 0)
    {
        if (VAR3->VAR12 == 0)
        {
            VAR6 = FUN4(VAR3, VAR5);
            if (VAR6 < 0)
            {
                return VAR6;
            }
            if (VAR6 == 0)
            {
                VAR3->VAR13 = VAR14;
                break;
            }
        }
        VAR6 = FUN5(VAR3, VAR5);
        if (VAR6 < 0)
        {
            return VAR6;
        }
    }
    return 1;
}