void FUN1(void)
{
    int VAR1 = 0;
    if (VAR2)
    {
        uint8_t VAR3 = 0;
        ssize_t VAR4;
        do
        {
            VAR4 = write(VAR5, &VAR3, 1);
        } while (VAR4 < 0 && VAR6 == VAR7);
        if (VAR4 != 1)
        {
            FUN2(1);
        }
        if (FUN3(""))
        {
            FUN4("");
            FUN2(1);
        }
        FUN5(VAR1 = FUN6("", VAR8));
        if (VAR1 == -1)
        {
            FUN2(1);
        }
    }
    FUN7();
    FUN8();
    if (VAR2)
    {
        FUN9(VAR1, 0);
        FUN9(VAR1, 1);
        FUN9(VAR1, 2);
        close(VAR1);
    }
}