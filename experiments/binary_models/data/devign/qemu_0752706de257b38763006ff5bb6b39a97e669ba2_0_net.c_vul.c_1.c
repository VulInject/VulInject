static void FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    va_list VAR4;
    FUN2(VAR4, VAR3);
    if (VAR2)
    {
        FUN3(VAR2, VAR3, VAR4);
    }
    else
    {
        fprintf(VAR5, "");
        FUN4(VAR5, VAR3, VAR4);
        FUN5(1);
    }
    FUN6(VAR4);
}