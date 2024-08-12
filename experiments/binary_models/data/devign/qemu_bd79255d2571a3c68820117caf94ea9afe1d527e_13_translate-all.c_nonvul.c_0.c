static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uintptr_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR11;
    int VAR12;
    uintptr_t VAR13;
    int64_t VAR14;
    VAR14 = FUN2();
    FUN3(VAR10);
    FUN4(VAR7, VAR4);
    if (VAR4->VAR15 & VAR16)
    {
        VAR2->VAR17.VAR18.VAR19 += VAR4->VAR20;
        VAR2->VAR21 = 0;
    }
    VAR13 = (VAR22)VAR4->VAR13;
    if (VAR5 < VAR13)
        return -1;
    VAR10->VAR23 = VAR4->VAR23;
    VAR10->VAR24 = VAR4->VAR24;
    VAR10->VAR25 = NULL;
    VAR10->VAR24 = NULL;
    VAR10->VAR25 = VAR4->VAR25;
    VAR12 = FUN5(VAR10, (VAR26 *)VAR13, VAR5 - VAR13);
    if (VAR12 < 0)
        return -1;
    while (VAR10->VAR27[VAR12] == 0)
    {
        VAR12--;
    }
    VAR2->VAR17.VAR18.VAR19 -= VAR10->VAR28[VAR12];
    FUN6(VAR7, VAR4, VAR12);
    VAR10->VAR29 += FUN2() - VAR14;
    VAR10->VAR30++;
    return 0;
}