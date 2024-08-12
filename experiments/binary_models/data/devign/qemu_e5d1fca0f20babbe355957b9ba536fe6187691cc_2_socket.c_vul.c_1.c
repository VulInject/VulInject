static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    struct sockaddr_in VAR6;
    socklen_t VAR7;
    int VAR8;
    for (;;)
    {
        VAR7 = sizeof(VAR6);
        VAR8 = FUN2(VAR3->VAR8, (struct VAR9 *)&VAR6, &VAR7);
        if (VAR8 < 0 && VAR10 != VAR11)
        {
            return;
        }
        else if (VAR8 >= 0)
        {
            break;
        }
    }
    VAR5 = FUN3(VAR3->VAR12, VAR3->VAR13, VAR3->VAR14, VAR8, 1);
    if (!VAR5)
    {
        FUN4(VAR8);
    }
    else
    {
        snprintf(VAR5->VAR15.VAR16, sizeof(VAR5->VAR15.VAR16), "", FUN5(VAR6.VAR17), FUN6(VAR6.VAR18));
    }
}