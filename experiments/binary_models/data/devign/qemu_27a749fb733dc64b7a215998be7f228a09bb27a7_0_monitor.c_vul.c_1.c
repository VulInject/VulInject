void FUN1(const char *VAR1, int VAR2, const char *VAR3, const char *VAR4, ...)
{
    va_list VAR5;
    VAR6 *VAR7;
    assert(VAR8 != NULL);
    FUN2(VAR5, VAR4);
    VAR7 = FUN3(VAR1, VAR2, VAR3, VAR4, &VAR5);
    FUN4(VAR5);
    switch (VAR8->VAR9)
    {
    case VAR10:
        FUN5(VAR7);
        FUN6(VAR7);
        break;
    case VAR11:
        assert(VAR8->VAR12->VAR13 == NULL);
        VAR8->VAR12->VAR13 = VAR7;
        break;
    }
}