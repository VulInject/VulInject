void FUN1(hwaddr VAR1, uint32_t VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    hwaddr VAR7 = 4;
    hwaddr VAR8;
    VAR6 = FUN2(&VAR9, VAR1, &VAR8, &VAR7, true);
    if (VAR7 < 4 || !FUN3(VAR6->VAR10) || VAR6->VAR11)
    {
        if (FUN3(VAR6->VAR10))
        {
            VAR6 = &VAR12[VAR13];
        }
        FUN4(VAR6->VAR10, VAR8, VAR2, 4);
    }
    else
    {
        VAR8 += FUN5(VAR6->VAR10) & VAR14;
        VAR4 = FUN6(VAR8);
        FUN7(VAR4, VAR2);
        if (FUN8(VAR15))
        {
            if (!FUN9(VAR8))
            {
                FUN10(VAR8, VAR8 + 4, 0);
                FUN11(VAR8, (0xff & ~VAR16));
            }
        }
    }
}