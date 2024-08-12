static void FUN1(void)
{
    if (VAR1)
    {
        FUN2();
        FUN3(VAR1);
        VAR1 = NULL;
    }
    if (VAR2.VAR3)
    {
        FUN4(VAR2.VAR3);
        FUN3(VAR2.VAR3);
        FUN3(VAR2.VAR4);
        FUN3(VAR2.VAR5);
        FUN3(VAR2.VAR6);
        VAR2.VAR3 = NULL;
    }