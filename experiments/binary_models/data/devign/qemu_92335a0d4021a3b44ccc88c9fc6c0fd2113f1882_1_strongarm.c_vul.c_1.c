static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    switch (VAR3)
    {
    case VAR7:
        return VAR6->VAR8;
    case VAR9:
        FUN2("" VAR10 "", VAR11, VAR3);
        return VAR6->VAR12;
    case VAR13:
        FUN2("" VAR10 "", VAR11, VAR3);
        return 31337;
    case VAR14:
        return VAR6->VAR15;
    case VAR16:
        return VAR6->VAR17;
    case VAR18:
        return VAR6->VAR19;
    case VAR20:
        return (VAR6->VAR21 & VAR6->VAR8) | (VAR6->VAR22 & ~VAR6->VAR8);
    case VAR23:
        return VAR6->VAR24;
    default:
        FUN3("" VAR10 "", VAR11, VAR3);
    }
    return 0;
}