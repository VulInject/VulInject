static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR3, 0, 5);
    int VAR5 = FUN2(VAR3, 12, 4);
    int VAR6 = FUN2(VAR5, 1, 3);
    int VAR7 = FUN2(VAR5, 0, 1);
    int VAR8 = FUN2(VAR3, 11, 1);
    uint64_t VAR9 = FUN2(VAR3, 5, 5) | (FUN2(VAR3, 16, 3) << 5);
    bool VAR10 = FUN2(VAR3, 29, 1);
    bool VAR11 = FUN2(VAR3, 30, 1);
    uint64_t VAR12 = 0;
    TCGv_i64 VAR13, VAR14;
    int VAR15;
    if (VAR8 != 0 || ((VAR5 == 0xf) && VAR10 && !VAR11))
    {
        FUN3(VAR2);
        return;
    }
    if (!FUN4(VAR2))
    {
        return;
    }
    switch (VAR6)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    {
        int VAR16 = VAR6 * 8;
        VAR12 = FUN5(VAR9 << VAR16, 32);
        break;
    }
    case 4:
    case 5:
    {
        int VAR16 = (VAR6 & 0x1) * 8;
        VAR12 = FUN5(VAR9 << VAR16, 16);
        break;
    }
    case 6:
        if (VAR7)
        {
            VAR12 = (VAR9 << 16) | 0xffff;
        }
        else
        {
            VAR12 = (VAR9 << 8) | 0xff;
        }
        VAR12 = FUN5(VAR12, 32);
        break;
    case 7:
        if (!VAR7 && !VAR10)
        {
            VAR12 = FUN5(VAR9, 8);
        }
        else if (!VAR7 && VAR10)
        {
            int VAR15;
            VAR12 = 0;
            for (VAR15 = 0; VAR15 < 8; VAR15++)
            {
                if ((VAR9) & (1 << VAR15))
                {
                    VAR12 |= 0xffULL << (VAR15 * 8);
                }
            }
        }
        else if (VAR7)
        {
            if (VAR10)
            {
                VAR12 = (VAR9 & 0x3f) << 48;
                if (VAR9 & 0x80)
                {
                    VAR12 |= 0x8000000000000000ULL;
                }
                if (VAR9 & 0x40)
                {
                    VAR12 |= 0x3fc0000000000000ULL;
                }
                else
                {
                    VAR12 |= 0x4000000000000000ULL;
                }
            }
            else
            {
                VAR12 = (VAR9 & 0x3f) << 19;
                if (VAR9 & 0x80)
                {
                    VAR12 |= 0x80000000;
                }
                if (VAR9 & 0x40)
                {
                    VAR12 |= 0x3e000000;
                }
                else
                {
                    VAR12 |= 0x40000000;
                }
                VAR12 |= (VAR12 << 32);
            }
        }
        break;
    }
    if (VAR6 != 7 && VAR10)
    {
        VAR12 = ~VAR12;
    }
    VAR14 = FUN6(VAR12);
    VAR13 = FUN7(VAR2);
    for (VAR15 = 0; VAR15 < 2; VAR15++)
    {
        int VAR17 = VAR15 ? FUN8(VAR2, VAR4) : FUN9(VAR2, VAR4, VAR18);
        if (VAR15 == 1 && !VAR11)
        {
            FUN10(VAR13, 0);
        }
        else if ((VAR5 & 0x9) == 0x1 || (VAR5 & 0xd) == 0x9)
        {
            FUN11(VAR13, VAR19, VAR17);
            if (VAR10)
            {
                FUN12(VAR13, VAR13, VAR14);
            }
            else
            {
                FUN13(VAR13, VAR13, VAR14);
            }
        }
        else
        {
            FUN14(VAR13, VAR14);
        }
        FUN15(VAR13, VAR19, VAR17);
    }
    FUN16(VAR14);
}