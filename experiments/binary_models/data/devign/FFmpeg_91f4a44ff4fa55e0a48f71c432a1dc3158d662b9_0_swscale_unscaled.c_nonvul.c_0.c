static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    int VAR10, VAR11, VAR12;
    for (VAR12 = 0; VAR12 < 4; VAR12++)
    {
        int VAR13 = VAR5[VAR12] / 2;
        int VAR14 = VAR9[VAR12] / 2;
        VAR15 *VAR16 = (VAR15 *)VAR8[VAR12];
        const VAR15 *VAR17 = (const VAR15 *)VAR4[VAR12];
        int VAR18 = FUN2(FUN3(VAR13), FUN3(VAR14));
        if (!VAR16 || !VAR17)
            continue;
        for (VAR10 = 0; VAR10 < (VAR7 >> VAR2->VAR19); VAR10++)
        {
            for (VAR11 = 0; VAR11 < VAR18; VAR11++)
            {
                VAR16[VAR11] = FUN4(VAR17[VAR11]);
            }
            VAR17 += VAR13;
            VAR16 += VAR14;
        }
    }
    return VAR7;
}