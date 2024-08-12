VAR1 FUN1(int VAR2, void *VAR3, size_t VAR4, bool VAR5)
{
    size_t VAR6 = 0;
    if (FUN2())
    {
        if (VAR5)
        {
            return FUN3(VAR2, VAR3, VAR4);
        }
        else
        {
            return FUN4(VAR2, VAR3, VAR4);
        }
    }
    while (VAR6 < VAR4)
    {
        ssize_t VAR7;
        if (VAR5)
        {
            VAR7 = FUN5(VAR2, VAR3 + VAR6, VAR4 - VAR6, 0);
        }
        else
        {
            VAR7 = send(VAR2, VAR3 + VAR6, VAR4 - VAR6, 0);
        }
        if (VAR7 < 0)
        {
            VAR8 = FUN6();
            if (VAR8 == VAR9 || VAR8 == VAR10)
            {
                continue;
            }
            return 0;
        }
        if (VAR7 == 0)
        {
            break;
        }
        VAR6 += VAR7;
    }
    return VAR6;
}