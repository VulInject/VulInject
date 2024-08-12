static void FUN1(void *VAR1)
{
    int VAR2 = (VAR3)VAR1;
    struct sockaddr_in VAR4;
    socklen_t VAR5 = sizeof(VAR4);
    int VAR6 = FUN2(VAR2, (struct VAR7 *)&VAR4, &VAR5);
    if (VAR8 >= VAR9)
    {
        close(VAR6);
        return;
    }
    if (VAR6 >= 0 && FUN3(VAR10, VAR6, VAR11))
    {
        VAR12++;
    }
}