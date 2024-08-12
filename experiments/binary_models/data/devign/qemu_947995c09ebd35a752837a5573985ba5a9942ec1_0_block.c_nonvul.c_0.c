static int FUN1(const char *VAR1)
{
    const char *VAR2;
    if (FUN2(VAR1) || FUN3(VAR1))
    {
        return 0;
    }
    VAR2 = VAR1 + strcspn(VAR1, "");
    VAR2 = VAR1 + strcspn(VAR1, "");
    return *VAR2 == '';
}