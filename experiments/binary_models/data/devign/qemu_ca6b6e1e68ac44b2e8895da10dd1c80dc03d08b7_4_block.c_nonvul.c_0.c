static VAR1 *FUN1(const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7;
    int VAR8;
    VAR8 = FUN2(VAR2, "", &VAR2);
    assert(VAR8);
    VAR6 = FUN3(VAR2);
    if (!VAR6)
    {
        FUN4(VAR4, "");
        return NULL;
    }
    VAR7 = FUN5(VAR6);
    if (!VAR7)
    {
        FUN6(VAR6);
        FUN4(VAR4, "");
        return NULL;
    }
    FUN7(VAR7);
    return VAR7;
}