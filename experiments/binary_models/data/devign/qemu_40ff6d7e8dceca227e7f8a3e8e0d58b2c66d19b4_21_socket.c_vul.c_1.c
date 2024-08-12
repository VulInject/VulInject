static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    struct sockaddr_in VAR12;
    if (FUN2(&VAR12, VAR5) < 0)
        return -1;
    VAR8 = socket(VAR13, VAR14, 0);
    if (VAR8 < 0)
    {
        FUN3("");
        return -1;
    }
    FUN4(VAR8);
    VAR9 = 0;
    for (;;)
    {
        VAR10 = connect(VAR8, (struct VAR15 *)&VAR12, sizeof(VAR12));
        if (VAR10 < 0)
        {
            VAR11 = FUN5();
            if (VAR11 == VAR16 || VAR11 == VAR17)
            {
            }
            else if (VAR11 == VAR18)
            {
                break;
            }
            else if (VAR11 == VAR19)
            {
                break;
            }
            else
            {
                FUN3("");
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
    snprintf(VAR7->VAR20.VAR21, sizeof(VAR7->VAR20.VAR21), "", FUN8(VAR12.VAR22), FUN9(VAR12.VAR23));
    return 0;
}