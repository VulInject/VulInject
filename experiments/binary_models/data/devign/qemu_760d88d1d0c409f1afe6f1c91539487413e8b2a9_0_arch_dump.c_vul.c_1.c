int FUN1(VAR1 *VAR2, const struct VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR7);
    VAR8 *VAR9 = FUN3(VAR6);
    VAR2->VAR10 = VAR11;
    VAR2->VAR12 = VAR13;
    if ((*VAR9->VAR14)(VAR6))
    {
        VAR2->VAR15 = VAR16;
    }
    else
    {
        VAR2->VAR15 = VAR17;
        return 0;