static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    const VAR10 *VAR11[] = {(VAR10 *)VAR4[1], (VAR10 *)VAR4[0], (VAR10 *)VAR4[2]};
    const VAR10 *VAR12[] = {(VAR10 *)VAR4[2], (VAR10 *)VAR4[0], (VAR10 *)VAR4[1]};
    int VAR13[] = {VAR5[1], VAR5[0], VAR5[2]};
    int VAR14[] = {VAR5[2], VAR5[0], VAR5[1]};
    const VAR15 *VAR16 = FUN2(VAR2->VAR17);
    const VAR15 *VAR18 = FUN2(VAR2->VAR19);
    int VAR20 = VAR16->VAR21[0].VAR22 + 1;
    int VAR23 = 0;
    if (VAR24 && !(VAR16->VAR25 & VAR26) || !VAR24 && VAR16->VAR25 & VAR26)
        VAR23++;
    if (VAR24 && !(VAR18->VAR25 & VAR26) || !VAR24 && VAR18->VAR25 & VAR26)
        VAR23 += 2;
    if ((VAR16->VAR25 & (VAR27 | VAR28)) != (VAR27 | VAR28) || VAR20 <= 8)
    {
        FUN3(VAR2, VAR29, "", VAR16->VAR30, VAR18->VAR30);
        return VAR7;
    }
    switch (VAR2->VAR19)
    {
    case VAR31:
    case VAR32:
        FUN4(VAR11, VAR13, VAR8[0] + VAR6 * VAR9[0], VAR9[0], VAR7, 0, VAR23, VAR20, VAR2->VAR33);
        break;
    case VAR34:
    case VAR35:
        FUN4(VAR12, VAR14, VAR8[0] + VAR6 * VAR9[0], VAR9[0], VAR7, 0, VAR23, VAR20, VAR2->VAR33);
        break;
    case VAR36:
    case VAR37:
        FUN4(VAR12, VAR14, VAR8[0] + VAR6 * VAR9[0], VAR9[0], VAR7, 1, VAR23, VAR20, VAR2->VAR33);
        break;
    case VAR38:
    case VAR39:
        FUN4(VAR11, VAR13, VAR8[0] + VAR6 * VAR9[0], VAR9[0], VAR7, 1, VAR23, VAR20, VAR2->VAR33);
        break;
    default:
        FUN3(VAR2, VAR29, "", VAR16->VAR30, VAR18->VAR30);
    }
    return VAR7;
}