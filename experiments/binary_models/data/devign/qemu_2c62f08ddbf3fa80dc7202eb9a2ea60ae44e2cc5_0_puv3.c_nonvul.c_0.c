static void FUN1(const char *VAR1)
{
    int VAR2;
    assert(VAR1 != NULL);
    VAR2 = FUN2(VAR1, VAR3, VAR4);
    if (VAR2 < 0)
    {
        FUN3("", VAR1);
    }
    FUN4(NULL, NULL, NULL, NULL);
}