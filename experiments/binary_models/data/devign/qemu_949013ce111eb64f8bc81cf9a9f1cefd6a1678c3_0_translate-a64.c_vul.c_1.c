static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 5, 5);
    int VAR6 = FUN3(VAR3, 12, 9);
    int VAR7 = FUN2(VAR3, 22, 2);
    int VAR8 = FUN2(VAR3, 30, 2);
    int VAR9 = FUN2(VAR3, 10, 2);
    bool VAR10 = false;
    bool VAR11 = false;
    bool VAR12 = false;
    bool VAR13 = (VAR9 == 2);
    bool VAR14 = FUN2(VAR3, 26, 1);
    bool VAR15;
    bool VAR16;
    TCGv_i64 VAR17;
    if (VAR14)
    {
        VAR8 |= (VAR7 & 2) << 1;
        if (VAR8 > 4 || VAR13)
        {
            FUN4(VAR2);
            return;
        }
        VAR11 = ((VAR7 & 1) == 0);
        if (!FUN5(VAR2))
        {
            return;
        }
    }
    else
    {
        if (VAR8 == 3 && VAR7 == 2)
        {
            if (VAR13)
            {
                FUN4(VAR2);
                return;
            }
            return;
        }
        if (VAR7 == 3 && VAR8 > 1)
        {
            FUN4(VAR2);
            return;
        }
        VAR11 = (VAR7 == 0);
        VAR10 = VAR7 & (1 << 1);
        VAR12 = (VAR8 < 3) && (VAR7 & 1);
    }
    switch (VAR9)
    {
    case 0:
    case 2:
        VAR15 = false;
        VAR16 = false;
        break;
    case 1:
        VAR15 = true;
        VAR16 = true;
        break;
    case 3:
        VAR15 = false;
        VAR16 = true;
        break;
    }
    if (VAR5 == 31)
    {
        FUN6(VAR2);
    }
    VAR17 = FUN7(VAR2, VAR5, 1);
    if (!VAR15)
    {
        FUN8(VAR17, VAR17, VAR6);
    }
    if (VAR14)
    {
        if (VAR11)
        {
            FUN9(VAR2, VAR4, VAR17, VAR8);
        }
        else
        {
            FUN10(VAR2, VAR4, VAR17, VAR8);
        }
    }
    else
    {
        TCGv_i64 VAR18 = FUN11(VAR2, VAR4);
        int VAR19 = VAR13 ? 1 : FUN12(VAR2);
        if (VAR11)
        {
            FUN13(VAR2, VAR18, VAR17, VAR8, VAR19);
        }
        else
        {
            FUN14(VAR2, VAR18, VAR17, VAR8, VAR10, VAR12, VAR19);
        }
    }
    if (VAR16)
    {
        TCGv_i64 VAR20 = FUN15(VAR2, VAR5);
        if (VAR15)
        {
            FUN8(VAR17, VAR17, VAR6);
        }
        FUN16(VAR20, VAR17);
    }
}