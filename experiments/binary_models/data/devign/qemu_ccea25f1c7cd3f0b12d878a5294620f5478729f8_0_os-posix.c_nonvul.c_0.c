void FUN1(void)
{
    if (VAR1)
    {
        pid_t VAR2;
        int VAR3[2];
        if (FUN2(VAR3) == -1)
        {
            FUN3(1);
        }
        VAR2 = FUN4();
        if (VAR2 > 0)
        {
            uint8_t VAR4;
            ssize_t VAR5;
            close(VAR3[1]);
            do
            {
                VAR5 = read(VAR3[0], &VAR4, 1);
            } while (VAR5 < 0 && VAR6 == VAR7);
            if (VAR5 != 1)
            {
                FUN3(1);
            }
            else if (VAR4 == 1)
            {
                fprintf(VAR8, "");
                FUN3(1);
            }
            else
            {
                FUN3(0);
            }
        }
        else if (VAR2 < 0)
        {
            FUN3(1);
        }
        close(VAR3[0]);
        VAR9 = VAR3[1];
        FUN5(VAR9);
        FUN6();
        VAR2 = FUN4();
        if (VAR2 > 0)
        {
            FUN3(0);
        }
        else if (VAR2 < 0)
        {
            FUN3(1);
        }
        FUN7(027);
        signal(VAR10, VAR11);
        signal(VAR12, VAR11);
        signal(VAR13, VAR11);
    }
}