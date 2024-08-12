static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3);
    uint64_t VAR8 = 0;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR7->VAR10; VAR9++)
    {
        uint64_t VAR11 = VAR7->VAR12[VAR9];
        if ((VAR11 & VAR13) == 0 && ((VAR11 & VAR14) == 1 || (VAR11 & VAR15) == 0))
        {
            VAR8 |= (1 << VAR9);
        }
    }
    FUN3(FUN4(VAR7), VAR8);
    return VAR8;
}