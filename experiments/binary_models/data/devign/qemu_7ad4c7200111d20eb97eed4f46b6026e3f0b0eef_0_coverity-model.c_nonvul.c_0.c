char *FUN1(const char *VAR1, va_list VAR2)
{
    char VAR3, *VAR4;
    size_t VAR5;
    FUN2(VAR1);
    FUN3(VAR1);
    VAR3 = *VAR1;
    VAR3 = *(char *)VAR2;
    VAR4 = FUN4();
    FUN5(VAR4);
    FUN6(VAR4, "");
    return VAR5;
}