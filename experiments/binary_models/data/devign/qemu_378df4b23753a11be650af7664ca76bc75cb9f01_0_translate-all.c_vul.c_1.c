static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    int VAR6;
    VAR6 = VAR2->VAR7;
    VAR2->VAR7 |= VAR3;
    if (!FUN3(VAR5))
    {
        FUN4(VAR5);
        return;
    }
    if (VAR8)
    {
        VAR2->VAR9.VAR10.VAR11 = 0xffff;
        if (!FUN5(VAR2) && (VAR3 & ~VAR6) != 0)
        {
            FUN6(VAR2, "");
        }
    }
    else
    {
        FUN7(VAR5);
    }
}