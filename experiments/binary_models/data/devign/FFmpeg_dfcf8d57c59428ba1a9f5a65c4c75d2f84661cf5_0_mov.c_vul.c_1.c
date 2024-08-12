static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    int VAR10, VAR11;
    MOV_atom_t VAR12 = {0, 0, 0};
    VAR6->VAR13 = VAR2;
    VAR6->VAR14 = VAR15;
    if (!FUN2(VAR9))
        VAR12.VAR16 = FUN3(VAR9);
    else
        VAR12.VAR16 = 0x7FFFFFFFFFFFFFFFLL;
    VAR11 = FUN4(VAR6, VAR9, VAR12);
    if (VAR11 < 0 || (!VAR6->VAR17 && !VAR6->VAR18))
    {
        FUN5(VAR2, VAR19, "" VAR20 "", VAR11, VAR6->VAR17, VAR6->VAR18, FUN6(VAR9));
        return -1;
    }
    FUN7("", (int)FUN6(VAR9));
    if (!FUN2(VAR9) && (FUN6(VAR9) != VAR6->VAR21))
        FUN8(VAR9, VAR6->VAR21, VAR22);
    VAR6->VAR23 = VAR2->VAR24;
    for (VAR10 = 0; VAR10 < VAR6->VAR23; VAR10++)
    {
        VAR25 *VAR26 = VAR6->VAR27[VAR10];
        if (!VAR26->VAR28)
            VAR26->VAR28 = 1;
        if (!VAR26->VAR29)
            VAR26->VAR29 = VAR6->VAR29;
        FUN9(VAR2->VAR27[VAR10], 64, VAR26->VAR28, VAR26->VAR29);
        if (VAR2->VAR27[VAR10]->VAR30 != VAR31)
        {
            assert(VAR2->VAR27[VAR10]->VAR30 % VAR26->VAR28 == 0);
            VAR2->VAR27[VAR10]->VAR30 /= VAR26->VAR28;
        }
        VAR26->VAR32 = VAR10;
        FUN10(VAR6, VAR2->VAR27[VAR10]);
    }
    for (VAR10 = 0; VAR10 < VAR6->VAR23; VAR10++)
    {
        FUN11(&VAR6->VAR27[VAR10]->VAR33);
        FUN11(&VAR6->VAR27[VAR10]->VAR34);
        FUN11(&VAR6->VAR27[VAR10]->VAR35);
        FUN11(&VAR6->VAR27[VAR10]->VAR36);
        FUN11(&VAR6->VAR27[VAR10]->VAR37);
    }
    FUN11(&VAR6->VAR38);
    return 0;
}