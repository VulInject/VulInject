static inline int FUN1(VAR1 *VAR2)
{
    switch (VAR2->VAR3)
    {
    case VAR4:
    case VAR5:
    case VAR6:
        return FUN2(VAR5);
    case VAR7:
    case VAR8:
    case VAR9:
        return FUN2(VAR8);
    case VAR10:
    default:
        FUN3();
    }