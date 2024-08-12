void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    const int64_t VAR5 = 1LL << 32;
    int64_t VAR6;
    int VAR7, VAR8, VAR9;
    memset(VAR2->VAR10, 0, sizeof(VAR2->VAR10));
    memset(VAR2->VAR11, 0, sizeof(VAR2->VAR11));
    for (VAR9 = 1; VAR9 < 256; VAR9++)
    {
        if (VAR2->VAR11[VAR9])
            continue;
        VAR6 = (VAR9 * VAR5 + 128) >> 8;
        VAR7 = VAR9;
        for (;;)
        {
            VAR6 += ((VAR5 - VAR6) * VAR3 + VAR5 / 2) >> 32;
            VAR8 = (256 * VAR6 + VAR5 / 2) >> 32;
            if (VAR8 <= VAR7)
                VAR8 = VAR7 + 1;
            if (VAR8 > VAR4)
                VAR8 = VAR4;
            if (VAR8 < VAR7)
                break;
            VAR2->VAR11[VAR7] = VAR8;
            if (VAR8 == VAR7)
                break;
            VAR7 = VAR8;
        }
    }
    VAR7 = 0;
    VAR6 = VAR5 / 2;
    for (VAR9 = 0; VAR9 < 128; VAR9++)
    {
        VAR8 = (256 * VAR6 + VAR5 / 2) >> 32;
        if (VAR8 <= VAR7)
            VAR8 = VAR7 + 1;
        if (VAR7 && VAR7 < 256 && VAR8 <= VAR4)
            VAR2->VAR11[VAR7] = VAR8;
        VAR6 += ((VAR5 - VAR6) * VAR3 + VAR5 / 2) >> 32;
        VAR7 = VAR8;
    }
    for (VAR9 = 256 - VAR4; VAR9 <= VAR4; VAR9++)
    {
        if (VAR2->VAR11[VAR9])
            continue;
        VAR6 = (VAR9 * VAR5 + 128) >> 8;
        VAR6 += ((VAR5 - VAR6) * VAR3 + VAR5 / 2) >> 32;
        VAR8 = (256 * VAR6 + VAR5 / 2) >> 32;
        if (VAR8 <= VAR9)
            VAR8 = VAR9 + 1;
        if (VAR8 > VAR4)
            VAR8 = VAR4;
        VAR2->VAR11[VAR9] = VAR8;
    }
    for (VAR9 = 1; VAR9 < 255; VAR9++)
        VAR2->VAR10[VAR9] = 256 - VAR2->VAR11[256 - VAR9];
    for (VAR9 = 0; VAR9 < 256; VAR9++)
        FUN2(NULL, VAR12, "", VAR9, VAR2->VAR11[VAR9]);
}