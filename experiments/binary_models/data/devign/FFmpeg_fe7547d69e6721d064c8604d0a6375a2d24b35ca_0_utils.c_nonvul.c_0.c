int FUN1(const VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    int64_t VAR9;
    VAR6 = -1;
    VAR7 = VAR3;
    if (VAR7 && VAR2[VAR7 - 1].VAR9 < VAR4)
        VAR6 = VAR7 - 1;
    while (VAR7 - VAR6 > 1)
    {
        VAR8 = (VAR6 + VAR7) >> 1;
        while ((VAR2[VAR8].VAR5 & VAR10) && VAR8 < VAR7 && VAR8 < VAR3 - 1)
        {
            VAR8++;
            if (VAR8 == VAR7 && VAR2[VAR8].VAR9 >= VAR4)
            {
                VAR8 = VAR7 - 1;
                break;
            }
        }
        VAR9 = VAR2[VAR8].VAR9;
        if (VAR9 >= VAR4)
            VAR7 = VAR8;
        if (VAR9 <= VAR4)
            VAR6 = VAR8;
    }
    VAR8 = (VAR5 & VAR11) ? VAR6 : VAR7;
    if (!(VAR5 & VAR12))
        while (VAR8 >= 0 && VAR8 < VAR3 && !(VAR2[VAR8].VAR5 & VAR13))
            VAR8 += (VAR5 & VAR11) ? -1 : 1;
    if (VAR8 == VAR3)
        return -1;
    return VAR8;
}