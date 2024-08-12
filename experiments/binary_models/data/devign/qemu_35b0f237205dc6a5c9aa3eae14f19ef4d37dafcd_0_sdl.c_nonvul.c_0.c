static void FUN1(VAR1 *VAR2, void *VAR3)
{
    if (FUN2())
    {
        if (!VAR4)
        {
            FUN3();
            VAR4 = 1;
        }
    }
    else if (VAR4)
    {
        FUN4();
        VAR4 = 0;
    }
}