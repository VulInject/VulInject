static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int *VAR5, int *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10[2];
    VAR3 *VAR11, *VAR12;
    ram_addr_t VAR13, VAR14, VAR15, VAR16, VAR17;
    drawfn VAR18 = 0;
    if (VAR2->VAR9)
        VAR18 = VAR2->VAR19[VAR2->VAR20][VAR2->VAR21];
    if (!VAR18)
        return;
    VAR11 = VAR4;
    VAR8 = (VAR2->VAR22 + 3) & ~3;
    if (VAR2->VAR21 == VAR23 || VAR2->VAR21 == VAR24)
        VAR8 *= 3;
    else if (VAR2->VAR21 > VAR25)
        VAR8 *= 4;
    else if (VAR2->VAR21 > VAR26)
        VAR8 *= 2;
    VAR9 = VAR2->VAR27 * VAR2->VAR9;
    VAR12 = FUN2(VAR2->VAR28) + VAR9 * (VAR2->VAR22 - 1);
    VAR14 = (VAR29)(VAR4 - VAR30);
    VAR16 = VAR14 + VAR2->VAR27 * VAR8;
    VAR17 = VAR14;
    VAR13 = VAR14 + VAR31;
    VAR10[0] = VAR10[1] = FUN3(VAR16, VAR32);
    for (VAR7 = 0; VAR7 < VAR2->VAR27; VAR7++)
    {
        VAR15 = VAR14 + VAR8;
        for (; VAR13 < VAR15; VAR13 += VAR31)
        {
            VAR10[1] = FUN3(VAR13, VAR32);
            VAR10[0] |= VAR10[1];
        }
        if (VAR10[0] || VAR2->VAR33)
        {
            FUN4((VAR34 *)VAR2->VAR35[0].VAR36, VAR12, VAR11, VAR2->VAR22, -VAR9);
            if (VAR14 < VAR16)
                VAR16 = VAR14;
            VAR17 = VAR15;
            if (VAR7 < *VAR5)
                *VAR5 = VAR7;
            if (VAR7 >= *VAR6)
                *VAR6 = VAR7 + 1;
        }
        VAR14 = VAR15;
        VAR10[0] = VAR10[1];
        VAR11 += VAR8;
        VAR12 += VAR2->VAR9;
    }
    if (VAR17 > VAR16)
        FUN5(VAR16, VAR17, VAR32);
}