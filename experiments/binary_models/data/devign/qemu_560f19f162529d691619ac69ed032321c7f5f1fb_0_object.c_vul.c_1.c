bool FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR3, VAR5);
    VAR8 *VAR9;
    bool VAR10;
    if (!VAR7)
    {
        return false;
    }
    VAR9 = FUN3(VAR7);
    if (!VAR9)
    {
        FUN4(VAR5, VAR11, VAR3, "");
        VAR10 = false;
    }
    else
    {
        VAR10 = FUN5(VAR9);
    }
    FUN6(VAR9);
    return VAR10;
}