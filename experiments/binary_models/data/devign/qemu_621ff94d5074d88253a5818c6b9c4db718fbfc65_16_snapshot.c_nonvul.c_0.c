int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    int VAR6;
    VAR4 *VAR7 = NULL;
    VAR6 = FUN2(VAR2, VAR3, NULL, &VAR7);
    if (VAR6 == -VAR8 || VAR6 == -VAR9)
    {
        FUN3(VAR7);
        VAR7 = NULL;
        VAR6 = FUN2(VAR2, NULL, VAR3, &VAR7);
    }
    FUN4(VAR5, VAR7);
    return VAR6;
}