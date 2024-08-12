static VAR1 FUN1(VAR2 *VAR3, char *VAR4)
{
    ssize_t VAR5 = 0;
    ssize_t VAR6;
    while (VAR5 < VAR3->VAR7)
    {
        if (VAR3->VAR8 & VAR9)
        {
            VAR6 = FUN2(VAR3->VAR10, (const char *)VAR4 + VAR5, VAR3->VAR7 - VAR5, VAR3->VAR11 + VAR5);
        }
        else
        {
            VAR6 = pread(VAR3->VAR10, VAR4 + VAR5, VAR3->VAR7 - VAR5, VAR3->VAR11 + VAR5);
        }
        if (VAR6 == -1 && VAR12 == VAR13)
        {
            continue;
        }
        else if (VAR6 == -1)
        {
            VAR5 = -VAR12;
        }
        else if (VAR6 == 0)
        {
        }
        VAR5 += VAR6;
    }
    return VAR5;