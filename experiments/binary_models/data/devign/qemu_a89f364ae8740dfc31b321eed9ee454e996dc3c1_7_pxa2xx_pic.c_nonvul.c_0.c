static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    switch (VAR3)
    {
    case VAR7:
        return VAR6->VAR8[0] & ~VAR6->VAR9[0] & VAR6->VAR10[0];
    case VAR11:
        return VAR6->VAR8[1] & ~VAR6->VAR9[1] & VAR6->VAR10[1];
    case VAR12:
        return VAR6->VAR10[0];
    case VAR13:
        return VAR6->VAR10[1];
    case VAR14:
        return VAR6->VAR9[0];
    case VAR15:
        return VAR6->VAR9[1];
    case VAR16:
        return (VAR6->VAR17 == 0);
    case VAR18:
        return VAR6->VAR8[0] & VAR6->VAR9[0] & VAR6->VAR10[0];
    case VAR19:
        return VAR6->VAR8[1] & VAR6->VAR9[1] & VAR6->VAR10[1];
    case VAR20:
        return VAR6->VAR8[0];
    case VAR21:
        return VAR6->VAR8[1];
    case VAR22 ... VAR23:
        return VAR6->VAR24[0 + ((VAR3 - VAR22) >> 2)];
    case VAR25 ... VAR26:
        return VAR6->VAR24[32 + ((VAR3 - VAR25) >> 2)];
    case VAR27:
        return FUN2(VAR6);
    default:
        FUN3("" VAR28 "", VAR29, VAR3);
        return 0;
    }
}