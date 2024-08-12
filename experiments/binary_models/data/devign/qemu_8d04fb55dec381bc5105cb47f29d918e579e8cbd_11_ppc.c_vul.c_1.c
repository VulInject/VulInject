void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR2->VAR8;
    unsigned int VAR9 = VAR8->VAR10;
    if (VAR4)
    {
        VAR8->VAR10 |= 1 << VAR3;
        FUN3(VAR6, VAR11);
    }
    else
    {
        VAR8->VAR10 &= ~(1 << VAR3);
        if (VAR8->VAR10 == 0)
        {
            FUN4(VAR6, VAR11);
        }
    }
    if (VAR9 != VAR8->VAR10)
    {
        FUN5(VAR2, VAR3, VAR4);
    }
    FUN6("" VAR12 "", VAR13, VAR8, VAR3, VAR4, VAR8->VAR10, FUN2(VAR2)->VAR14);
}