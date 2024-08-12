static void FUN1(VAR1 *VAR2, bool VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2->VAR7.VAR8);
    VAR9 *VAR10 = FUN3(VAR6, VAR9, VAR11);
    hwaddr VAR12;
    uint32_t VAR13, VAR14;
    if (VAR10->VAR15 & VAR16)
    {
        FUN4(VAR10, 2, "", VAR17, VAR4, VAR2->VAR18);
        VAR10->VAR19 = VAR4;
        VAR10->VAR15 &= ~(VAR16 | 0xf0);
        VAR10->VAR15 |= (VAR20 | (VAR2->VAR18 << 4));
        return;
    }
    if (!(VAR10->VAR21 & VAR22))
    {
        FUN4(VAR10, 1, "", VAR17);
        return;
    }
    VAR14 = (VAR3 ? 0 : (1 << 4)) | VAR2->VAR18;
    VAR13 = (VAR10->VAR23 + 1) & 0xff;
    VAR12 = FUN5(VAR10->VAR24, VAR10->VAR25);
    FUN6(&VAR10->VAR26, VAR12 + 8 * VAR13, VAR4);
    FUN6(&VAR10->VAR26, VAR12 + 8 * VAR13 + 4, VAR14);
    VAR10->VAR23 = VAR13;
    FUN4(VAR10, 2, "", VAR17, VAR13, VAR4, VAR14);
    VAR10->VAR27++;
    if (VAR10->VAR27 == VAR10->VAR28)
    {
        FUN4(VAR10, 2, "", VAR17, VAR10->VAR27);
        if (VAR10->VAR21 & VAR29)
        {
            VAR10->VAR30 |= VAR31;
            FUN7(VAR10);
        }
    }
    else if ((VAR10->VAR32 & 0xff) == VAR10->VAR33)
    {
        FUN4(VAR10, 2, "", VAR17, VAR10->VAR27, VAR10->VAR28);
        if (VAR10->VAR21 & VAR29)
        {
            VAR10->VAR30 |= VAR31;
            FUN7(VAR10);
        }
    }
}