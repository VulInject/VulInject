static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    struct sockaddr_in VAR4;
    socklen_t VAR5 = sizeof(VAR4);
    FUN2();
    int VAR6 = FUN3(VAR3->VAR7, (struct VAR8 *)&VAR4, &VAR5);
    if (VAR6 != -1)
    {
        FUN4(VAR3, VAR6, 0);
    }
}