static inline void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    FUN2(VAR5 == 0);
    switch (VAR3)
    {
    case VAR6:
    case VAR7:
        FUN3(VAR2, (VAR1 *)VAR4);
        break;
    case VAR8:
        FUN4(VAR2, (VAR1 *)VAR4);
        break;
    default:
        FUN5();
    }
}