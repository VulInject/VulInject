VAR1 *FUN1(const char *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR1 *VAR8;
    if (VAR2)
    {
        VAR7 = FUN2(VAR2);
        if (VAR7)
        {
            return FUN3(VAR7);
        }
    }
    if (VAR3)
    {
        VAR8 = FUN4(VAR3);
        if (VAR8)
        {
            return VAR8;
        }
    }
    FUN5(VAR5, "", VAR2 ? VAR2 : "", VAR3 ? VAR3 : "");
    return NULL;
}