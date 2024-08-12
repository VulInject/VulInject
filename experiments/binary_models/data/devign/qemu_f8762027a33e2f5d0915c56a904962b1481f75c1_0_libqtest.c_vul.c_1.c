static int FUN1(int VAR1)
{
    struct sockaddr_un VAR2;
    socklen_t VAR3;
    int VAR4;
    VAR3 = sizeof(VAR2);
    do
    {
        VAR4 = FUN2(VAR1, (struct VAR5 *)&VAR2, &VAR3);
    } while (VAR4 == -1 && VAR6 == VAR7);
    FUN3(VAR4);
    close(VAR1);
    return VAR4;
}