static int FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4, VAR5, VAR6;
    int64_t VAR7;
    const char *VAR8 = NULL;
    VAR4 = FUN2(VAR2, "", -1);
    VAR7 = FUN2(VAR2, "", -1);
    VAR8 = FUN3(VAR2, "");
    if (VAR4 < 0)
    {
        FUN4(VAR9, "");
        return -1;
    }
    if (VAR4 <= VAR10)
    {
        FUN4(VAR9, "");
        return -1;
    }
    VAR6 = FUN5(VAR4, VAR11);
    if (VAR6 == -1 || (VAR6 & VAR12))
    {
        FUN4(VAR9, "");
        return -1;
    }
    if (VAR7 < 0)
    {
        FUN4(VAR9, "");
        return -1;
    }
    VAR5 = FUN5(VAR4, VAR13, 0);
    VAR5 = FUN6(VAR4);
    if (VAR5 != -1)
    {
        FUN7(VAR5);
    }
    if (VAR5 == -1)
    {
        FUN4(VAR9, "", strerror(VAR14));
        return -1;
    }
    FUN8(VAR5, true, VAR7, VAR8 ? true : false, VAR8, NULL);
    return 0;
}