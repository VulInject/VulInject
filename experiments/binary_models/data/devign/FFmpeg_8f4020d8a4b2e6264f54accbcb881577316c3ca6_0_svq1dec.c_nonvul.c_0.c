static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    FUN2(VAR2, 8);
    VAR4->VAR6 = FUN3(VAR2, 2) + 1;
    if (VAR4->VAR6 == 4)
        return VAR7;
    if (VAR4->VAR6 == VAR8)
    {
        if (VAR4->VAR9 == 0x50 || VAR4->VAR9 == 0x60)
        {
            int VAR10 = FUN3(VAR2, 16);
            VAR10 = FUN4(VAR2->VAR11, VAR2->VAR12 >> 3, VAR10);
            FUN5(VAR4->VAR13, "", (VAR10 == 0) ? "" : "", VAR10);
        }
        if ((VAR4->VAR9 ^ 0x10) >= 0x50)
        {
            uint8_t VAR14[256];
            FUN6(VAR2, VAR14);
            FUN7(VAR4->VAR13, VAR15, ""%VAR4\"", (char *)VAR14);
        }
        FUN2(VAR2, 2);
        FUN2(VAR2, 2);
        FUN8(VAR2);
        VAR5 = FUN3(VAR2, 3);
        if (VAR5 == 7)
        {
            VAR4->VAR16 = FUN3(VAR2, 12);
            VAR4->VAR17 = FUN3(VAR2, 12);
            if (!VAR4->VAR16 || !VAR4->VAR17)
                return VAR7;
        }
        else
        {
            VAR4->VAR16 = VAR18[VAR5].VAR16;
            VAR4->VAR17 = VAR18[VAR5].VAR17;
        }
    }
    if (FUN9(VAR2))
    {
        FUN8(VAR2);
        FUN8(VAR2);
        if (FUN3(VAR2, 2) != 0)
            return VAR7;
    }
    if (FUN9(VAR2))
    {
        FUN8(VAR2);
        FUN2(VAR2, 4);
        FUN8(VAR2);
        FUN2(VAR2, 2);
        while (FUN9(VAR2))
            FUN2(VAR2, 8);
    }
    return 0;
}