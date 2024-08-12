static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = &VAR4->VAR8;
    int VAR9;
    VAR6->FUN4(VAR2);
    VAR4->VAR8.VAR10 = 0;
    FUN5(VAR11, VAR4);
    memset(VAR8, 0, FUN6(VAR7, VAR12));
    VAR8->VAR13[0] = VAR14;
    VAR8->VAR13[14] = VAR15;
    VAR8->VAR16 = 1;
    VAR8->VAR17 = -1UL;
    for (VAR9 = 0; VAR9 < FUN7(VAR8->VAR18); VAR9++)
    {
        VAR8->VAR18[VAR9] = -1;
    }
    VAR8->VAR19 = -1;
    FUN8(VAR20, &VAR8->VAR21);
    if (FUN9())
    {
        FUN10(VAR4);
    }
}