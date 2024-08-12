void FUN1(VAR1 *VAR2, const char *VAR3, VAR1 *VAR4, const char *VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR10 *VAR12;
    VAR12 = FUN2(VAR4, VAR5, VAR7);
    if (!VAR12)
    {
        return;
    }
    VAR9 = FUN3(sizeof(*VAR9));
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR11 = FUN4(VAR2, VAR3, VAR12->VAR13, VAR14, VAR15, VAR16, VAR9, VAR7);
    VAR11->VAR17 = VAR18;
}