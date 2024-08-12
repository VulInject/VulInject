int FUN1(int socket, int VAR1)
{
    return FUN2(socket, VAR2, &VAR1);
    if (VAR1)
        return FUN3(socket, VAR3, FUN3(socket, VAR4) | VAR5);
    else
        return FUN3(socket, VAR3, FUN3(socket, VAR4) & ~VAR5);
}