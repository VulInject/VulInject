static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR6 *VAR7 = FUN3(VAR4);
    FUN4(VAR8, "", VAR9, VAR2, VAR2->VAR10, VAR7->VAR11, (int)VAR12, (int)VAR13);
    if (VAR2->VAR10 & (1 << VAR14))
    {
        VAR2->VAR10 &= ~(1 << VAR14);
        FUN5(VAR4, VAR2->VAR15, VAR16);
        return;
    }
    if (VAR2->VAR10 & (1 << VAR17))
    {
        VAR2->VAR10 &= ~(1 << VAR17);
        FUN5(VAR4, VAR2->VAR15, VAR18);
        return;
    }
    if (VAR2->VAR10 & (1 << VAR19))
    {
        VAR2->VAR10 &= ~(1 << VAR19);
        FUN5(VAR4, VAR2->VAR15, VAR20);
        return;
    }
    if (0)
    {
        VAR5 = VAR2->VAR21[VAR22] & 1;
    }
    else
    {
        VAR5 = 0;
    }
    if ((VAR13 != 0 || VAR23 == 0 || VAR24 != 0) && VAR5 != 0)
    {
        if (VAR2->VAR10 & (1 << VAR25))
        {
            FUN5(VAR4, VAR2->VAR15, VAR26);
            return;
        }
    }
    if (VAR27 != 0)
    {
        if (VAR2->VAR10 & (1 << VAR28))
        {
            VAR2->VAR10 &= ~(1 << VAR28);
            FUN5(VAR4, VAR2->VAR15, VAR29);
            return;
        }
    }
    if (VAR13 != 0)
    {
        if (VAR2->VAR10 & (1 << VAR30))
        {
            VAR2->VAR10 &= ~(1 << VAR30);
            FUN5(VAR4, VAR2->VAR15, VAR31);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR32))
        {
            VAR2->VAR10 &= ~(1 << VAR32);
            FUN5(VAR4, VAR2->VAR15, VAR33);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR34))
        {
            VAR2->VAR10 &= ~(1 << VAR34);
            FUN5(VAR4, VAR2->VAR15, VAR35);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR36))
        {
            VAR2->VAR10 &= ~(1 << VAR36);
            FUN5(VAR4, VAR2->VAR15, VAR37);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR38))
        {
            if (FUN6(VAR2))
            {
                VAR2->VAR10 &= ~(1 << VAR38);
            }
            FUN5(VAR4, VAR2->VAR15, VAR39);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR40))
        {
            VAR2->VAR10 &= ~(1 << VAR40);
            FUN5(VAR4, VAR2->VAR15, VAR41);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR42))
        {
            VAR2->VAR10 &= ~(1 << VAR42);
            FUN5(VAR4, VAR2->VAR15, VAR43);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR44))
        {
            VAR2->VAR10 &= ~(1 << VAR44);
            FUN5(VAR4, VAR2->VAR15, VAR45);
            return;
        }
        if (VAR2->VAR10 & (1 << VAR46))
        {
            VAR2->VAR10 &= ~(1 << VAR46);
            FUN5(VAR4, VAR2->VAR15, VAR47);
            return;
        }
    }
}