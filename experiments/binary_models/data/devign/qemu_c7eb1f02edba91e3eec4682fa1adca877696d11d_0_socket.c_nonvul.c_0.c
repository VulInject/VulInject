static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    struct sockaddr_in VAR12;
    if (FUN2(&VAR12, VAR5) < 0)
        return -1;
    VAR8 = FUN3(VAR13, VAR14, 0);
    if (VAR8 < 0)
    {
        FUN4("");
        return -1;
    }
    FUN5(VAR8);
    VAR9 = 0;
    for (;;)
    {
        VAR10 = connect(VAR8, (struct VAR15 *)&VAR12, sizeof(VAR12));
        if (VAR10 < 0)
        {
            VAR11 = FUN6();
            if (VAR11 == VAR16 || VAR11 == VAR17)
            {
            }
            else if (VAR11 == VAR18)
            {
                break;
            }
            else if (VAR11 == VAR19 || VAR11 == VAR20)
            {
                break;
            }
            else
            {
                FUN4("");
                FUN7(VAR8);
                return -1;
            }
        }
        else
        {
            VAR9 = 1;
            break;
        }
    }
    VAR7 = FUN8(VAR2, VAR3, VAR4, VAR8, VAR9);
    if (!VAR7)
        return -1;
    snprintf(VAR7->VAR21.VAR22, sizeof(VAR7->VAR21.VAR22), "", FUN9(VAR12.VAR23), FUN10(VAR12.VAR24));
    return 0;
}