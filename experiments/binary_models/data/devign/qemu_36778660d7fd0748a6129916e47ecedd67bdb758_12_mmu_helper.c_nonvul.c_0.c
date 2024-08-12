static void FUN1(VAR1 *VAR2, fprintf_function VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = FUN2(VAR5);
    VAR8 *VAR9;
    target_ulong VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    FUN3(VAR2, "" VAR15 "", FUN4(VAR7));
    FUN3(VAR2, "" VAR15 "", FUN5(VAR7));
    FUN3(VAR2, "");
    for (VAR14 = 0; VAR14 < 32; VAR14++)
    {
        VAR10 = VAR5->VAR10[VAR14];
        if (VAR10 & 0x80000000)
        {
            FUN3(VAR2, ""
                           "",
                        VAR14, VAR10 & 0x80000000 ? 1 : 0, VAR10 & 0x40000000 ? 1 : 0, VAR10 & 0x20000000 ? 1 : 0, (VAR16)((VAR10 >> 20) & 0x1FF), (VAR16)(VAR10 & 0xFFFFF));
        }
        else
        {
            FUN3(VAR2, "", VAR14, VAR10 & 0x80000000 ? 1 : 0, VAR10 & 0x40000000 ? 1 : 0, VAR10 & 0x20000000 ? 1 : 0, VAR10 & 0x10000000 ? 1 : 0, (VAR16)(VAR10 & 0x00FFFFFF));
        }
    }
    FUN3(VAR2, "");
    FUN6(VAR2, VAR3, VAR5, VAR17);
    FUN6(VAR2, VAR3, VAR5, VAR18);
    if (VAR5->VAR19 != 1)
    {
        FUN3(VAR2, ""
                       "");
    }
    FUN3(VAR2, "");
    for (VAR11 = 0; VAR11 < 2; VAR11++)
    {
        for (VAR12 = 0; VAR12 < VAR5->VAR20; VAR12++)
        {
            for (VAR13 = VAR5->VAR21 * VAR11 + VAR5->VAR22 * VAR12; VAR13 < (VAR5->VAR21 * VAR11 + VAR5->VAR22 * (VAR12 + 1)); VAR13++)
            {
                VAR9 = &VAR5->VAR9.VAR23[VAR13];
                FUN3(VAR2, "" VAR24 "" VAR24 "", VAR11 ? "" : "", VAR13 % VAR5->VAR21, VAR5->VAR21, VAR12, FUN7(VAR9->VAR25) ? "" : "", VAR9->VAR26, VAR9->VAR26 + VAR27);
            }
        }
    }
}