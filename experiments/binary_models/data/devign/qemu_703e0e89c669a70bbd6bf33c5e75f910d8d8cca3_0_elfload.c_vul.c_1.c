static VAR1 FUN1(abi_ulong VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    abi_ulong VAR7, VAR8, VAR9;
    int VAR10;
    VAR8 = VAR11;
    if (VAR8 < VAR12 * VAR13)
        VAR8 = VAR12 * VAR13;
    VAR9 = FUN2(0, VAR8 + VAR14, VAR15 | VAR16, VAR17 | VAR18, -1, 0);
    if (VAR9 == -1)
    {
        FUN3("");
        FUN4(-1);
    }
    FUN5(VAR9 + VAR8, VAR14, VAR19);
    VAR7 = VAR9 + VAR8 - VAR12 * VAR13;
    VAR2 += VAR7;
    for (VAR10 = 0; VAR10 < VAR12; VAR10++)
    {
        if (VAR4->VAR20[VAR10])
        {
            VAR6->VAR21++;
            FUN6(VAR7, VAR4->VAR20[VAR10], VAR13);
            free(VAR4->VAR20[VAR10]);
        }
        VAR7 += VAR13;
    }
    return VAR2;
}