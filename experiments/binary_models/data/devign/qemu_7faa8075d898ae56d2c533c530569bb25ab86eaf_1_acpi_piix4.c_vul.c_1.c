static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = FUN2(&VAR4->VAR7);
    VAR8 *VAR7, *VAR9;
    VAR2->VAR10 = ~0;
    FUN3(VAR7, &VAR6->VAR11, VAR12, VAR9)
    {
        VAR3 *VAR13 = FUN4(VAR7);
        VAR14 *VAR15 = FUN5(VAR13);
        int VAR16 = FUN6(VAR13->VAR17);
        if (VAR15->VAR18)
        {
            VAR2->VAR10 &= ~(1 << VAR16);
        }
    }
}