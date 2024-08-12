static void FUN1(int VAR1, int VAR2)
{
    TCGv VAR3;
    if (VAR1 == 31)
    {
        VAR3 = FUN2(0);
    }
    else
    {
        VAR3 = VAR4[VAR1];
    }
    if (VAR2 == 255)
    {
        FUN3();
    }
    else if (VAR2 == 254)
    {
        FUN4(VAR3);
    }
    else
    {
        int VAR5 = FUN5(VAR2);
        if (VAR5 != 0)
        {
            if (VAR5 & VAR6)
            {
                FUN6(VAR3, VAR7, VAR5 & ~VAR6);
            }
            else if (VAR5 & VAR8)
            {
                FUN7(VAR3, VAR7, VAR5 & ~VAR8);
            }
            else
            {
                FUN8(VAR3, VAR7, VAR5);
            }
        }
    }
    if (VAR1 == 31)
    {
        FUN9(VAR3);
    }
}