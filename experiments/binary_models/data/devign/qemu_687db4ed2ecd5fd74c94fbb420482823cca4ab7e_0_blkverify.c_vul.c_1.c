static void FUN1(VAR1 *VAR2, const char *VAR3, ...)
{
    va_list VAR4;
    FUN2(VAR4, VAR3);
    fprintf(VAR5, "", VAR2->VAR6 ? "" : "", VAR2->VAR7, VAR2->VAR8);
    FUN3(VAR5, VAR3, VAR4);
    fprintf(VAR5, "");
    FUN4(VAR4);
    FUN5(1);
}