static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR3;
    unsigned int VAR7;
    if (VAR4 != 1)
        return -VAR8;
    FUN2(VAR2, &VAR6->VAR9);
    FUN2(VAR2, &VAR6->VAR10);
    FUN2(VAR2, &VAR6->VAR11);
    FUN2(VAR2, &VAR6->VAR12);
    FUN2(VAR2, &VAR6->VAR13);
    for (VAR7 = 0; VAR7 < VAR6->VAR14; VAR7++)
    {
        FUN2(VAR2, &VAR6->VAR15[VAR7].VAR16);
        FUN2(VAR2, &VAR6->VAR15[VAR7].VAR17);
        FUN3(VAR2, &VAR6->VAR15[VAR7].VAR18);
        FUN3(VAR2, &VAR6->VAR15[VAR7].VAR19);
    }
    FUN2(VAR2, &VAR6->VAR20);
    for (VAR7 = 0; VAR7 < VAR6->VAR20; VAR7++)
    {
        FUN2(VAR2, &VAR6->VAR21[VAR7].VAR22);
        FUN4(VAR2, &VAR6->VAR21[VAR7].VAR23);
        FUN4(VAR2, &VAR6->VAR21[VAR7].VAR24);
    }
    for (VAR7 = 0; VAR7 < VAR25; VAR7++)
    {
        FUN2(VAR2, &VAR6->VAR26[VAR7].VAR27);
        FUN2(VAR2, &VAR6->VAR26[VAR7].VAR28);
    }
    return 0;
}