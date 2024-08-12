void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = FUN3(VAR2);
    if (!(VAR14->VAR15 & VAR16))
    {
        return;
    }
    if (VAR2->VAR17)
    {
        assert(VAR2->VAR18);
        FUN4(VAR2->VAR18);
    }
    VAR10 = FUN5(VAR2, VAR8->VAR19);
    if (!VAR10)
    {
        VAR2->VAR20 = true;
        goto VAR21;
    }
    if (VAR2->VAR20)
    {
        VAR5 |= VAR22;
        VAR2->VAR20 = false;
    }
    if (FUN6(VAR10, 0, sizeof(VAR11)))
    {
        FUN7();
    }
    VAR12 = &VAR10->VAR23.VAR5;
    memset(VAR12, 0, sizeof(VAR11));
    VAR12->VAR5 = FUN8(VAR14, VAR5);
    VAR12->VAR6 = FUN8(VAR14, VAR6);
    if (!VAR4)
    {
        assert(VAR5 == VAR22);
    }
    else
    {
        VAR12->VAR24[0] = 1;
        VAR12->VAR24[1] = VAR4->VAR25;
        if (VAR4->VAR24 >= 256)
        {
            VAR12->VAR24[2] = (VAR4->VAR24 >> 8) | 0x40;
        }
        VAR12->VAR24[3] = VAR4->VAR24 & 0xFF;
    }
    FUN9(VAR10);
VAR21:
    if (VAR2->VAR17)
    {
        FUN10(VAR2->VAR18);
    }
}