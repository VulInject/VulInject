static inline void FUN1(VAR1 *VAR2, int VAR3, TCGv VAR4, TCGv VAR5)
{
    int VAR6 = FUN2(VAR2);
    VAR2->VAR7 = 1;
    switch (VAR3)
    {
    case VAR8:
        FUN3(VAR5, VAR4, VAR6);
        break;
    case VAR9:
        FUN4(VAR5, VAR4, VAR6);
        break;
    case VAR10:
    case VAR11:
        FUN5(VAR5, VAR4, VAR6);
        break;
    default:
        FUN6(0, "");
    }
    VAR12 = VAR13;
}