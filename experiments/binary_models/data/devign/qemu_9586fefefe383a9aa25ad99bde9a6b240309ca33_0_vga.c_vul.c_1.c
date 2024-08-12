static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    int VAR7, VAR8, VAR9;
    if (VAR4 > 2)
        return -VAR10;
    if (VAR6->VAR11 && VAR4 >= 2)
    {
        VAR9 = FUN2(VAR6->VAR11, VAR2);
        if (VAR9 < 0)
            return VAR9;
    }
    FUN3(VAR2, &VAR6->VAR12);
    FUN4(VAR2, &VAR6->VAR13);
    FUN5(VAR2, VAR6->VAR14, 8);
    FUN4(VAR2, &VAR6->VAR15);
    FUN5(VAR2, VAR6->VAR16, 16);
    FUN4(VAR2, &VAR6->VAR17);
    FUN5(VAR2, VAR6->VAR18, 21);
    VAR6->VAR19 = FUN6(VAR2);
    FUN4(VAR2, &VAR6->VAR20);
    FUN5(VAR2, VAR6->VAR21, 256);
    FUN4(VAR2, &VAR6->VAR22);
    FUN4(VAR2, &VAR6->VAR23);
    FUN4(VAR2, &VAR6->VAR24);
    FUN4(VAR2, &VAR6->VAR25);
    FUN4(VAR2, &VAR6->VAR26);
    FUN4(VAR2, &VAR6->VAR27);
    FUN4(VAR2, &VAR6->VAR28);
    FUN4(VAR2, &VAR6->VAR29);
    FUN5(VAR2, VAR6->VAR30, 3);
    FUN5(VAR2, VAR6->VAR31, 768);
    VAR6->VAR32 = FUN6(VAR2);
    VAR7 = FUN7(VAR2);
    if (!VAR7)
        return -VAR10;
    FUN8(VAR2, &VAR6->VAR33);
    for (VAR8 = 0; VAR8 < VAR34; VAR8++)
        FUN8(VAR2, &VAR6->VAR35[VAR8]);
    FUN3(VAR2, &VAR6->VAR36);
    FUN3(VAR2, &VAR6->VAR37);
    FUN3(VAR2, &VAR6->VAR38);
    if (VAR7)
        return -VAR10;
    VAR6->VAR39 = -1;
    return 0;
}