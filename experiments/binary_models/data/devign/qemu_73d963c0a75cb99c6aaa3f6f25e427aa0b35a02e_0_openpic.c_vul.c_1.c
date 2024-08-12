static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR3;
    unsigned int VAR7;
    if (VAR4 != 1)
    {
        return -VAR8;
    }
    FUN2(VAR2, &VAR6->VAR9);
    FUN2(VAR2, &VAR6->VAR10);
    FUN2(VAR2, &VAR6->VAR11);
    FUN2(VAR2, &VAR6->VAR12);
    FUN2(VAR2, &VAR6->VAR13);
    FUN2(VAR2, &VAR6->VAR14);
    for (VAR7 = 0; VAR7 < VAR6->VAR14; VAR7++)
    {
        FUN3(VAR2, &VAR6->VAR15[VAR7].VAR16);
        FUN4(VAR2, &VAR6->VAR15[VAR7].VAR17);
        FUN4(VAR2, &VAR6->VAR15[VAR7].VAR18);
        FUN5(VAR2, (VAR19 *)&VAR6->VAR15[VAR7].VAR20, sizeof(VAR6->VAR15[VAR7].VAR20));
    }
    for (VAR7 = 0; VAR7 < VAR21; VAR7++)
    {
        FUN2(VAR2, &VAR6->VAR22[VAR7].VAR23);
        FUN2(VAR2, &VAR6->VAR22[VAR7].VAR24);
    }
    for (VAR7 = 0; VAR7 < VAR6->VAR25; VAR7++)
    {
        uint32_t VAR26;
        VAR26 = FUN6(VAR2);
        FUN7(VAR6, VAR7, VAR26);
        VAR26 = FUN6(VAR2);
        FUN8(VAR6, VAR7, VAR26);
        FUN2(VAR2, &VAR6->VAR27[VAR7].VAR28);
        FUN2(VAR2, &VAR6->VAR27[VAR7].VAR29);
        FUN2(VAR2, &VAR6->VAR27[VAR7].VAR30);
        FUN3(VAR2, &VAR6->VAR27[VAR7].VAR31);
        FUN3(VAR2, &VAR6->VAR27[VAR7].VAR32);
    }
    return 0;
}