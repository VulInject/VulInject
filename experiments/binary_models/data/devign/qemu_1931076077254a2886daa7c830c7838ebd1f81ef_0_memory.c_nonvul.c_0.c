void FUN1(void)
{
    if (!FUN2())
    {
        if (VAR1)
        {
            return;
        }
        VAR1 = FUN3(VAR2, NULL);
        return;
    }
    FUN4();
}