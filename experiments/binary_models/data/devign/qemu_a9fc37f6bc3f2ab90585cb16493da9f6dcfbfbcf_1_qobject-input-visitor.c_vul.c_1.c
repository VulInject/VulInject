static void FUN1(VAR1 *VAR2, const char *VAR3, bool *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR6, VAR3, false, NULL);
    if (!VAR8)
    {
        *VAR4 = false;
        return;
    }
    *VAR4 = true;
}