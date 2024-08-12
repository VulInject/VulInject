static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct VAR5 *VAR6 = FUN3(VAR4);
    int VAR7;
    if (!VAR6->VAR8)
    {
        FUN4("");
    }
    if (VAR6->VAR9 < VAR10)
    {
        VAR6->VAR11 = (VAR6->VAR9 < VAR12) ? 4 : 5;
        FUN5(&VAR6->VAR13, FUN6(VAR6), &VAR14, VAR6, "", 0x1000);
        FUN7(VAR2, &VAR6->VAR13);
    }
    else
    {
        VAR6->VAR11 = 6;
    }
    VAR6->VAR15 = FUN8(struct VAR16, VAR6->VAR11);
    VAR6->VAR17 = FUN8(VAR18, VAR6->VAR11 * 32);
    FUN9(VAR4, VAR19, VAR6->VAR11 * 32);
    FUN10(VAR4, VAR6->VAR17, VAR6->VAR11 * 32);
    for (VAR7 = 0; VAR7 < VAR6->VAR11; VAR7++)
    {
        struct VAR16 *VAR20 = &VAR6->VAR15[VAR7];
        if (!VAR6->VAR21[VAR7])
        {
            FUN4("", VAR7);
        }
        VAR20->VAR22 = (VAR6->VAR9 < VAR10) ? 0x18 : 0x25;
        VAR20->VAR17 = &VAR6->VAR17[VAR7 * 32];
        FUN11(VAR2, &VAR20->VAR23[0]);
        FUN11(VAR2, &VAR20->VAR23[1]);
        FUN11(VAR2, &VAR20->VAR24);
        FUN5(&VAR20->VAR13, FUN6(VAR6), &VAR25, VAR20, "", 0x1000);
        FUN7(VAR2, &VAR20->VAR13);
    }
    return 0;
}