void FUN1(VAR1 *VAR2, hwaddr VAR3, uint32_t VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    hwaddr VAR9 = 4;
    hwaddr VAR10;
    VAR8 = FUN2(VAR2, VAR3, &VAR10, &VAR9, true);
    if (VAR9 < 4 || !FUN3(VAR8, true))
    {
        FUN4(VAR8, VAR10, VAR4, 4);
    }
    else
    {
        VAR10 += FUN5(VAR8) & VAR11;
        VAR6 = FUN6(VAR10);
        FUN7(VAR6, VAR4);
        if (FUN8(VAR12))
        {
            if (FUN9(VAR10))
            {
                FUN10(VAR10, VAR10 + 4, 0);
                FUN11(VAR10, 4);
            }
        }
    }
}