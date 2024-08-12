static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    struct sockaddr_in VAR4;
    socklen_t VAR5;
    int VAR6;
    for (;;)
    {
        VAR5 = sizeof(VAR4);
        VAR6 = FUN2(VAR3->VAR7, (struct VAR8 *)&VAR4, &VAR5);
        if (VAR6 < 0 && VAR9 != VAR10)
        {
            return;
        }
        else if (VAR6 >= 0)
        {
            FUN3(VAR3->VAR7, NULL, NULL, NULL);
            break;
        }
    }
    VAR3->VAR6 = VAR6;
    VAR3->VAR11.VAR12 = false;
    FUN4(VAR3);
    snprintf(VAR3->VAR11.VAR13, sizeof(VAR3->VAR11.VAR13), "", FUN5(VAR4.VAR14), FUN6(VAR4.VAR15));
}