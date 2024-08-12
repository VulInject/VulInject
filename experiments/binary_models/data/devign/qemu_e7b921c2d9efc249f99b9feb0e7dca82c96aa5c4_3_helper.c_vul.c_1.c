static inline VAR1 FUN1(VAR2 *VAR3, ARMMMUIdx VAR4)
{
    switch (VAR4)
    {
    case VAR5:
    case VAR6:
        return 2;
    case VAR7:
        return 3;
    case VAR8:
        return FUN2(VAR3, 3) ? 1 : 3;
    case VAR9:
    case VAR10:
    case VAR11:
        return 1;
    default:
        FUN3();
    }