static VAR1 *FUN1(int VAR2, int VAR3)
{
    int VAR4 = VAR2, VAR5 = VAR3;
    VAR1 *VAR6, *VAR7, *VAR8;
    int32_t VAR9;
    VAR9 = FUN2(VAR2, VAR3);
    VAR7 = VAR6 = FUN3(VAR9, sizeof(*VAR7));
    if (!VAR6)
        return NULL;
    while (VAR2 > 1 || VAR3 > 1)
    {
        int VAR10, VAR11;
        VAR4 = VAR2;
        VAR5 = VAR3;
        VAR2 = (VAR2 + 1) >> 1;
        VAR3 = (VAR3 + 1) >> 1;
        VAR8 = VAR7 + VAR4 * VAR5;
        for (VAR10 = 0; VAR10 < VAR5; VAR10++)
            for (VAR11 = 0; VAR11 < VAR4; VAR11++)
                VAR7[VAR10 * VAR4 + VAR11].VAR12 = &VAR8[(VAR10 >> 1) * VAR2 + (VAR11 >> 1)];
        VAR7 = VAR8;
    }
    VAR7[0].VAR12 = NULL;
    return VAR6;
}