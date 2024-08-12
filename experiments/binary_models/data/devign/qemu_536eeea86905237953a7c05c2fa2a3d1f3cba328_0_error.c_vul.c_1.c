void FUN1(VAR1 **VAR2, const char *VAR3, va_list VAR4)
{
    VAR5 *VAR6;
    if (!VAR2)
    {
        return;
    }
    VAR6 = FUN2(NULL);
    FUN3(VAR6, VAR3, VAR4);
    FUN4(VAR6, (*VAR2)->VAR7);
    (*VAR2)->VAR7 = FUN5(VAR6, 0);