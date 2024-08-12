void FUN1(void)
{
    VAR1 *VAR2 = VAR3;
    FUN2();
    if (VAR2)
    {
        FUN3(VAR2);
    }
    if (VAR4 && VAR2 != VAR4)
    {
        FUN3(VAR4);
    }
    VAR5 = 1;
}