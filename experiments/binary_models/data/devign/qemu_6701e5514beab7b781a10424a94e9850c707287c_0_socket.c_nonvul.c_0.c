static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    struct sockaddr_in VAR11;
    if (FUN2(&VAR11, VAR5) < 0)
        return -1;
    VAR8 = FUN3(VAR12, VAR13, 0);
    if (VAR8 < 0)
    {
        FUN4("");
        return -1;
    }
    FUN5(VAR8);
    VAR9 = 0;
    for (;;)
    {
        VAR10 = connect(VAR8, (struct VAR14 *)&VAR11, sizeof(VAR11));
        if (VAR10 < 0)
        {
            if (VAR15 == VAR16 || VAR15 == VAR17)
            {
            }
            else if (VAR15 == VAR18 || VAR15 == VAR19 || VAR15 == VAR20)
            {
                break;
            }
            else
            {
                FUN4("");
                FUN6(VAR8);
                return -1;
            }
        }
        else
        {
            VAR9 = 1;
            break;
        }
    }
    VAR7 = FUN7(VAR2, VAR3, VAR4, VAR8, VAR9);
    if (!VAR7)
        return -1;
    snprintf(VAR7->VAR21.VAR22, sizeof(VAR7->VAR21.VAR22), "", FUN8(VAR11.VAR23), FUN9(VAR11.VAR24));
    return 0;
}