int FUN1(VAR1 *VAR2, const VAR3 *VAR4, MonitorCompletion VAR5, void *VAR6)
{
    int VAR7;
    if (FUN2() && !FUN3())
    {
        FUN4(VAR8, "", "");
        return -1;
    }
    VAR7 = FUN5(FUN6(VAR4, ""), VAR5, VAR6);
    if (VAR7 == 0)
    {
        FUN4(VAR9, "");
        return -1;
    }
    FUN7(VAR6, NULL);
    return 0;
}