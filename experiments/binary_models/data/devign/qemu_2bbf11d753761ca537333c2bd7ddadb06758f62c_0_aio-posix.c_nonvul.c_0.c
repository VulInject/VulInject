static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    struct epoll_event VAR5;
    FUN2(VAR4, &VAR2->VAR6, VAR4)
    {
        int VAR7;
        if (VAR4->VAR8 || !VAR4->VAR9.VAR10)
        {
            continue;
        }
        VAR5.VAR10 = FUN3(VAR4->VAR9.VAR10);
        VAR5.VAR11.VAR12 = VAR4;
        VAR7 = FUN4(VAR2->VAR13, VAR14, VAR4->VAR9.VAR15, &VAR5);
        if (VAR7)
        {
            return false;
        }
    }
    VAR2->VAR16 = true;
    return true;
}