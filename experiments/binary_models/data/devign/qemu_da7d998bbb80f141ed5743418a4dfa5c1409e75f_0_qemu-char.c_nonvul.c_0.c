void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, void *VAR9)
{
    if (!VAR9 && !VAR4 && !VAR6 && !VAR8)
    {
        ++VAR2->VAR10;
    }
    VAR2->VAR11 = VAR4;
    VAR2->VAR12 = VAR6;
    VAR2->VAR13 = VAR8;
    VAR2->VAR14 = VAR9;
    if (VAR2->VAR15)
        VAR2->FUN2(VAR2);
    if (VAR2->VAR16)
    {
        FUN3(VAR2);
    }
}