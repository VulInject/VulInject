static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3, VAR4, VAR6);
    VAR7 *VAR8 = FUN2(VAR5, VAR7, VAR5);
    uint32_t VAR9 = FUN3(VAR8->VAR10 + VAR11);
    VAR3->VAR12.VAR13 = 0;
    VAR3->VAR12.VAR14 |= VAR15;
    if (++VAR3->VAR16 == 2)
    {
        VAR3->VAR12.VAR17 |= VAR18;
        VAR3->VAR12.VAR17 |= VAR19;
        VAR3->VAR16 = 0;
        if (!VAR8->VAR20.VAR21 && !(VAR9 & VAR22))
        {
            FUN4();
            FUN5(VAR3);
            return;
        }
    }
    if (VAR5->VAR23 & VAR24)
    {
        FUN6();
    }
    else
    {
        FUN7();
    }
    VAR3->VAR12.VAR13 = VAR3->VAR12.VAR25;
    FUN8(VAR3);
}