static int FUN1(VAR1 *VAR2, curl_socket_t VAR3, int VAR4, void *VAR5, void *VAR6)
{
    VAR7 *VAR8 = NULL;
    FUN2(VAR2, VAR9, (char **)&VAR8);
    VAR8->VAR10 = VAR3;
    FUN3("", VAR4, VAR3);
    switch (VAR4)
    {
    case VAR11:
        FUN4(VAR3, VAR12, NULL, VAR8);
        break;
    case VAR13:
        FUN4(VAR3, NULL, VAR14, VAR8);
        break;
    case VAR15:
        FUN4(VAR3, VAR12, VAR14, VAR8);
        break;
    case VAR16:
        FUN4(VAR3, NULL, NULL, NULL);
        break;
    }
    return 0;
}