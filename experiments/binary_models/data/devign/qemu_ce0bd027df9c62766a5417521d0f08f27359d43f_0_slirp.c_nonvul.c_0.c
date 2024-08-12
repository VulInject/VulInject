static void FUN1(void)
{
    static int VAR1;
    WSADATA VAR2;
    if (VAR1)
    {
        return;
    }
    VAR1 = 1;
    FUN2(FUN3(2, 0), &VAR2);
    FUN4(VAR3);
    VAR4.VAR5 = FUN5(VAR6);
    if (FUN6(&VAR7) < 0)
    {
        VAR7 = VAR4;
    }
}