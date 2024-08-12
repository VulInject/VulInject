int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, int VAR7)
{
    struct VAR1 *VAR8 = (struct VAR1 *)VAR2;
    if (VAR3 < 1 || VAR3 > VAR9)
        return -1;
    VAR8->VAR10 = 0;
    VAR8->VAR11 = VAR5;
    VAR8->VAR12 = VAR8->VAR11 + VAR6;
    VAR8->VAR13 = 0;
    VAR8->VAR14 = 0;
    VAR8->VAR15 = 0;
    VAR8->VAR16 = VAR3;
    VAR8->VAR17 = VAR8->VAR16 + 1;
    VAR8->VAR18 = VAR19[VAR8->VAR17];
    VAR8->VAR20 = 1 << VAR8->VAR17;
    VAR8->VAR21 = 1 << VAR8->VAR16;
    VAR8->VAR22 = VAR8->VAR21 + 1;
    VAR8->VAR23 = VAR8->VAR24 = VAR8->VAR21 + 2;
    VAR8->VAR25 = VAR8->VAR26 = 0;
    VAR8->VAR27 = VAR8->VAR28;
    VAR8->VAR7 = VAR7;
    switch (VAR8->VAR7)
    {
    case VAR29:
        VAR8->VAR30 = 0;
        break;
    case VAR31:
        VAR8->VAR30 = 1;
        break;
    default:
        return -1;
    }
    return 0;
}