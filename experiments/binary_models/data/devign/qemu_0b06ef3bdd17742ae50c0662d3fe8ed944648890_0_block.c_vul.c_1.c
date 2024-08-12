void FUN1(void)
{
    bool VAR1 = true;
    VAR2 *VAR3;
    while (VAR1)
    {
        FUN2(VAR3, &VAR4, VAR5)
        {
            if (FUN3(VAR3))
            {
                VAR1 = true;
            }
        }
        VAR1 = FUN4();
        VAR1 |= FUN5(FUN6(), VAR1);
    }
}