static void FUN1(void *VAR1)
{
    struct sockaddr_in VAR2;
    socklen_t VAR3 = sizeof(VAR2);
    int VAR4 = (unsigned long)VAR1;
    VAR5 *VAR6;
    int VAR7, VAR8;
    do
    {
        VAR7 = FUN2(VAR4, (struct VAR9 *)&VAR2, &VAR3);
    } while (VAR7 == -1 && FUN3() == VAR10);
    FUN4("");
    if (VAR7 == -1)
    {
        fprintf(VAR11, "");
        return;
    }
    VAR6 = FUN5(VAR7);
    if (VAR6 == NULL)
    {
        fprintf(VAR11, "");
        goto VAR12;
    }
    VAR8 = FUN6(VAR6);
    if (VAR8 < 0)
    {
        fprintf(VAR11, "");
        goto VAR13;
    }
    FUN7();
    FUN4("");
    if (VAR14)
        FUN8();
VAR13:
    FUN9(VAR6);
VAR12:
    FUN10(VAR4, NULL, NULL, NULL, NULL);
    close(VAR4);
    close(VAR7);
}