void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    void (*VAR5)(VAR1 *, VAR3 *);
    VAR6 *VAR7 = &FUN2(VAR2);
    if (!(VAR5 = VAR7->VAR5))
        VAR5 = VAR8;
    if ((VAR7->VAR9 & VAR4->VAR10) != VAR7->VAR9 || VAR7->VAR11 & VAR4->VAR10)
    {
        VAR2->VAR12 = FUN3(VAR2, VAR7->VAR9);
        VAR2->VAR13 = VAR4;
        VAR2->VAR12->VAR14 = VAR2->VAR13->VAR14;
    }
    else
        VAR2->VAR12 = VAR4;
    FUN4(VAR2, VAR2->VAR12);