FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, int VAR6)
{
    int VAR7;
    if (!FUN2(VAR2->VAR8.VAR9))
        FUN3(VAR4, "" VAR10 "", VAR2->VAR8.VAR9);
    if (!FUN2(VAR2->VAR8.VAR11[0]))
        FUN3(VAR4, "" VAR10 "", VAR2->VAR8.VAR11[0]);
    if (!FUN2(VAR2->VAR8.VAR12[0]))
        FUN3(VAR4, "" VAR10 "", VAR2->VAR8.VAR12[0]);
    if (!FUN2(VAR2->VAR13))
        FUN3(VAR4, "" VAR10 "", VAR2->VAR13);
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        if (!FUN2(VAR2->VAR8.VAR14[VAR7]))
            FUN3(VAR4, "" VAR10 "", VAR15[VAR7], VAR2->VAR8.VAR14[VAR7]);
    }
    if (!FUN2(VAR2->VAR16))
        FUN3(VAR4, "" VAR10 "", VAR2->VAR16);
    if (!FUN2(VAR2->VAR17))
        FUN3(VAR4, "" VAR10 "", VAR2->VAR17);
}