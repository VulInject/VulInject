static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    HANDLE VAR6;
    if (VAR3->VAR7)
    {
        FUN2(VAR5, "");
        return NULL;
    }
    VAR6 = FUN3(VAR3->VAR6, VAR8, VAR9, NULL, VAR10, VAR11, NULL);
    if (VAR6 == VAR12)
    {
        FUN2(VAR5, "", VAR3->VAR6);
        return NULL;
    }
    return FUN4(VAR6);
}