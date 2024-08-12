static int FUN1(VAR1 *VAR2)
{
    const VAR3 *VAR4 = VAR2->VAR5 + 4;
    const VAR3 *VAR6 = VAR4 + VAR2->VAR7;
    int64_t VAR8;
    if (VAR2->VAR7 < 16)
        return 0;
    if (FUN2(VAR2->VAR5) != VAR9)
        return 0;
    while (VAR4 < VAR6 + 3)
    {
        int VAR10 = (VAR4[0] == '' && VAR4[1] == '');
        if (VAR4[0] < '' || VAR4[0] > '' || VAR4[1] < '' || VAR4[1] > '')
            return 0;
        VAR4 += 2;
        VAR8 = FUN3(&VAR4);
        if (VAR8 < 2)
            return 0;
        if (VAR4 + VAR8 - 2 >= VAR6)
            return VAR11 - 1;
        if (VAR10)
        {
            if (VAR8 < 11 || VAR8 > 28)
                return 0;
            if (!FUN2(VAR4))
                return 0;
            return VAR12;
        }
        else
        {
            VAR4 += VAR8 - 2;
        }
    }
    return 0;
}