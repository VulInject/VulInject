void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    VAR4 = VAR2->VAR5;
    VAR2->VAR5 |= VAR3;
    if (!FUN2(VAR2))
    {
        FUN3(VAR2);
        return;
    }
    if (VAR6)
    {
        VAR2->VAR7.VAR8.VAR9 = 0xffff;
        if (!FUN4(VAR2) && (VAR3 & ~VAR4) != 0)
        {
            FUN5(VAR2, "");
        }
    }
    else
    {
        FUN6(VAR2);
    }
}