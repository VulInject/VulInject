static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6, bool VAR7)
{
    int VAR8 = FUN2(VAR3, 5, 5);
    int VAR9 = FUN3(VAR3, 12, 9);
    int VAR10 = FUN2(VAR3, 10, 2);
    bool VAR11 = false;
    bool VAR12 = false;
    bool VAR13 = false;
    bool VAR14 = (VAR10 == 2);
    bool VAR15 = !VAR7;
    bool VAR16;
    bool VAR17;
    TCGv_i64 VAR18;
    if (VAR7)
    {
        VAR5 |= (VAR4 & 2) << 1;
        if (VAR5 > 4 || VAR14)
        {
            FUN4(VAR2);
            return;
        }
        VAR12 = ((VAR4 & 1) == 0);
        if (!FUN5(VAR2))
        {
            return;
        }
    }
    else
    {
        if (VAR5 == 3 && VAR4 == 2)
        {
            if (VAR14)
            {
                FUN4(VAR2);
                return;
            }
            return;
        }
        if (VAR4 == 3 && VAR5 > 1)
        {
            FUN4(VAR2);
            return;
        }
        VAR12 = (VAR4 == 0);
        VAR11 = FUN2(VAR4, 1, 1);
        VAR13 = (VAR5 < 3) && FUN2(VAR4, 0, 1);
    }
    switch (VAR10)
    {
    case 0:
    case 2:
        VAR16 = false;
        VAR17 = false;
        break;
    case 1:
        VAR16 = true;
        VAR17 = true;
        break;
    case 3:
        VAR16 = false;
        VAR17 = true;
        break;
    }
    if (VAR8 == 31)
    {
        FUN6(VAR2);
    }
    VAR18 = FUN7(VAR2, VAR8, 1);
    if (!VAR16)
    {
        FUN8(VAR18, VAR18, VAR9);
    }
    if (VAR7)
    {
        if (VAR12)
        {
            FUN9(VAR2, VAR6, VAR18, VAR5);
        }
        else
        {
            FUN10(VAR2, VAR6, VAR18, VAR5);
        }
    }
    else
    {
        TCGv_i64 VAR19 = FUN11(VAR2, VAR6);
        int VAR20 = VAR14 ? FUN12(VAR2) : FUN13(VAR2);
        bool VAR21 = FUN14(VAR5, VAR11, VAR4);
        if (VAR12)
        {
            FUN15(VAR2, VAR19, VAR18, VAR5, VAR20, VAR15, VAR6, VAR21, false);
        }
        else
        {
            FUN16(VAR2, VAR19, VAR18, VAR5, VAR11, VAR13, VAR20, VAR15, VAR6, VAR21, false);
        }
    }
    if (VAR17)
    {
        TCGv_i64 VAR22 = FUN17(VAR2, VAR8);
        if (VAR16)
        {
            FUN8(VAR18, VAR18, VAR9);
        }
        FUN18(VAR22, VAR18);
    }