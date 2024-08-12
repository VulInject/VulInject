static void FUN1(void *VAR1, bool VAR2)
{
    VAR3 *VAR4 = VAR1;
    struct sockaddr_in VAR5;
    socklen_t VAR6 = sizeof(VAR5);
    int VAR7;
    FUN2(VAR4->VAR8.VAR9);
    if (VAR2)
    {
        VAR7 = FUN3(VAR4->VAR10, (struct VAR11 *)&VAR5, &VAR6);
    }
    else
    {
        VAR7 = FUN3(VAR4->VAR12, (struct VAR11 *)&VAR5, &VAR6);
    }
    if (VAR7 != -1)
    {
        FUN4(VAR7);
        FUN5(VAR4, VAR7, false, VAR2);
    }
}