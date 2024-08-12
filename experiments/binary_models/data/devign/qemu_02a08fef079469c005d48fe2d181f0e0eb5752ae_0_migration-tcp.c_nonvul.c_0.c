int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR2->VAR6 = VAR7;
    VAR2->write = VAR8;
    VAR2->close = VAR9;
    VAR2->VAR10 = FUN2(VAR3, false, NULL, VAR5);
    if (!FUN3(VAR5))
    {
        FUN4(VAR2);
    }
    else if (FUN5(*VAR5, VAR11))
    {
        FUN6("");
        FUN7(VAR2->VAR10, NULL, NULL, VAR12, VAR2);
    }
    else if (FUN5(*VAR5, VAR13))
    {
        FUN6("");
        return -1;
    }
    else if (FUN5(*VAR5, VAR14))
    {
        FUN6("");
        FUN8(VAR2);
        return -1;
    }
    else
    {
        FUN6("");
        return -1;
    }
    return 0;
}