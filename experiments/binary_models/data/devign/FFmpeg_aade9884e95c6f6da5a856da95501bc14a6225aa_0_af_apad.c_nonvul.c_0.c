static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR6->VAR10;
    if (VAR9->VAR11 >= 0)
    {
        VAR9->VAR12 = FUN2(VAR9->VAR12 - VAR4->VAR13, 0);
        FUN3(VAR6, VAR14, "" VAR15 "", VAR4->VAR13, VAR9->VAR12);
    }
    VAR9->VAR16 = VAR4->VAR17 + FUN4(VAR4->VAR13, (VAR18){1, VAR2->VAR19}, VAR2->VAR20);
    return FUN5(VAR6->VAR21[0], VAR4);
}