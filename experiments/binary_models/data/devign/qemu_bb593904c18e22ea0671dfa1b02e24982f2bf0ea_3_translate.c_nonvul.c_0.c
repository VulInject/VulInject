void FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, int VAR6)
{
    int VAR7;
    FUN2(VAR4, "" VAR8 "" VAR8 "" VAR8 "" VAR8 "", VAR2->VAR9, VAR2->VAR10, VAR2->VAR11, VAR2->VAR12);
    FUN2(VAR4, "" VAR8 "" VAR8 "" VAR8 "", VAR2->VAR13, VAR2->VAR14[VAR15], VAR2->VAR16, VAR2->VAR17);
    FUN2(VAR4, "" VAR18 "" VAR19 "" VAR18 "", FUN3(VAR2), FUN4(VAR2), FUN5(VAR2));
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        if ((VAR7 & (VAR20 - 1)) == 0)
            FUN2(VAR4, "", VAR7);
        FUN2(VAR4, "" VAR21, FUN6(VAR2, VAR7));
        if ((VAR7 & (VAR20 - 1)) == (VAR20 - 1))
            FUN2(VAR4, "");
    }
    FUN2(VAR4, "");
    for (VAR7 = 0; VAR7 < 8; VAR7++)
        FUN2(VAR4, "", VAR2->VAR22[VAR7]);
    FUN2(VAR4, "");
    for (VAR7 = 0; VAR7 < 8; VAR7++)
    {
        char VAR23 = '';
        if (VAR2->VAR22[VAR7] & 0x08)
            VAR23 = '';
        else if (VAR2->VAR22[VAR7] & 0x04)
            VAR23 = '';
        else if (VAR2->VAR22[VAR7] & 0x02)
            VAR23 = '';
        FUN2(VAR4, "", VAR23, VAR2->VAR22[VAR7] & 0x01 ? '' : '');
    }
    FUN2(VAR4, "" VAR8 "", VAR2->VAR24);
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        if ((VAR7 & (VAR25 - 1)) == 0)
            FUN2(VAR4, "", VAR7);
        FUN2(VAR4, "" VAR21, *((VAR26 *)&VAR2->VAR27[VAR7]));
        if ((VAR7 & (VAR25 - 1)) == (VAR25 - 1))
            FUN2(VAR4, "");
    }
    FUN2(VAR4, "", VAR2->VAR28);
    FUN2(VAR4, "" VAR8 "" VAR8 "" VAR8 "", VAR2->VAR14[VAR29], VAR2->VAR14[VAR30], VAR2->VAR14[VAR31]);
}