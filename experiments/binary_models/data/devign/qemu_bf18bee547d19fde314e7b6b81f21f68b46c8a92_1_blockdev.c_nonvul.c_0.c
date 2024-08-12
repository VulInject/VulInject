void FUN1(const char *VAR1, bool VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = NULL;
    int VAR7;
    if (!VAR2)
    {
        VAR3 = false;
    }
    VAR7 = FUN2(VAR1, VAR3, &VAR6);
    if (VAR7 && VAR7 != -VAR8 && VAR7 != -VAR9)
    {
        FUN3(VAR5, VAR6);
        return;
    }
    FUN4(VAR6);
}