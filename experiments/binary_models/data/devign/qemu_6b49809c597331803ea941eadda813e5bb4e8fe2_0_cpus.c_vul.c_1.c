void FUN1(void)
{
    if (!FUN2())
    {
        FUN3(&VAR1);
    }
    else
    {
        VAR2 = true;
        if (FUN4(&VAR1))
        {
            FUN5(VAR3);
            FUN3(&VAR1);
        }
        VAR2 = false;
        FUN6(&VAR4);
    }
}