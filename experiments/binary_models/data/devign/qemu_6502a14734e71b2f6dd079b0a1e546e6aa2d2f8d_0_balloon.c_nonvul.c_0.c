VAR1 *FUN1(VAR2 **VAR3)
{
    VAR1 *VAR4;
    if (FUN2() && !FUN3())
    {
        FUN4(VAR3, VAR5, "", "");
        return NULL;
    }
    if (!VAR6)
    {
        FUN4(VAR3, VAR7, "");
        return NULL;
    }
    VAR4 = FUN5(sizeof(*VAR4));
    FUN6(VAR8, VAR4);
    return VAR4;
}