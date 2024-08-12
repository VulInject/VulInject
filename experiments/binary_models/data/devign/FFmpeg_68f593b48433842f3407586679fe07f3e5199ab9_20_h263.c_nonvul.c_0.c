int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    FUN2(VAR4);
    VAR5 = 0xff;
    for (;;)
    {
        VAR6 = FUN3(VAR4, 8);
        VAR5 = ((VAR5 << 8) | VAR6) & 0xffffffff;
        if (FUN4(VAR4) >= VAR4->VAR7)
        {
            if (VAR4->VAR7 == 8 && VAR2->VAR8)
            {
                FUN5("", VAR4->VAR7);
                return VAR9;
            }
            else
                return -1;
        }
        if ((VAR5 & 0xFFFFFF00) != 0x100)
            continue;
        if (VAR2->VAR10->VAR11 & VAR12)
        {
            FUN5("", VAR5);
            if (VAR5 <= 0x11F)
                FUN5("");
            else if (VAR5 <= 0x12F)
                FUN5("");
            else if (VAR5 <= 0x13F)
                FUN5("");
            else if (VAR5 <= 0x15F)
                FUN5("");
            else if (VAR5 <= 0x1AF)
                FUN5("");
            else if (VAR5 == 0x1B0)
                FUN5("");
            else if (VAR5 == 0x1B1)
                FUN5("");
            else if (VAR5 == 0x1B2)
                FUN5("");
            else if (VAR5 == 0x1B3)
                FUN5("");
            else if (VAR5 == 0x1B4)
                FUN5("");
            else if (VAR5 == 0x1B5)
                FUN5("");
            else if (VAR5 == 0x1B6)
                FUN5("");
            else if (VAR5 == 0x1B7)
                FUN5("");
            else if (VAR5 == 0x1B8)
                FUN5("");
            else if (VAR5 == 0x1B9)
                FUN5("");
            else if (VAR5 == 0x1BA)
                FUN5("");
            else if (VAR5 == 0x1BB)
                FUN5("");
            else if (VAR5 == 0x1BC)
                FUN5("");
            else if (VAR5 == 0x1BD)
                FUN5("");
            else if (VAR5 == 0x1BE)
                FUN5("");
            else if (VAR5 == 0x1BF)
                FUN5("");
            else if (VAR5 == 0x1C0)
                FUN5("");
            else if (VAR5 == 0x1C1)
                FUN5("");
            else if (VAR5 == 0x1C2)
                FUN5("");
            else if (VAR5 == 0x1C3)
                FUN5("");
            else if (VAR5 <= 0x1C5)
                FUN5("");
            else if (VAR5 <= 0x1FF)
                FUN5("");
            FUN5("", FUN4(VAR4));
        }
        switch (VAR5)
        {
        case 0x120:
            FUN6(VAR2, VAR4);
            break;
        case VAR13:
            FUN7(VAR2, VAR4);
            break;
        case VAR14:
            FUN8(VAR2, VAR4);
            break;
        case VAR15:
            return FUN9(VAR2, VAR4);
        default:
            break;
        }
        FUN2(VAR4);
        VAR5 = 0xff;
    }
}