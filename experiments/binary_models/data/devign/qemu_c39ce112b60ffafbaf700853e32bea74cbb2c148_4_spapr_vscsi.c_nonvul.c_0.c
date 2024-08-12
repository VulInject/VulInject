static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    union VAR5 *VAR6 = &VAR4->VAR7.VAR6;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12;
    FUN2(FUN3(VAR6->VAR13.VAR12), &VAR11, &VAR12);
    VAR9 = (VAR11 < 8 && VAR12 < 16) ? VAR2->VAR14.VAR15[VAR11] : NULL;
    if (!VAR9)
    {
        FUN4("", VAR11);
        if (VAR6->VAR13.VAR16[0] == VAR17)
        {
            FUN5(VAR2, VAR4);
        }
        else
        {
            FUN6(VAR2, VAR4, VAR18, 0x24, 0x00);
            FUN7(VAR2, VAR4, VAR19, 0, 0);
        }
        return 1;
    }
    VAR4->VAR12 = VAR12;
    VAR4->VAR20 = FUN8(VAR9, VAR4->VAR21, VAR12, VAR6->VAR13.VAR16, VAR4);
    VAR10 = FUN9(VAR4->VAR20);
    FUN4("", VAR4->VAR21, VAR6->VAR13.VAR16[0], VAR11, VAR12, VAR10);
    if (VAR10)
    {
        VAR4->VAR22 = (VAR10 < 1);
        FUN10(VAR4);
        if (VAR10 > 0)
        {
            VAR4->VAR23 = VAR10;
        }
        else if (VAR10 < 0)
        {
            VAR4->VAR23 = -VAR10;
        }
        FUN11(VAR4->VAR20);
    }
    return 0;
}