static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR1;
    struct sockaddr_in VAR6;
    struct sockaddr_un VAR7;
    struct VAR8 *VAR9;
    socklen_t VAR10;
    int VAR11;
    for (;;)
    {
        if (VAR5->VAR12)
        {
            VAR10 = sizeof(VAR7);
            VAR9 = (struct VAR8 *)&VAR7;
        }
        else
        {
            VAR10 = sizeof(VAR6);
            VAR9 = (struct VAR8 *)&VAR6;
        }
        VAR11 = FUN2(VAR5->VAR13, VAR9, &VAR10);
        if (VAR11 < 0 && VAR14 != VAR15)
        {
            return;
        }
        else if (VAR11 >= 0)
        {
            if (VAR5->VAR16)
                FUN3(VAR11);
            break;
        }
    }
    FUN4(VAR11);
    if (VAR5->VAR17)
        FUN5(VAR11);
    VAR5->VAR11 = VAR11;
    FUN6(VAR5->VAR13, NULL, NULL, NULL);
    FUN7(VAR3);
}