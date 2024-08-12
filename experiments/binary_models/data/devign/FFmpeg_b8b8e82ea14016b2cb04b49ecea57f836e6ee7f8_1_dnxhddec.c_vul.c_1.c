static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    const VAR6 *VAR7 = VAR2->VAR8;
    uint32_t VAR9 = VAR7->VAR10[VAR4];
    VAR11 *VAR12 = VAR7->VAR13 + VAR5;
    int VAR14;
    VAR12->VAR15[0] = VAR12->VAR15[1] = VAR12->VAR15[2] = 1 << (VAR7->VAR16 + 2);
    FUN2(&VAR12->VAR17, VAR7->VAR18 + VAR9, (VAR7->VAR19 - VAR9) << 3);
    for (VAR14 = 0; VAR14 < VAR7->VAR20; VAR14++)
    {
        FUN3(VAR7, VAR12, VAR3, VAR14, VAR4);
    }
    return 0;
}