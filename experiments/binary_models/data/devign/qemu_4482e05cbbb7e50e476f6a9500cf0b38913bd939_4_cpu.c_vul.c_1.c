VAR1 *FUN1(const char *typename)
{
    VAR2 *VAR3 = NULL;
    VAR1 *VAR4 = FUN2(FUN3(typename));
    FUN4(FUN5(VAR4), true, "", &VAR3);
    if (VAR3 != NULL)
    {
        FUN6(VAR3);
        FUN7(FUN5(VAR4));
        return NULL;
    }
    return VAR4;
}