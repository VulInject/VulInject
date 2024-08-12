int FUN1(void *VAR1, const char *VAR2)
{
    int VAR3;
    VAR3 = FUN2(VAR1, VAR2);
    if (VAR3 < 0)
        return VAR3;
    return FUN3(VAR1, VAR3);
}