void FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    FUN2(VAR2, VAR4);
    if (VAR2->VAR5)
    {
        va_list VAR6;
        FUN3(VAR6, VAR3);
        fprintf(VAR7, "", VAR2->VAR8);
        FUN4(VAR7, VAR3, VAR6);
        fprintf(VAR7, "");
        FUN5(VAR6);
    }
}