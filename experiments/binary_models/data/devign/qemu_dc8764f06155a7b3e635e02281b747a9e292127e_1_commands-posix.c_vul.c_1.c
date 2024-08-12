static void FUN1(const char *VAR1, const char *VAR2, const char *VAR3, VAR4 **VAR5)
{
    pid_t VAR6;
    ssize_t VAR7;
    char *VAR8;
    int VAR9, VAR10[2];
    if (FUN2(VAR10) < 0)
    {
        FUN3(VAR5, VAR11);
        return;
    }
    VAR8 = FUN4(VAR1);
    VAR6 = FUN5();
    if (!VAR6)
    {
        struct sigaction VAR12;
        memset(&VAR12, 0, sizeof(VAR12));
        VAR12.VAR13 = VAR14;
        FUN6(VAR15, &VAR12, NULL);
        FUN7();
        close(VAR10[0]);
        FUN8(0);
        FUN8(1);
        FUN8(2);
        VAR6 = FUN5();
        if (!VAR6)
        {
            int VAR16;
            char VAR17[32];
            if (VAR8)
            {
                execle(VAR8, VAR1, VAR2, NULL, VAR18);
            }
            if (!VAR3)
            {
                FUN9(VAR19);
            }
            VAR16 = open(VAR20, VAR21);
            if (VAR16 < 0)
            {
                FUN9(VAR19);
            }
            VAR7 = read(VAR16, VAR17, sizeof(VAR17) - 1);
            if (VAR7 <= 0)
            {
                FUN9(VAR19);
            }
            VAR17[VAR7] = '';
            if (strstr(VAR17, VAR3))
            {
                FUN9(VAR22);
            }
            FUN9(VAR19);
        }
        if (VAR6 > 0)
        {
            FUN10(&VAR9);
        }
        else
        {
            VAR9 = VAR19;
        }
        VAR7 = write(VAR10[1], &VAR9, sizeof(VAR9));
        if (VAR7 != sizeof(VAR9))
        {
            FUN9(VAR23);
        }
        FUN9(VAR24);
    }
    close(VAR10[1]);
    FUN11(VAR8);
    if (VAR6 < 0)
    {
        FUN3(VAR5, VAR11);
        goto VAR25;
    }
    VAR7 = read(VAR10[0], &VAR9, sizeof(VAR9));
    if (VAR7 == sizeof(VAR9) && FUN12(VAR9) && FUN13(VAR9) == VAR22)
    {
        goto VAR25;
    }
    FUN3(VAR5, VAR26);
VAR25:
    close(VAR10[0]);
}