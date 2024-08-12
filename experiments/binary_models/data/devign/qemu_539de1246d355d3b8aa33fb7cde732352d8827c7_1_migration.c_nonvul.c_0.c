static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    if (VAR3->VAR5 != VAR6)
    {
        FUN2("");
        return;
    }
    FUN2("");
    VAR4 = FUN3(VAR3->VAR7);
    if (VAR4 < 0)
    {
        FUN4(VAR3);
    }
    else if (VAR4 == 1)
    {
        int VAR8 = FUN5();
        FUN2("");
        FUN6(VAR9);
        if (FUN7(VAR3->VAR7) < 0)
        {
            FUN4(VAR3);
        }
        else
        {
            FUN8(VAR3);
        }
        if (VAR3->VAR5 != VAR10)
        {
            if (VAR8)
            {
                FUN9();
            }
        }
    }
}