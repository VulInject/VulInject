static void FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    VAR3 = VAR2->VAR3;
    if (VAR3 != -VAR4)
    {
        if (VAR3 == VAR2->VAR5)
        {
            VAR3 = 0;
        }
        else if (VAR3 >= 0)
        {
            if (VAR2->VAR6)
            {
                FUN2(VAR2->VAR7, VAR3, 0, VAR2->VAR7->VAR8 - VAR3);
            }
            else
            {
                VAR3 = -VAR9;
            }
        }
    }
    VAR2->VAR3 = VAR3;
    if (VAR2->VAR10)
    {
        if (VAR2->VAR10 != FUN3())
        {
            FUN4(VAR2->VAR10);
        }
    }
    else
    {
        VAR2->VAR11.FUN5(VAR2->VAR11.VAR12, VAR3);
        FUN6(VAR2);
    }
}