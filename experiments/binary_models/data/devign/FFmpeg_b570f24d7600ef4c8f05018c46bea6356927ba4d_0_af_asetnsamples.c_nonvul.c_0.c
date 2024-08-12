static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    VAR7 *VAR8 = NULL;
    int VAR9, VAR10, VAR11;
    if (VAR4->VAR12)
    {
        VAR10 = FUN2(VAR4->VAR13) ? VAR4->VAR10 : 0;
        VAR11 = VAR10 - FUN3(VAR10, FUN2(VAR4->VAR13));
    }
    else
    {
        VAR10 = FUN3(VAR4->VAR10, FUN2(VAR4->VAR13));
        VAR11 = 0;
    }
    if (!VAR10)
        return 0;
    VAR8 = FUN4(VAR2, VAR10);
    FUN5(VAR8);
    FUN6(VAR4->VAR13, (void **)VAR8->VAR14, VAR10);
    if (VAR11)
        FUN7(VAR8->VAR14, VAR10 - VAR11, VAR11, FUN8(VAR2->VAR15), VAR2->VAR16);
    VAR8->VAR17 = VAR10;
    VAR8->VAR15 = VAR2->VAR15;
    VAR8->VAR18 = VAR2->VAR18;
    VAR8->VAR19 = VAR4->VAR20;
    if (VAR4->VAR20 != VAR21)
        VAR4->VAR20 += VAR10;
    VAR9 = FUN9(VAR2, VAR8);
    if (VAR9 < 0)
        return VAR9;
    return VAR10;
}