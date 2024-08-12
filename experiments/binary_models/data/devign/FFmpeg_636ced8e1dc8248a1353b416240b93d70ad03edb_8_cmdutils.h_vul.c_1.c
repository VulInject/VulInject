VAR1 FUN1(const char *VAR2, const char *VAR3, int VAR4)
{
    int64_t VAR5;
    if (FUN2(&VAR5, VAR3, VAR4) < 0)
    {
        FUN3(NULL, VAR6, "", VAR4 ? "" : "", VAR2, VAR3);
        FUN4(1);
    }
    return VAR5;
}