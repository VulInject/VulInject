static void FUN1(VAR1 *VAR2, int VAR3, bool VAR4, bool VAR5, bool VAR6, int VAR7, int VAR8, int VAR9)
{
    bool VAR10 = (VAR7 == 3);
    TCGv_ptr VAR11;
    if (!FUN2(VAR2))
    {
        return;
    }
    VAR11 = FUN3();
    if (VAR10)
    {
        TCGv_i64 VAR12 = FUN4();
        TCGv_i64 VAR13 = FUN5(0);
        TCGv_i64 VAR14 = FUN4();
        VAR15 *VAR16;
        bool VAR17 = false;
        int VAR18;
        switch (VAR3)
        {
        case 0x2e:
            VAR17 = true;
        case 0x2c:
            VAR16 = VAR19;
            break;
        case 0x2d:
            VAR16 = VAR20;
            break;
        case 0x6d:
            VAR17 = true;
        case 0x6c:
            VAR16 = VAR21;
            break;
        default:
            FUN6();
        }
        for (VAR18 = 0; VAR18 < (VAR4 ? 1 : 2); VAR18++)
        {
            FUN7(VAR2, VAR12, VAR8, VAR18, VAR22);
            if (VAR17)
            {
                FUN8(VAR14, VAR13, VAR12, VAR11);
            }
            else
            {
                FUN8(VAR14, VAR12, VAR13, VAR11);
            }
            FUN9(VAR2, VAR14, VAR9, VAR18, VAR22);
        }
        if (VAR4)
        {
            FUN10(VAR2, VAR9);
        }
        FUN11(VAR14);
        FUN11(VAR13);
        FUN11(VAR12);
    }
    else
    {
        TCGv_i32 VAR12 = FUN12();
        TCGv_i32 VAR13 = FUN13(0);
        TCGv_i32 VAR14 = FUN12();
        VAR23 *VAR16;
        bool VAR17 = false;
        int VAR18, VAR24;
        switch (VAR3)
        {
        case 0x2e:
            VAR17 = true;
        case 0x2c:
            VAR16 = VAR25;
            break;
        case 0x2d:
            VAR16 = VAR26;
            break;
        case 0x6d:
            VAR17 = true;
        case 0x6c:
            VAR16 = VAR27;
            break;
        default:
            FUN6();
        }
        if (VAR4)
        {
            VAR24 = 1;
        }
        else
        {
            VAR24 = VAR6 ? 4 : 2;
        }
        for (VAR18 = 0; VAR18 < VAR24; VAR18++)
        {
            FUN14(VAR2, VAR12, VAR8, VAR18, VAR28);
            if (VAR17)
            {
                FUN8(VAR14, VAR13, VAR12, VAR11);
            }
            else
            {
                FUN8(VAR14, VAR12, VAR13, VAR11);
            }
            if (VAR4)
            {
                FUN15(VAR2, VAR9, VAR14);
            }
            else
            {
                FUN16(VAR2, VAR14, VAR9, VAR18, VAR28);
            }
        }
        FUN17(VAR14);
        FUN17(VAR13);
        FUN17(VAR12);
        if (!VAR6 && !VAR4)
        {
            FUN10(VAR2, VAR9);
        }
    }
    FUN18(VAR11);
}