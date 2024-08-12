static void FUN1(VAR1 *VAR2)
{
    hwaddr VAR3;
    uint32_t VAR4, VAR5;
    if (VAR2->VAR6 & VAR7)
    {
        FUN2(VAR2, 2, "", VAR8, VAR2->VAR9);
        FUN3(VAR2, VAR2->VAR9);
        return;
    }
    for (;;)
    {
        if (!(VAR2->VAR10 & VAR11))
        {
            FUN2(VAR2, 2, "", VAR8);
            return;
        }
        if ((VAR2->VAR12 & 0xff) == VAR2->VAR13)
        {
            FUN2(VAR2, 2, "", VAR8);
            return;
        }
        if (VAR2->VAR14 == VAR2->VAR15)
        {
            FUN2(VAR2, 2, "", VAR8);
            return;
        }
        VAR4 = (VAR2->VAR12 + 1) & 0xff;
        VAR3 = FUN4(VAR2->VAR16, VAR2->VAR17);
        VAR5 = FUN5(&VAR2->VAR18, VAR3 + 4 * VAR4);
        VAR2->VAR12 = VAR4;
        FUN2(VAR2, 2, "", VAR8, VAR4, VAR5);
        FUN3(VAR2, VAR5);
    }
}