static VAR1 FUN1(abi_ulong VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{
    abi_ulong VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    VAR8 = VAR12;
    if (VAR8 < VAR13 * VAR14)
    {
        VAR8 = VAR13 * VAR14;
    }
    VAR10 = VAR14;
    if (VAR10 < VAR15)
    {
        VAR10 = VAR15;
    }
    VAR9 = FUN2(0, VAR8 + VAR10, VAR16 | VAR17, VAR18 | VAR19, -1, 0);
    if (VAR9 == -1)
    {
        FUN3("");
        FUN4(-1);
    }
    FUN5(VAR9, VAR10, VAR20);
    VAR6->VAR21 = VAR9 + VAR10;
    VAR7 = VAR6->VAR21 + VAR8 - VAR13 * VAR14;
    VAR2 += VAR7;
    for (VAR11 = 0; VAR11 < VAR13; VAR11++)
    {
        if (VAR4->VAR22[VAR11])
        {
            VAR6->VAR23++;
            FUN6(VAR7, VAR4->VAR22[VAR11], VAR14);
            free(VAR4->VAR22[VAR11]);
        }
        VAR7 += VAR14;
    }
    return VAR2;
}