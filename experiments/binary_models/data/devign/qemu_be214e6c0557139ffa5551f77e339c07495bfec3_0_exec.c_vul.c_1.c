void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    static spinlock_t VAR6 = VAR7;
    int VAR8;
    VAR8 = VAR2->VAR9;
    VAR2->VAR9 |= VAR3;
    if (VAR10)
    {
        VAR2->VAR11.VAR12.VAR13 = 0xffff;
        if (!FUN2(VAR2) && (VAR3 & ~(VAR8 | VAR14)) != 0)
        {
            FUN3(VAR2, "");
        }
    }
    else
    {
        VAR5 = VAR2->VAR15;
        if (VAR5 && !FUN4(&VAR6))
        {
            VAR2->VAR15 = NULL;
            FUN5(VAR5);
            FUN6(&VAR6);
        }
    }
}