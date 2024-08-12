void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    const VAR8 *VAR9 = VAR2->VAR10[0].VAR11;
    uint32_t VAR12 = VAR2->VAR10[0].VAR12;
    for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
    {
        for (VAR6 = 0; VAR6 < VAR2->VAR14; VAR6++)
            VAR4[VAR6] = FUN2(VAR9[VAR6] + 128);
        VAR9 += VAR12;
        VAR4 += VAR5;
    }