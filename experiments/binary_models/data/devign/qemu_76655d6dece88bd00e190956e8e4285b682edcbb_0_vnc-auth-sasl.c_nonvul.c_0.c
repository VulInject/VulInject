static int FUN1(VAR1 *VAR2)
{
    const void *VAR3;
    int VAR4;
    int VAR5;
    VAR4 = FUN2(VAR2->VAR6.VAR7, VAR8, &VAR3);
    if (VAR4 != VAR9)
    {
        FUN3("", VAR4, FUN4(VAR4, NULL, NULL));
        return -1;
    }
    if (VAR3 == NULL)
    {
        FUN3("");
        return -1;
    }
    FUN3("", (const char *)VAR3);
    VAR2->VAR6.VAR10 = FUN5((const char *)VAR3);
    if (VAR2->VAR11->VAR6.VAR12 == NULL)
    {
        FUN3("");
        return 0;
    }
    VAR5 = FUN6(VAR2->VAR11->VAR6.VAR12, VAR2->VAR6.VAR10);
    FUN3("", VAR2->VAR6.VAR10, VAR5 ? "" : "");
    return VAR5 ? 0 : -1;
}