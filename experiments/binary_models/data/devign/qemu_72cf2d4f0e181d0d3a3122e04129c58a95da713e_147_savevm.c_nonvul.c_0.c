int FUN1(const char *VAR1, int VAR2, int VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, void *VAR10)
{
    VAR11 *VAR12;
    VAR12 = FUN2(sizeof(VAR11));
    FUN3(VAR12->VAR1, sizeof(VAR12->VAR1), VAR1);
    VAR12->VAR3 = VAR3;
    VAR12->VAR13 = VAR14++;
    VAR12->VAR5 = VAR5;
    VAR12->VAR7 = VAR7;
    VAR12->VAR9 = VAR9;
    VAR12->VAR10 = VAR10;
    VAR12->VAR15 = NULL;
    if (VAR2 == -1)
    {
        VAR12->VAR2 = FUN4(VAR1);
    }
    else
    {
        VAR12->VAR2 = VAR2;
    }
    FUN5(&VAR16, VAR12, VAR17);
    return 0;
}