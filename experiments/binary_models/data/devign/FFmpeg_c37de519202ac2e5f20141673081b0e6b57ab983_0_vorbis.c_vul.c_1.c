int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5)
{
    uint32_t VAR6[33] = {404};
    unsigned VAR7, VAR8, VAR9, VAR10;
    for (VAR9 = 0; (VAR2[VAR9] == 0) && (VAR9 < VAR5); ++VAR9)
        ;
    if (VAR9 == VAR5)
        return 0;
    VAR4[VAR9] = 0;
    if (VAR2[VAR9] > 32)
        return VAR11;
    for (VAR7 = 0; VAR7 < VAR2[VAR9]; ++VAR7)
        VAR6[VAR7 + 1] = 1 << VAR7;
    ++VAR9;
    for (VAR7 = VAR9; (VAR2[VAR7] == 0) && (VAR7 < VAR5); ++VAR7)
        ;
    if (VAR7 == VAR5)
        return 0;
    for (; VAR9 < VAR5; ++VAR9)
    {
        if (VAR2[VAR9] > 32)
            return VAR11;
        if (VAR2[VAR9] == 0)
            continue;
        for (VAR7 = VAR2[VAR9]; VAR7 > 0; --VAR7)
            if (VAR6[VAR7])
                break;
        if (!VAR7)
            return VAR11;
        VAR10 = VAR6[VAR7];
        VAR6[VAR7] = 0;
        for (VAR8 = VAR7 + 1; VAR8 <= VAR2[VAR9]; ++VAR8)
            VAR6[VAR8] = VAR10 + (1 << (VAR8 - 1));
        VAR4[VAR9] = VAR10;
    }
    for (VAR9 = 1; VAR9 < 33; VAR9++)
        if (VAR6[VAR9])
            return VAR11;
    return 0;
}