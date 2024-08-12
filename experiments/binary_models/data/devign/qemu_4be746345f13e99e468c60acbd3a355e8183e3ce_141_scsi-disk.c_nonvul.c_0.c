static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2);
    int VAR8;
    int VAR9;
    if (!VAR6->VAR7.VAR10.VAR11)
    {
        FUN3(VAR4, "");
        return;
    }
    VAR9 = FUN4(VAR6->VAR7.VAR10.VAR11, VAR12, &VAR8);
    if (VAR9 < 0)
    {
        FUN3(VAR4, ""
                         "",
                   strerror(-VAR9));
        return;
    }
    if (VAR8 < 30000)
    {
        FUN3(VAR4, "");
        return;
    }
    VAR9 = FUN5(VAR6);
    if (VAR9 < 0)
    {
        FUN3(VAR4, "");
        return;
    }
    if (VAR6->VAR7.VAR13 == VAR14 || VAR6->VAR7.VAR13 == VAR15)
    {
        VAR6->VAR7.VAR16 = 2048;
    }
    else
    {
        VAR6->VAR7.VAR16 = 512;
    }
    VAR6->VAR17 |= (1 << VAR18);
    FUN6(&VAR6->VAR7, VAR4);
}