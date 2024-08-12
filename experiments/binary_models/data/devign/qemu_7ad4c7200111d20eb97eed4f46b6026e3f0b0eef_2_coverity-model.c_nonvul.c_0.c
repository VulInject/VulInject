char *FUN1(const char *VAR1, ...)
{
    char *VAR1;
    VAR1 = FUN2();
    FUN3(VAR1);
    FUN4(VAR1, "");
    return VAR1;
}