char *FUN1(const char *VAR1, ...)
{
    char VAR2, *VAR3;
    size_t VAR4;
    FUN2(VAR1);
    FUN3(VAR1);
    VAR2 = *VAR1;
    VAR3 = FUN4();
    FUN5(VAR3);
    FUN6(VAR3, "");
    return VAR3;
}