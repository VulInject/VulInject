static VAR1 FUN1(const VAR2 *VAR3, const VAR4 *VAR5, int VAR6)
{
    const VAR7 *VAR8 = VAR3->VAR9;
    int VAR10, VAR11, VAR12 = 0;
    int VAR13;
    int64_t VAR14;
    int64_t VAR15 = 1ll << 62;
    int64_t VAR16[15];
    for (VAR10 = 0; VAR10 <= VAR17; VAR10++)
        for (VAR11 = VAR10; VAR11 <= VAR17; VAR11++)
            VAR16[VAR12++] = FUN2(VAR5 + 4, VAR6, VAR10, VAR11);
    for (VAR10 = 0; VAR10 < VAR18; VAR10++)
    {
        VAR14 = FUN3(VAR19[VAR10], VAR16, *VAR8);
        if (VAR14 < VAR15)
        {
            VAR15 = VAR14;
            VAR13 = VAR10;
        }
        VAR8++;
    }
    return VAR13;
}