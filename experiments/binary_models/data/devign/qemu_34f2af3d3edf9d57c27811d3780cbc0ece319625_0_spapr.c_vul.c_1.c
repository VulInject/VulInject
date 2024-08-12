static VAR1 *FUN1(const char *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(NULL, VAR2);
    FUN3(VAR6, "", VAR3);
    FUN3(VAR6, "", VAR4);
    if (FUN4(VAR6) < 0)
    {
        return NULL;
    }
    return FUN5(VAR6);
}