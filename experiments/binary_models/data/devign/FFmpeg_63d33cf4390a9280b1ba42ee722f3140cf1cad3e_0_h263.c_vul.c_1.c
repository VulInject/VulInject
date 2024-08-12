int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    FUN2(VAR4);
    if (VAR2->VAR7->VAR8 == FUN3("") && FUN4(VAR4, 24) == 0x575630)
    {
        FUN5(VAR4, 24);
        if (FUN6(VAR4, 8) == 0xF0)
            return FUN7(VAR2, VAR4);
    }
    VAR5 = 0xff;
    for (;;)
    {
        VAR6 = FUN6(VAR4, 8);
        VAR5 = ((VAR5 << 8) | VAR6) & 0xffffffff;
        if (FUN8(VAR4) >= VAR4->VAR9)
        {
            if (VAR4->VAR9 == 8 && (VAR2->VAR10 || VAR2->VAR11))
            {
                FUN9(VAR2->VAR7, VAR12, "", VAR4->VAR9);
                return VAR13;
            }
            else
                return -1;
        }
        if ((VAR5 & 0xFFFFFF00) != 0x100)
            continue;
        if (VAR2->VAR7->VAR14 & VAR15)
        {
            FUN9(VAR2->VAR7, VAR16, "", VAR5);
            if (VAR5 <= 0x11F)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 <= 0x12F)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 <= 0x13F)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 <= 0x15F)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 <= 0x1AF)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B0)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B1)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B2)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B3)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B4)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B5)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B6)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B7)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B8)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1B9)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1BA)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1BB)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1BC)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1BD)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1BE)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1BF)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1C0)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1C1)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1C2)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 == 0x1C3)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 <= 0x1C5)
                FUN9(VAR2->VAR7, VAR16, "");
            else if (VAR5 <= 0x1FF)
                FUN9(VAR2->VAR7, VAR16, "");
            FUN9(VAR2->VAR7, VAR16, "", FUN8(VAR4));
        }
        if (VAR5 >= 0x120 && VAR5 <= 0x12F)
        {
            if (FUN10(VAR2, VAR4) < 0)
                return -1;
        }
        else if (VAR5 == VAR17)
        {
            FUN11(VAR2, VAR4);
        }
        else if (VAR5 == VAR18)
        {
            FUN12(VAR2, VAR4);
        }
        else if (VAR5 == VAR19)
        {
            return FUN7(VAR2, VAR4);
        }
        FUN2(VAR4);
        VAR5 = 0xff;
    }
}