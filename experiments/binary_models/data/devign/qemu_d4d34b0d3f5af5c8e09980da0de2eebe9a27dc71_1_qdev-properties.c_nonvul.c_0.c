static void FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5, const char *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = VAR5;
    int *VAR13 = FUN3(VAR10, VAR12);
    if (VAR10->VAR14 != VAR15)
    {
        FUN4(VAR8, VAR16);
        return;
    }
    FUN5(VAR4, VAR13, VAR12->VAR17->VAR18, VAR12->VAR17->VAR6, VAR12->VAR6, VAR8);
}