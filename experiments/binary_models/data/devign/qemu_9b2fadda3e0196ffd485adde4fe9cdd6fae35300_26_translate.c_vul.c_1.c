static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    if (FUN3(VAR2->VAR4))
    {
        FUN2(VAR2, VAR3);
        return;
    }
    if (VAR2->VAR5 & 0x00008000)
    {
        FUN4(VAR6, VAR6, (1 << VAR7));
        FUN5(VAR2);
    }
    else
    {
        FUN6(VAR6, VAR6, ~(1 << VAR7));
    }
}