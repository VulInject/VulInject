int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    FUN2((unsigned)VAR2->VAR5 <= VAR6 - VAR7);
    if ((unsigned)VAR3 > VAR6 - (VAR2->VAR5 + VAR7))
        return -1;
    VAR4 = VAR2->VAR5 + VAR3 + VAR7;
    if (VAR2->VAR8)
    {
        size_t VAR9;
        VAR10 *VAR11 = VAR2->VAR12;
        if (VAR2->VAR12 == NULL)
        {
            VAR9 = 0;
            VAR2->VAR12 = VAR2->VAR8->VAR12;
        }
        else
        {
            VAR9 = VAR2->VAR12 - VAR2->VAR8->VAR12;
            if (VAR9 > VAR6 - VAR4)
                return -1;
        }
        if (VAR4 + VAR9 > VAR2->VAR8->VAR5)
        {
            int VAR13 = FUN3(&VAR2->VAR8, VAR4 + VAR9);
            if (VAR13 < 0)
            {
                VAR2->VAR12 = VAR11;
                return VAR13;
            }
            VAR2->VAR12 = VAR2->VAR8->VAR12 + VAR9;
        }
    }
    else
    {
        VAR2->VAR8 = FUN4(VAR4);
        if (!VAR2->VAR8)
            return FUN5(VAR14);
        memcpy(VAR2->VAR8->VAR12, VAR2->VAR12, VAR2->VAR5);
        VAR2->VAR12 = VAR2->VAR8->VAR12;
    }
    VAR2->VAR5 += VAR3;
    memset(VAR2->VAR12 + VAR2->VAR5, 0, VAR7);
    return 0;
}