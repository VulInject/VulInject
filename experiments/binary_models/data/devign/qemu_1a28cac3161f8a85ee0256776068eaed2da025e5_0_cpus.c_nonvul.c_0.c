void FUN1(void)
{
    if (FUN2())
    {
        FUN3(&VAR1);
        FUN3(&VAR2);
        FUN4(&VAR1);
    }
    else
    {
        FUN3(&VAR1);
        if (FUN5(&VAR2))
        {
            FUN6(VAR3, VAR4);
            FUN3(&VAR2);
        }
        FUN4(&VAR1);
    }
}