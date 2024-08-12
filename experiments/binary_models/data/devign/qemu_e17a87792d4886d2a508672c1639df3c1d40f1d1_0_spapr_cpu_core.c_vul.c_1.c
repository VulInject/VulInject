char *FUN1(const char *VAR1)
{
    char *VAR2;
    VAR3 **VAR4 = FUN2(VAR1, "", 2);
    VAR2 = FUN3("", VAR4[0], VAR5);
    FUN4(VAR4);
    if (!FUN5(VAR2))
    {
        const char *VAR6;
        FUN6(VAR2);
        VAR6 = FUN7(VAR1);
        if (VAR6)
        {
            return FUN1(VAR6);
        }
        return NULL;
    }
    return VAR2;
}