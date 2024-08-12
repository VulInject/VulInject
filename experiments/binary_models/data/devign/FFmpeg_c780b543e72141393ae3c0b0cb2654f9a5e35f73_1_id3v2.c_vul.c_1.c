void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = *VAR2, *VAR4;
    void (*VAR5)(VAR1 *);
    while (VAR3)
    {
        if ((VAR5 = FUN2(VAR3->VAR6, 1)->free))
            FUN3(VAR3->VAR7);
        VAR4 = VAR3->VAR4;
        FUN4(&VAR3);
        VAR3 = VAR4;
    }
}