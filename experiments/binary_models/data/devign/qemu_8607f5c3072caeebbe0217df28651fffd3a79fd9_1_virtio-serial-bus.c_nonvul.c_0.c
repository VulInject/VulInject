static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR4);
    uint32_t VAR8;
    VAR4->VAR9 = FUN3(sizeof(*VAR4->VAR9));
    VAR4->VAR9->VAR5 = VAR5;
    VAR4->VAR9->VAR10 = FUN3(sizeof(*VAR4->VAR9->VAR10) * VAR5);
    VAR4->VAR9->VAR11 = FUN4(VAR12, VAR13, VAR4);
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        VAR14 *VAR15;
        uint32_t VAR16;
        uint32_t VAR17;
        VAR17 = FUN5(VAR2);
        VAR15 = FUN6(VAR4, VAR17);
        if (!VAR15)
        {
            return -VAR18;
        }
        VAR15->VAR19 = FUN7(VAR2);
        VAR4->VAR9->VAR10[VAR8].VAR15 = VAR15;
        VAR4->VAR9->VAR10[VAR8].VAR20 = FUN7(VAR2);
        FUN8(VAR2, &VAR16);
        if (VAR16)
        {
            FUN8(VAR2, &VAR15->VAR21);
            FUN9(VAR2, &VAR15->VAR22);
            VAR15->VAR23 = FUN10(VAR7, VAR2, sizeof(VAR24));
            FUN11(VAR15, false);
        }
    }
    FUN12(VAR4->VAR9->VAR11, 1);
    return 0;
}