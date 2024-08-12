static VAR1 *FUN1(const char *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = VAR4->VAR11.VAR10;
    VAR12 *VAR13 = FUN2(VAR4->VAR11.VAR10);
    int VAR14;
    VAR14 = FUN3(VAR10->VAR15, VAR16, VAR8);
    if (VAR14 < 0)
    {
        return NULL;
    }
    return FUN4(VAR14, VAR13, VAR8);
}