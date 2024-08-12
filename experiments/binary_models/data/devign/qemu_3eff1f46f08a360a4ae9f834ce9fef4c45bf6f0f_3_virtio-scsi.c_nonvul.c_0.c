static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = FUN3(VAR2);
    int VAR15;
    if (!(VAR14->VAR16 & VAR17))
    {
        return;
    }
    VAR10 = FUN4(VAR2, VAR8->VAR18);
    if (!VAR10)
    {
        VAR2->VAR19 = true;
        return;
    }
    if (VAR10->VAR20.VAR21)
    {
        FUN5();
    }
    if (VAR2->VAR19)
    {
        VAR5 |= VAR22;
        VAR2->VAR19 = false;
    }
    VAR15 = FUN6(VAR10->VAR20.VAR23, VAR10->VAR20.VAR24);
    if (VAR15 < sizeof(VAR11))
    {
        FUN5();
    }
    VAR12 = &VAR10->VAR25.VAR5;
    memset(VAR12, 0, sizeof(VAR11));
    VAR12->VAR5 = VAR5;
    VAR12->VAR6 = VAR6;
    if (!VAR4)
    {
        assert(VAR5 == VAR22);
    }
    else
    {
        VAR12->VAR26[0] = 1;
        VAR12->VAR26[1] = VAR4->VAR27;
        if (VAR4->VAR26 >= 256)
        {
            VAR12->VAR26[2] = (VAR4->VAR26 >> 8) | 0x40;
        }
        VAR12->VAR26[3] = VAR4->VAR26 & 0xFF;
    }
    FUN7(VAR10);
}