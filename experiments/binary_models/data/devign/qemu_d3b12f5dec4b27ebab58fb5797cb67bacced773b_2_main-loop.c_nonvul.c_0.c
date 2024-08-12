static void FUN1(void *VAR1)
{
    int VAR2 = (VAR3)VAR1;
    struct qemu_signalfd_siginfo VAR4;
    struct sigaction VAR5;
    ssize_t VAR6;
    while (1)
    {
        do
        {
            VAR6 = read(VAR2, &VAR4, sizeof(VAR4));
        } while (VAR6 == -1 && VAR7 == VAR8);
        if (VAR6 == -1 && VAR7 == VAR9)
        {
            break;
        }
        if (VAR6 != sizeof(VAR4))
        {
            FUN2("", VAR6);
            return;
        }
        FUN3(VAR4.VAR10, NULL, &VAR5);
        if ((VAR5.VAR11 & VAR12) && VAR5.VAR13)
        {
            VAR5.FUN4(VAR4.VAR10, (VAR14 *)&VAR4, NULL);
        }
        else if (VAR5.VAR15)
        {
            VAR5.FUN5(VAR4.VAR10);
        }
    }
}