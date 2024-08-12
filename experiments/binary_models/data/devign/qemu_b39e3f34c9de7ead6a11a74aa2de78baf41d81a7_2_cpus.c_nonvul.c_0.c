static void FUN1(void)
{
    if (!VAR1 || !VAR2)
    {
        return;
    }
    if (!FUN2())
    {
        return;
    }
    if (!FUN3(VAR3))
    {
        return;
    }
    FUN4(VAR4.VAR5);
    FUN5();
}