static bool FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3, VAR4, VAR6);
    bool VAR7;
    if (!VAR5->VAR8.VAR9 || FUN3(VAR5))
    {
        return false;
    }
    VAR7 = FUN4(VAR5);
    FUN5(VAR5, 0);
    return VAR7;
}