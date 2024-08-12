static void FUN1(int VAR1, int VAR2)
{
    struct sockaddr_in VAR3;
    int VAR4, VAR5;
    VAR6 *VAR7 = NULL;
    VAR5 = sizeof(VAR3);
    VAR4 = FUN2(VAR1, (struct VAR8 *)&VAR3, &VAR5);
    if (VAR4 < 0)
        return;
    FUN3(VAR4, VAR9, VAR10);
    if (VAR11 >= VAR12)
        goto VAR13;
    VAR7 = FUN4(sizeof(VAR6));
    if (!VAR7)
        goto VAR13;
    VAR7->VAR14 = VAR15;
    VAR15 = VAR7;
    VAR7->VAR4 = VAR4;
    VAR7->VAR16 = NULL;
    VAR7->VAR3 = VAR3;
    VAR7->VAR17 = VAR18;
    VAR7->VAR19 = FUN5(VAR7->VAR17);
    if (!VAR7->VAR19)
        goto VAR13;
    VAR11++;
    FUN6(VAR7, VAR2);
    return;
VAR13:
    if (VAR7)
    {
        FUN7(VAR7->VAR19);
        FUN7(VAR7);
    }
    close(VAR4);
}