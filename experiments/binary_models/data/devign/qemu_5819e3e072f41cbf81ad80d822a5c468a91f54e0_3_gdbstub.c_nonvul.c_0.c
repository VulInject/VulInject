static void FUN1(void)
{
    VAR1 *VAR2;
    struct sockaddr_in VAR3;
    socklen_t VAR4;
    int VAR5;
    for (;;)
    {
        VAR4 = sizeof(VAR3);
        VAR5 = FUN2(VAR6, (struct VAR3 *)&VAR3, &VAR4);
        if (VAR5 < 0 && VAR7 != VAR8)
        {
            FUN3("");
            return;
        }
        else if (VAR5 >= 0)
        {
            FUN4(VAR5, VAR9, VAR10);
            break;
        }
    }
    FUN5(VAR5);
    VAR2 = FUN6(sizeof(VAR1));
    VAR2->VAR11 = VAR12;
    VAR2->VAR13 = VAR12;
    VAR2->VAR5 = VAR5;
    VAR14 = false;
    VAR15 = VAR2;
}