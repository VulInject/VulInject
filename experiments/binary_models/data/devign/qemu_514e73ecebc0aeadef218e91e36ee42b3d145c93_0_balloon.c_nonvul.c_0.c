int FUN1(VAR1 *VAR2, const VAR3 *VAR4, MonitorCompletion VAR5, void *VAR6)
{
    int64_t VAR7;
    int VAR8;
    if (FUN2() && !FUN3())
    {
        FUN4(VAR9, "", "");
        return -1;
    }
    VAR7 = FUN5(VAR4, "");
    if (VAR7 <= 0)
    {
        FUN4(VAR10, "", "");
        return -1;
    }
    VAR8 = FUN6(VAR7);
    if (VAR8 == 0)
    {
        FUN4(VAR11, "");
        return -1;
    }
    FUN7(VAR6, NULL);
    return 0;
}