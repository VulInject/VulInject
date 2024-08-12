void FUN1(VAR1)(VAR2 *VAR3)
{
    int VAR4 = FUN2(VAR3);
    unsigned int VAR5 = FUN3(VAR4);
    uint32_t VAR6 = VAR3->VAR7[VAR5];
    int VAR8;
    FUN4(VAR3, VAR4);
    VAR3->VAR9 = -1;
    if (FUN5(VAR3))
    {
        VAR6 &= ~VAR10;
    }
    if (VAR6 & VAR11)
    {
        VAR3->VAR12 = 0;
        VAR8 = 0;
        VAR3->VAR13 = 0x10;
        FUN6(VAR3, VAR6, ~0);
        if (!FUN7(VAR3))
        {
            VAR3->VAR13 &= ~VAR10;
        }
        FUN8(VAR3);
        VAR3->VAR14[15] = VAR3->VAR15[1] & ~0x1;
    }
    else
    {
        VAR8 = FUN9(VAR6, 2, 2);
        if (VAR8 > VAR4 || (VAR8 == 2 && !FUN10(VAR3, VAR16)))
        {
            goto VAR17;
        }
        if (FUN9(VAR6, 1, 1))
        {
            goto VAR17;
        }
        if (VAR8 == 0 && (VAR6 & VAR18))
        {
            goto VAR17;
        }
        VAR3->VAR12 = 1;
        FUN11(VAR3, VAR6);
        if (!FUN7(VAR3))
        {
            VAR3->VAR19 &= ~VAR10;
        }
        FUN12(VAR3, VAR8);
        VAR3->VAR20 = VAR3->VAR15[VAR4];
    }
    return;
VAR17:
    VAR3->VAR19 |= VAR21;
    VAR3->VAR20 = VAR3->VAR15[VAR4];
    VAR6 &= VAR22 | VAR23;
    VAR6 |= FUN13(VAR3) & ~(VAR22 | VAR23);
    FUN11(VAR3, VAR6);
    if (!FUN7(VAR3))
    {
        VAR3->VAR19 &= ~VAR10;
    }
}