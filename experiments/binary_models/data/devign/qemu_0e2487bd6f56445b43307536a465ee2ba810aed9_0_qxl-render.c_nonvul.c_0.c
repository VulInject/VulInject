void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    QXLRect VAR5[32], update;
    void *VAR6;
    int VAR7;
    if (VAR2->VAR8.VAR9)
    {
        VAR2->VAR8.VAR9 = 0;
        if (VAR2->VAR8.VAR10)
        {
            FUN2(VAR2->VAR8.VAR10);
            VAR2->VAR8.VAR10 = NULL;
        }
        FUN3(VAR4->VAR11);
        VAR2->VAR8.VAR12 = FUN4(&VAR2->VAR4.VAR13);
        if (VAR2->VAR8.VAR14 < 0)
        {
            VAR2->VAR8.VAR10 = FUN5(VAR2->VAR8.VAR15.VAR16 * VAR2->VAR8.VAR17);
            VAR6 = VAR2->VAR8.VAR10;
        }
        else
        {
            VAR6 = VAR2->VAR8.VAR12;
        }
        FUN6(VAR2, 1, "", VAR18, VAR2->VAR8.VAR15.VAR16, VAR2->VAR8.VAR15.VAR19, VAR2->VAR8.VAR14, VAR2->VAR8.VAR20, VAR2->VAR8.VAR21, VAR2->VAR8.VAR10 ? "" : "");
        VAR4->VAR11->VAR15 = FUN7(VAR2->VAR8.VAR15.VAR16, VAR2->VAR8.VAR15.VAR19, VAR2->VAR8.VAR21, VAR2->VAR8.VAR17, VAR6);
        FUN8(VAR4->VAR11);
    }
    if (!VAR2->VAR8.VAR22)
    {
        return;
    }
    VAR2->VAR8.VAR22 = 0;
    update.VAR23 = 0;
    update.VAR24 = VAR2->VAR8.VAR15.VAR16;
    update.VAR25 = 0;
    update.VAR26 = VAR2->VAR8.VAR15.VAR19;
    memset(VAR5, 0, sizeof(VAR5));
    FUN9(VAR2, 0, &update, VAR5, FUN10(VAR5), 1, VAR27);
    for (VAR7 = 0; VAR7 < FUN10(VAR5); VAR7++)
    {
        if (FUN11(VAR5 + VAR7))
        {
            break;
        }
        if (VAR2->VAR8.VAR10)
        {
            FUN12(VAR2, VAR5 + VAR7);
        }
        FUN13(VAR4->VAR11, VAR5[VAR7].VAR23, VAR5[VAR7].VAR25, VAR5[VAR7].VAR24 - VAR5[VAR7].VAR23, VAR5[VAR7].VAR26 - VAR5[VAR7].VAR25);
    }
}