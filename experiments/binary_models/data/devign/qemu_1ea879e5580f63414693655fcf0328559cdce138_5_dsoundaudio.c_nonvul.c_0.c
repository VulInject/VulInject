static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6 = VAR5;
    int VAR7 = 0;
    int VAR8 = VAR2->VAR9 + VAR5;
    struct VAR10 *VAR11 = VAR2->VAR12 + VAR2->VAR9;
    struct VAR10 *VAR13 = NULL;
    if (VAR8 > VAR2->VAR14)
    {
        VAR6 = VAR2->VAR14 - VAR2->VAR9;
        VAR13 = VAR2->VAR12;
        VAR7 = VAR5 - VAR6;
        VAR8 = VAR7;
    }
    if (VAR6)
    {
        VAR2->FUN2(VAR4, VAR11, VAR6);
    }
    if (VAR7)
    {
        VAR4 = FUN3(VAR4, VAR6 << VAR2->VAR15.VAR16);
        VAR2->FUN2(VAR4, VAR13, VAR7);
    }
    VAR2->VAR9 = VAR8 % VAR2->VAR14;
}