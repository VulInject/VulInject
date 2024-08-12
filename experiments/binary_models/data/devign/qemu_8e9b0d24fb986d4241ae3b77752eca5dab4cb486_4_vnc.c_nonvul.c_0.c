static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4.VAR5 && VAR3->VAR4.VAR6 && !VAR3->VAR4.VAR7)
    {
        FUN2(VAR3);
    }
    else
    {
        if (VAR3->VAR8)
        {
            FUN3(VAR3);
        }
        else
        {
            FUN4(VAR3);
        }
    }
}