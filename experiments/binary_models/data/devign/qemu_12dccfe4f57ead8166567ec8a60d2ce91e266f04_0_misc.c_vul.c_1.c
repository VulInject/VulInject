FUN1(struct socket *VAR1, const char *VAR2, int VAR3)
{
    int VAR4;
    struct sockaddr_in VAR5;
    socklen_t VAR6 = sizeof(VAR5);
    int VAR7;
    const char *argv[256];
    char *VAR8;
    const char *VAR9;
    int VAR10, VAR11, VAR12;
    pid_t VAR13;
    FUN2("");
    FUN3("", VAR1);
    FUN3("", VAR2);
    FUN3("", VAR3);
    if (VAR3 == 2)
    {
        return 0;
    }
    else
    {
        VAR5.VAR14 = VAR15;
        VAR5.VAR16 = 0;
        VAR5.VAR17.VAR18 = VAR19;
        if ((VAR4 = FUN4(VAR15, VAR20, 0)) < 0 || FUN5(VAR4, (struct VAR21 *)&VAR5, VAR6) < 0 || FUN6(VAR4, 1) < 0)
        {
            FUN7("", strerror(VAR22));
            FUN8(VAR4);
            return 0;
        }
    }
    VAR13 = FUN9();
    switch (VAR13)
    {
    case -1:
        FUN7("", strerror(VAR22));
        close(VAR4);
        return 0;
    case 0:
        FUN10();
        FUN11(VAR4, (struct VAR21 *)&VAR5, &VAR6);
        close(VAR4);
        VAR4 = FUN4(VAR15, VAR20, 0);
        VAR5.VAR17 = VAR23;
        do
        {
            VAR12 = connect(VAR4, (struct VAR21 *)&VAR5, VAR6);
        } while (VAR12 < 0 && VAR22 == VAR24);
        FUN12(VAR4, 0);
        FUN12(VAR4, 1);
        FUN12(VAR4, 2);
        for (VAR4 = FUN13() - 1; VAR4 >= 3; VAR4--)
            close(VAR4);
        VAR11 = 0;
        VAR8 = FUN14(VAR2);
        if (VAR3 == 1)
        {
            argv[VAR11++] = "";
            argv[VAR11++] = "";
            argv[VAR11++] = VAR8;
        }
        else
            do
            {
                VAR9 = VAR8;
                while (*VAR8 != '' && *VAR8 != (char)0)
                    VAR8++;
                VAR10 = *VAR8;
                *VAR8++ = (char)0;
                argv[VAR11++] = FUN14(VAR9);
            } while (VAR10);
        argv[VAR11] = NULL;
        execvp(argv[0], (char **)argv);
        fprintf(VAR25, "", argv[0], strerror(VAR22));
        close(0);
        close(1);
        close(2);
        FUN15(1);
    default:
        FUN16(VAR13);
        do
        {
            VAR1->VAR4 = FUN17(VAR4, (struct VAR21 *)&VAR5, &VAR6);
        } while (VAR1->VAR4 < 0 && VAR22 == VAR24);
        FUN8(VAR4);
        FUN18(VAR1->VAR4);
        VAR7 = 1;
        FUN19(VAR1->VAR4, VAR26, VAR27, &VAR7, sizeof(int));
        FUN20(VAR1->VAR4);
        if (VAR1->VAR28 != NULL && VAR3 == 1)
        {
            FUN21(VAR1, VAR1->VAR28);
            VAR1->VAR28 = NULL;
        }
        return 1;
    }
}