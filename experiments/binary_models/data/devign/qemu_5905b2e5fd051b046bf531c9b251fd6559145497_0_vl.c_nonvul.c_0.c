int FUN1(void)
{
    int VAR1, VAR2;
    VAR3 *VAR4 = VAR5;
    for (;;)
    {
        if (VAR6)
        {
            VAR1 = FUN2(VAR4);
            if (VAR7)
            {
                VAR1 = VAR8;
                break;
            }
            if (VAR9)
            {
                VAR9 = 0;
                FUN3();
                VAR1 = VAR8;
            }
            if (VAR1 == VAR10)
            {
                FUN4(VAR10);
            }
            if (VAR1 == VAR11)
                VAR2 = 10;
            else
                VAR2 = 0;
        }
        else
        {
            VAR2 = 10;
        }
        FUN5(VAR2);
    }
    FUN6();
    return VAR1;
}