static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR1;
    struct sockaddr_storage VAR6, VAR7;
    socklen_t VAR8 = sizeof(VAR6), VAR9 = sizeof(VAR7);
    memset(&VAR6, 0, VAR8);
    FUN2(VAR3->VAR10);
    if (FUN3(VAR5->VAR11, (struct VAR12 *)&VAR6, &VAR8) != 0)
    {
        VAR3->VAR10 = FUN4("", strerror(VAR13));
    }
    else if (FUN5(VAR5->VAR11, (struct VAR12 *)&VAR7, &VAR9) != 0)
    {
        VAR3->VAR10 = FUN4("", strerror(VAR13));
    }
    else
    {
        VAR3->VAR10 = FUN6(&VAR6, VAR8, &VAR7, VAR9, VAR5->VAR14, VAR5->VAR15);
    }
    VAR5->VAR16 = 1;
    if (VAR5->VAR17)
    {
        VAR3->VAR18 = FUN7(VAR5->VAR17, VAR19, VAR20, VAR3);
    }
    FUN8(VAR3);
}