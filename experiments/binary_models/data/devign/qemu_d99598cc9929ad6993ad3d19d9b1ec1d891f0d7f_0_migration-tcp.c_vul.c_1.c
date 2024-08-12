static void FUN1(void *VAR1)
{
    struct sockaddr_in VAR2;
    socklen_t VAR3 = sizeof(VAR2);
    int VAR4 = (VAR5)VAR1;
    VAR6 *VAR7;
    int VAR8;
    do
    {
        VAR8 = FUN2(VAR4, (struct VAR9 *)&VAR2, &VAR3);
    } while (VAR8 == -1 && FUN3() == VAR10);
    FUN4(VAR4, NULL, NULL, NULL, NULL);
    FUN5(VAR4);
    FUN6("");
    if (VAR8 == -1)
    {
        fprintf(VAR11, "");
        goto VAR12;
    }
    VAR7 = FUN7(VAR8, "");
    if (VAR7 == NULL)
    {
        fprintf(VAR11, "");
        goto VAR12;
    }
    FUN8(VAR7);
    return;
VAR12:
    FUN5(VAR8);
}