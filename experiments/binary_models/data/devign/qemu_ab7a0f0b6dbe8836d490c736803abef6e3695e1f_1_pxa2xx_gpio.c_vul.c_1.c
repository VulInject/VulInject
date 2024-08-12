static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    int VAR8;
    if (VAR3 >= 0x200)
        return 0;
    VAR8 = VAR9[VAR3].VAR8;
    switch (VAR9[VAR3].VAR10)
    {
    case VAR11:
        return VAR6->VAR12[VAR8];
    case VAR13:
        FUN2("" VAR14 "", VAR15, VAR3);
        return VAR6->VAR16[VAR8];
    case VAR17:
        FUN2("" VAR14 "", VAR15, VAR3);
        return 31337;
    case VAR18:
        return VAR6->VAR19[VAR8];
    case VAR20:
        return VAR6->VAR21[VAR8];
    case VAR22:
        return VAR6->VAR23[VAR8 * 2];
    case VAR24:
        return VAR6->VAR23[VAR8 * 2 + 1];
    case VAR25:
        VAR7 = (VAR6->VAR26[VAR8] & VAR6->VAR12[VAR8]) | (VAR6->VAR27[VAR8] & ~VAR6->VAR12[VAR8]);
        FUN3(VAR6->VAR28);
        return VAR7;
    case VAR29:
        return VAR6->VAR30[VAR8];
    default:
        FUN4("" VAR14 "", VAR15, VAR3);
    }
    return 0;
}