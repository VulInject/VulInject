static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, const VAR8 *VAR9, int *VAR10, VAR8 *VAR11)
{
    int VAR12, VAR13, VAR14, VAR15 = 0;
    uint8_t VAR16[22];
    uint8_t VAR17[22];
    const VAR8 *VAR18;
    VAR14 = VAR7 - VAR6;
    if (!VAR4 || FUN2(VAR2))
    {
        for (VAR12 = 0; VAR12 < VAR14 - 1; VAR12++)
        {
            VAR17[VAR12] = FUN2(VAR2);
        }
        VAR18 = VAR17;
    }
    else if (!VAR3)
    {
        VAR18 = &VAR9[VAR6 + 1];
    }
    else
    {
        return;
    }
    if (VAR10 || VAR11)
    {
        VAR15 = VAR14;
        VAR16[0] = VAR5 ? 6 : 12;
        for (VAR13 = 0, VAR12 = 1; VAR12 < VAR14; VAR12++)
        {
            int VAR19 = (VAR5 && VAR12 < 4) ? 6 : 12;
            if (VAR18[VAR12 - 1])
            {
                VAR15--;
                VAR16[VAR13] += VAR19;
            }
            else
            {
                VAR16[++VAR13] = VAR19;
            }
        }
    }
    if (VAR10)
        *VAR10 = VAR15;
    if (VAR11)
        memcpy(VAR11, VAR16, VAR15);
}