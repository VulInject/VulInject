void FUN1(void)
{
    if (VAR1)
    {
        if (!VAR2.VAR3)
        {
            VAR2.VAR4 = FUN2();
            if (VAR2.VAR4 == VAR5)
            {
                VAR2.VAR6 = FUN3();
            }
            FUN4();
            VAR2.VAR3 = 1;
            if (VAR2.VAR4 >= VAR7)
            {
                FUN5("", VAR2.VAR4);
                FUN6(1);
            }
        }
    }
}