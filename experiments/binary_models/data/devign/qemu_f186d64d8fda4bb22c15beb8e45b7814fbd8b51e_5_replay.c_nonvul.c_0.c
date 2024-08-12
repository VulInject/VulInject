void FUN1(void)
{
    if (VAR1 == VAR2)
    {
        FUN2();
        if (VAR3.VAR4 > 0)
        {
            int VAR5 = (int)(FUN3() - VAR3.VAR6);
            VAR3.VAR4 -= VAR5;
            VAR3.VAR6 += VAR5;
            if (VAR3.VAR4 == 0)
            {
                assert(VAR3.VAR7 == VAR8);
                FUN4();
                FUN5();
            }
        }
        FUN6();
    }
}