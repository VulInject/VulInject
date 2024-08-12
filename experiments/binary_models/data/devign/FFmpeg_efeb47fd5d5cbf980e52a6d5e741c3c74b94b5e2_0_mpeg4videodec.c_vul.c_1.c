int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7;
    unsigned VAR8, VAR9;
    int VAR10;
    int VAR11 = 0;
    FUN2(VAR4);
    if (VAR6->VAR12 == FUN3("") && FUN4(VAR4, 24) == 0x575630)
    {
        FUN5(VAR4, 24);
        if (FUN6(VAR4, 8) == 0xF0)
            goto VAR13;
        VAR8 = 0xff;
        for (;;)
        {
            if (FUN7(VAR4) >= VAR4->VAR14)
            {
                if (VAR4->VAR14 == 8 && (VAR2->VAR15 >= 0 || VAR2->VAR16 >= 0) || VAR6->VAR12 == FUN3(""))
                {
                    FUN8(VAR6->VAR17, VAR18, "", VAR4->VAR14);
                    return VAR19;
                }
                else
                    return -1;
                VAR9 = FUN6(VAR4, 8);
                VAR8 = ((VAR8 << 8) | VAR9) & 0xffffffff;
                if ((VAR8 & 0xFFFFFF00) != 0x100)
                    continue;
                if (VAR6->VAR17->VAR20 & VAR21)
                {
                    FUN8(VAR6->VAR17, VAR22, "", VAR8);
                    if (VAR8 <= 0x11F)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 <= 0x12F)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 <= 0x13F)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 <= 0x15F)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 <= 0x1AF)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B0)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B1)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B2)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B3)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B4)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B5)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B6)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B7)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B8)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1B9)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1BA)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1BB)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1BC)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1BD)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1BE)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1BF)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1C0)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1C1)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1C2)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 == 0x1C3)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 <= 0x1C5)
                        FUN8(VAR6->VAR17, VAR22, "");
                    else if (VAR8 <= 0x1FF)
                        FUN8(VAR6->VAR17, VAR22, "");
                    FUN8(VAR6->VAR17, VAR22, "", FUN7(VAR4));
                    if (VAR8 >= 0x120 && VAR8 <= 0x12F)
                    {
                        if ((VAR10 = FUN9(VAR2, VAR4)) < 0)
                            return VAR10;
                    }
                    else if (VAR8 == VAR23)
                    {
                        FUN10(VAR2, VAR4);
                    }
                    else if (VAR8 == VAR24)
                    {
                        FUN11(VAR6, VAR4);
                    }
                    else if (VAR8 == VAR25)
                    {
                        FUN12(VAR6, VAR4);
                    }
                    else if (VAR8 == VAR26)
                    {
                        break;
                        FUN2(VAR4);
                        VAR8 = 0xff;
                    VAR13:
                        if (VAR6->VAR17->VAR27 & VAR28)
                            VAR6->VAR29 = 1;
                        VAR6->VAR17->VAR30 = !VAR6->VAR29;
                        return FUN13(VAR2, VAR4);