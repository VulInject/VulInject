int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR4 *VAR8 = NULL;
    int VAR9;
    VAR7 = FUN2(VAR1, true, VAR5);
    if (VAR7 == NULL)
    {
        return -VAR10;
    }
    VAR9 = FUN3(VAR7, VAR1, VAR3, &VAR8);
    FUN4(VAR5, VAR8);
    return VAR9;
}