static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    VAR7->VAR9 = FUN2(VAR2);
    if (!VAR7->VAR9)
        return -1;
    VAR5 = FUN3(VAR2->VAR10);
    while ((VAR5 & 0xffffff7f) != 0x1f07003f)
    {
        if (FUN4(VAR2->VAR10))
        {
            FUN5(VAR2, VAR11, "");
            return -1;
        }
        VAR5 = (VAR5 << 8) | FUN6(VAR2->VAR10);
    }
    FUN7(VAR7->VAR12, VAR5);
    if (FUN8(VAR2->VAR10, VAR7->VAR12 + 4, VAR13 - 4) <= 0 || FUN9(VAR2->VAR10, -VAR13, VAR14) < 0)
        return FUN10(VAR15);
    VAR7->VAR9->VAR16 = FUN11(VAR7->VAR12);
    if (!VAR7->VAR9->VAR16)
    {
        FUN5(VAR2, VAR11, "");
        return -1;
    }
    VAR2->VAR17 = FUN12(VAR7->VAR9->VAR16->VAR18, (VAR19){8, 1}, VAR7->VAR9->VAR16->VAR20);
    return 0;
}