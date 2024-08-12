static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, const VAR8 *VAR9, VAR8 *VAR10, int *VAR11, int *VAR12, VAR8 *VAR13)
{
    int VAR14, VAR15, VAR16, VAR17;
    uint8_t VAR18[22];
    VAR16 = VAR7 - VAR6;
    if (!VAR4 || FUN2(VAR2))
    {
        for (VAR14 = 0; VAR14 < VAR16 - 1; VAR14++)
        {
            VAR10[VAR14] = FUN2(VAR2);
        }
    }
    else if (!VAR3)
    {
        memcpy(VAR10, &VAR9[VAR6 + 1], VAR16 - 1);
    }
    VAR10[VAR16 - 1] = 0;
    if (VAR12 || VAR13)
    {
        VAR17 = VAR16;
        VAR18[0] = VAR5 ? 6 : 12;
        for (VAR15 = 0, VAR14 = 1; VAR14 < VAR16; VAR14++)
        {
            int VAR19 = (VAR5 && VAR14 < 4) ? 6 : 12;
            if (VAR10[VAR14 - 1])
            {
                VAR17--;
                VAR18[VAR15] += VAR19;
            }
            else
            {
                VAR18[++VAR15] = VAR19;
            }
        }
    }
    if (VAR11)
        *VAR11 = VAR16;
    if (VAR12)
        *VAR12 = VAR17;
    if (VAR13)
        memcpy(VAR13, VAR18, VAR17);
}