static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR2, VAR8->VAR11);
    VAR12 *VAR13;
    VAR14 *VAR15 = FUN4(VAR2);
    int VAR16;
    if (!(VAR15->VAR17 & VAR18))
    {
        return;
    }
    if (!VAR10)
    {
        VAR2->VAR19 = true;
        return;
    }
    if (VAR10->VAR20.VAR21 || VAR10->VAR20.VAR22 != 1)
    {
        FUN5();
    }
    if (VAR2->VAR19)
    {
        VAR5 |= VAR23;
        VAR2->VAR19 = false;
    }
    VAR16 = VAR10->VAR20.VAR24[0].VAR25;
    if (VAR16 < sizeof(VAR12))
    {
        FUN5();
    }
    VAR13 = VAR10->VAR26.VAR5;
    memset(VAR13, 0, sizeof(VAR12));
    VAR13->VAR5 = VAR5;
    VAR13->VAR6 = VAR6;
    if (!VAR4)
    {
        assert(VAR5 == VAR27);
    }
    else
    {
        VAR13->VAR28[0] = 1;
        VAR13->VAR28[1] = VAR4->VAR29;
        if (VAR4->VAR28 >= 256)
        {
            VAR13->VAR28[2] = (VAR4->VAR28 >> 8) | 0x40;
        }
        VAR13->VAR28[3] = VAR4->VAR28 & 0xFF;
    }
    FUN6(VAR10);
}