static int FUN1(VAR1 *VAR2, int64_t VAR3, uint8_t VAR4, uint8_t VAR5)
{
    int VAR6 = 0;
    if (VAR4 == VAR2->VAR7[0] && VAR5 == VAR2->VAR7[1])
    {
    }
    else if ((VAR4 == 0x10 && (VAR5 >= 0x40 || VAR5 <= 0x5f)) || ((VAR4 >= 0x11 && VAR4 <= 0x17) && (VAR5 >= 0x40 && VAR5 <= 0x7f)))
    {
        FUN2(VAR2, VAR4, VAR5);
    }
    else if ((VAR4 == 0x11 && VAR5 >= 0x20 && VAR5 <= 0x2f) || (VAR4 == 0x17 && VAR5 >= 0x2e && VAR5 <= 0x2f))
    {
        FUN3(VAR2, VAR4, VAR5);
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x20)
    {
        VAR2->VAR8 = VAR9;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x24)
    {
        FUN5(VAR2, VAR4, VAR5);
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x25)
    {
        VAR2->VAR10 = 2;
        VAR2->VAR8 = VAR11;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x26)
    {
        VAR2->VAR10 = 3;
        VAR2->VAR8 = VAR12;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x27)
    {
        VAR2->VAR10 = 4;
        VAR2->VAR8 = VAR13;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x29)
    {
        VAR2->VAR8 = VAR14;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x2B)
    {
        VAR2->VAR8 = VAR15;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x2C)
    {
        VAR6 = FUN6(VAR2, VAR3);
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x2D)
    {
        FUN7(VAR2, "");
        FUN8(VAR2, VAR3);
        FUN9(VAR2);
        VAR2->VAR16 = 1;
        VAR2->VAR17 = 0;
    }
    else if (FUN4(VAR4, 0x14, 0x15, 0x1C) && VAR5 == 0x2F)
    {
        FUN7(VAR2, "");
        VAR6 = FUN10(VAR2, VAR3);
    }
    else if (VAR4 >= 0x20)
    {
        FUN11(VAR2, VAR4, VAR5, VAR3);
    }
    else
    {
        FUN7(VAR2, "", VAR4, VAR5);
    }
    VAR2->VAR7[0] = VAR4;
    VAR2->VAR7[1] = VAR5;
    return VAR6;
}