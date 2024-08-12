static void FUN1(const char *VAR1)
{
    int VAR2;
    if (VAR1 == NULL && FUN2())
    {
        return;
    }
    assert(VAR1 != NULL);
    VAR2 = FUN3(VAR1, VAR3, VAR4);
    if (VAR2 < 0)
    {
        FUN4("", VAR1);
        FUN5(1);
    }
    FUN6(NULL, 0, &VAR5, NULL);
}