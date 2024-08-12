VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, ...)
{
    VAR1 *VAR5;
    va_list VAR6;
    FUN2(VAR6, VAR4);
    VAR3->VAR7 = FUN3(VAR4, &VAR6);
    FUN4(VAR6);
    FUN5(VAR3->VAR7 != NULL);
    VAR3->VAR8 = FUN6(VAR3->VAR7);
    FUN5(VAR3->VAR8 != NULL);
    VAR5 = FUN7(VAR3->VAR8);
    FUN5(VAR5 != NULL);
    return VAR5;
}