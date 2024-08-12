static VAR1 FUN1(VAR2 *VAR3, int VAR4, VAR5 **VAR6, VAR1 *VAR7, VAR1 *VAR8)
{
    VAR9 *VAR10 = VAR3->VAR11;
    int64_t VAR12 = *VAR8, VAR13;
    bool VAR14 = true;
    int VAR15;
    int VAR16;
    for (VAR15 = 0; VAR12 < *VAR7 && VAR15 < VAR4; VAR12++)
    {
        if (!(*VAR6)[VAR12])
        {
            VAR15++;
            if (VAR14)
            {
                *VAR8 = VAR12;
                VAR14 = false;
            }
        }
        else if (VAR15)
        {
            VAR15 = 0;
        }
    }
    if (VAR15 < VAR4)
    {
        VAR16 = FUN2(VAR10, VAR6, VAR7, VAR12 + VAR4 - VAR15);
        if (VAR16 < 0)
        {
            return VAR16;
        }
    }
    VAR12 -= VAR15;
    for (VAR13 = 0; VAR13 < VAR4; VAR13++)
    {
        (*VAR6)[VAR12 + VAR13] = 1;
    }
    return VAR12 << VAR10->VAR17;
}