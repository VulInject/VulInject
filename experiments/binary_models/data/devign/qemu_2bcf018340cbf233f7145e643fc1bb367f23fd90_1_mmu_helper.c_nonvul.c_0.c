static int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, VAR5 *VAR6, bool VAR7)
{
    uint64_t VAR8 = VAR2->VAR9.VAR10.VAR11 & VAR12;
    VAR13 *VAR9 = &VAR2->VAR9;
    int VAR14, VAR15, VAR16;
    for (VAR15 = 0; VAR15 < VAR4; VAR15++)
    {
        VAR14 = FUN2(VAR9, VAR3, VAR7, VAR8, &VAR6[VAR15], &VAR16, true);
        if (VAR14)
        {
            return VAR14;
        }
        if (!FUN3(&VAR17, VAR6[VAR15], VAR18, VAR7))
        {
            FUN4(VAR9, VAR19, VAR20);
            return -VAR21;
        }
        VAR3 += VAR18;
    }
    return 0;
}