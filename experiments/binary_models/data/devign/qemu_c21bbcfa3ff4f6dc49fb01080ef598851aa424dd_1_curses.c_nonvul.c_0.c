static void FUN1(void)
{
    if (FUN2())
    {
        VAR1 = VAR2;
        VAR3 = VAR4;
    }
    else
    {
        VAR1 = VAR5;
        VAR3 = VAR6;
    }
    if (VAR7)
        FUN3(VAR7);
    FUN4();
    FUN5();
    VAR7 = FUN6(VAR3, VAR1);
    if (VAR1 > VAR5)
    {
        VAR8 = (VAR1 - VAR5) / 2;
        VAR9 = 0;
        VAR10 = VAR5;
    }
    else
    {
        VAR8 = 0;
        VAR9 = (VAR5 - VAR1) / 2;
        VAR10 = VAR9 + VAR1;
    }
    if (VAR3 > VAR6)
    {
        VAR11 = (VAR3 - VAR6) / 2;
        VAR12 = 0;
        VAR13 = VAR6;
    }
    else
    {
        VAR11 = 0;
        VAR12 = (VAR6 - VAR3) / 2;
        VAR13 = VAR12 + VAR3;
    }
}