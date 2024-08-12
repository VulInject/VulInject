FUN1(void)
{
    char *VAR1;
    VAR1 = FUN2(FUN3());
    if (VAR1 && *VAR1)
        FUN4(VAR1);
    return VAR1;
}