static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    int VAR5;
    size_t VAR6;
    uint8_t VAR7[VAR8];
    VAR9 *VAR10 = VAR3;
    if (VAR4 != 2)
        return -VAR11;
    VAR5 = FUN2(&VAR10->VAR12, VAR2);
    if (VAR5)
        return VAR5;
    FUN3(VAR2, &VAR10->VAR13);
    FUN3(VAR2, &VAR10->VAR14);
    FUN3(VAR2, &VAR10->VAR15);
    for (VAR6 = 0; VAR6 < FUN4(VAR10->VAR16); ++VAR6)
    {
        VAR17 *VAR18 = &VAR10->VAR16[VAR6];
        FUN3(VAR2, &VAR18->VAR19);
        FUN5(VAR2, &VAR18->VAR20);
        FUN5(VAR2, &VAR18->VAR21);
        FUN6(VAR2, &VAR18->VAR22);
        FUN6(VAR2, &VAR18->VAR23);
        FUN5(VAR2, &VAR18->VAR24);
        FUN5(VAR2, &VAR18->VAR25);
        FUN3(VAR2, &VAR18->VAR26);
        FUN3(VAR2, &VAR18->VAR27.VAR28);
        FUN3(VAR2, &VAR18->VAR27.VAR29);
    }
    FUN7(VAR2, VAR10->VAR30, sizeof(VAR10->VAR30));
    FUN7(VAR2, VAR7, sizeof(VAR7));
    FUN8(VAR10, FUN9(VAR10, VAR31));
    FUN10(VAR32, VAR33);
    FUN10(VAR34, VAR35);
    FUN10(VAR36, VAR37);
    FUN11(VAR10, VAR7);
    VAR10->VAR38 = 0;
    VAR10->VAR39 = 0;
    return 0;
}