void FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = FUN2(VAR4);
    int VAR10, VAR11;
    CPUDebug VAR12;
    FUN3(VAR12.VAR13, (VAR14 *)VAR2, VAR15);
    VAR12.VAR4 = VAR4;
    VAR16 = VAR7;
    VAR12.VAR13.VAR17 = VAR18;
    VAR12.VAR13.VAR19 = VAR20;
    VAR12.VAR13.VAR21 = VAR5;
    VAR12.VAR13.VAR22 = -1;
    VAR12.VAR13.VAR23 = 0;
    VAR12.VAR13.VAR24 = VAR25;
    VAR12.VAR13.VAR24 = VAR26;
    if (VAR9->VAR27)
    {
        VAR9->FUN4(VAR4, &VAR12.VAR13);
    }
    if (VAR12.VAR13.VAR22 >= 0 && FUN5(&VAR12.VAR13, VAR5, VAR6))
    {
        return;
    }
    if (!VAR12.VAR13.VAR28)
    {
        FUN6(VAR2, "" VAR29 "", VAR5);
        return;
    }
    for (VAR11 = 0; VAR11 < VAR6; VAR11++)
    {
        FUN6(VAR2, "" VAR29 "", VAR5);
        VAR10 = VAR12.VAR13.FUN7(VAR5, &VAR12.VAR13);
        FUN6(VAR2, "");
        if (VAR10 < 0)
            break;
        VAR5 += VAR10;
    }
}