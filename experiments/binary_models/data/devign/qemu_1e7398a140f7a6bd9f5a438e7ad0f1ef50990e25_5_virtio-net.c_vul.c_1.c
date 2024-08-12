static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = FUN3(VAR2->VAR8);
    int VAR9 = VAR2->VAR10 ? VAR2->VAR11 : 1;
    if (!FUN4(VAR7->VAR12))
    {
        return;
    }
    if ((FUN5(VAR2, VAR3) && !VAR7->VAR12->VAR13) == !!VAR2->VAR14)
    {
        return;
    }
    if (!VAR2->VAR14)
    {
        int VAR15, VAR16;
        if (!FUN6(FUN4(VAR7->VAR12), VAR5))
        {
            return;
        }
        for (VAR16 = 0; VAR16 < VAR9; VAR16++)
        {
            VAR6 *VAR17 = FUN7(VAR2->VAR8, VAR16);
            FUN8(VAR17->VAR12->VAR18, VAR17);
            FUN8(VAR17->VAR18, VAR17->VAR12);
        }
        VAR2->VAR14 = 1;
        VAR15 = FUN9(VAR5, VAR2->VAR8->VAR19, VAR9);
        if (VAR15 < 0)
        {
            FUN10(""
                         "",
                         -VAR15);
            VAR2->VAR14 = 0;
        }
    }
    else
    {
        FUN11(VAR5, VAR2->VAR8->VAR19, VAR9);
        VAR2->VAR14 = 0;
    }
}