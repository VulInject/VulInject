static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    VAR3 *VAR11;
    if (FUN2(VAR4))
    {
        VAR11 = VAR4;
    }
    else
    {
        VAR11 = FUN3(VAR2, VAR4->VAR12);
        if (!VAR11)
            return FUN4(VAR13);
        FUN5(VAR11, VAR4);
    }
    VAR9->FUN6(VAR9, VAR9->VAR14, VAR4->VAR15, VAR11->VAR15, VAR4->VAR12, VAR2->VAR16);
    VAR9->VAR17 = VAR4->VAR18 + FUN7(VAR4->VAR12, (VAR19){1, VAR2->VAR20}, VAR2->VAR21);
    if (VAR4 != VAR11)
        FUN8(&VAR4);
    return FUN9(VAR6->VAR22[0], VAR11);
}