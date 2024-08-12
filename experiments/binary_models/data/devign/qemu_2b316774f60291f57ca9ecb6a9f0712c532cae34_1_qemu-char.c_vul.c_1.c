static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6 >= 0)
    {
        if (VAR4->VAR7)
        {
            FUN2(VAR4->VAR7);
            VAR4->VAR7 = 0;
        }
        if (VAR4->VAR8)
        {
            FUN3(VAR4->VAR8);
        }
        FUN4(VAR4->VAR6);
    }
    if (VAR4->VAR9 >= 0)
    {
        if (VAR4->VAR10)
        {
            FUN2(VAR4->VAR10);
            VAR4->VAR10 = 0;
        }
        if (VAR4->VAR11)
        {
            FUN3(VAR4->VAR11);
        }
        FUN4(VAR4->VAR9);
    }
    FUN5(VAR4);
    FUN6(VAR2, VAR12);
}