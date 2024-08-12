static void FUN1(void)
{
    VAR1 *VAR2;
    struct sockaddr_in VAR3;
    socklen_t VAR4;
    int VAR5, VAR6;
    for (;;)
    {
        VAR4 = sizeof(VAR3);
        VAR6 = FUN2(VAR7, (struct VAR3 *)&VAR3, &VAR4);
        if (VAR6 < 0 && VAR8 != VAR9)
        {
            FUN3("");
            return;
        }
        else if (VAR6 >= 0)
        {
            break;
        }
    }
    VAR5 = 1;
    FUN4(VAR6, VAR10, VAR11, (char *)&VAR5, sizeof(VAR5));
    VAR2 = FUN5(sizeof(VAR1));
    VAR2->VAR12 = VAR13;
    VAR2->VAR14 = VAR13;
    VAR2->VAR6 = VAR6;
    VAR15 = 0;
    VAR16 = VAR2;
    FUN6(VAR6, VAR17, VAR18);