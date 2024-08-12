static int FUN1(VAR1 *VAR2, const VAR3 *VAR4[], int VAR5[], int VAR6, int VAR7, VAR3 *VAR8[], int VAR9[])
{
    VAR10 *VAR11[] = {(VAR10 *)VAR8[2], (VAR10 *)VAR8[0], (VAR10 *)VAR8[1], (VAR10 *)VAR8[3]};
    VAR10 *VAR12[] = {(VAR10 *)VAR8[1], (VAR10 *)VAR8[0], (VAR10 *)VAR8[2], (VAR10 *)VAR8[3]};
    int VAR13[] = {VAR9[2], VAR9[0], VAR9[1], VAR9[3]};
    int VAR14[] = {VAR9[1], VAR9[0], VAR9[2], VAR9[3]};
    const VAR15 *VAR16 = FUN2(VAR2->VAR17);
    const VAR15 *VAR18 = FUN2(VAR2->VAR19);
    int VAR20 = VAR18->VAR21[0].VAR22;
    int VAR23 = VAR16->VAR24 & VAR25;
    int VAR26 = 0;
    if (VAR27 && !(VAR16->VAR24 & VAR28) || !VAR27 && VAR16->VAR24 & VAR28)
        VAR26++;
    if (VAR27 && !(VAR18->VAR24 & VAR28) || !VAR27 && VAR18->VAR24 & VAR28)
        VAR26 += 2;
    if ((VAR18->VAR24 & (VAR29 | VAR30)) != (VAR29 | VAR30) || VAR20 < 9)
    {
        FUN3(VAR2, VAR31, "", VAR16->VAR32, VAR18->VAR32);
        return VAR7;
    }
    switch (VAR2->VAR17)
    {
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
        FUN4(VAR4[0] + VAR6 * VAR5[0], VAR5[0], VAR11, VAR13, VAR7, VAR23, VAR26, 16 - VAR20, VAR2->VAR37);
        break;
    case VAR38:
    case VAR39:
    case VAR40:
    case VAR41:
        FUN4(VAR4[0] + VAR6 * VAR5[0], VAR5[0], VAR12, VAR14, VAR7, VAR23, VAR26, 16 - VAR20, VAR2->VAR37);
        break;
    default:
        FUN3(VAR2, VAR31, "", VAR16->VAR32, VAR18->VAR32);
    }
    return VAR7;
}