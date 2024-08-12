VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, va_list VAR5)
{
    char *VAR6;
    struct VAR1 *VAR7 = FUN2(sizeof(VAR1));
    VAR6 = FUN3(VAR4, VAR5);
    VAR7->VAR8 = FUN4(VAR6);
    VAR7->VAR3 = VAR3;
    if (VAR3 && VAR3->VAR9)
    {
        VAR7->VAR10 = VAR3->FUN5(VAR11);
    }
    FUN6(VAR6);
    return VAR7;
}