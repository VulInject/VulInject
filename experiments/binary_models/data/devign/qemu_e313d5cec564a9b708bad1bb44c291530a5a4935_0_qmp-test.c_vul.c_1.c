static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6, *VAR7, *VAR8;
    const char *VAR9;
    for (VAR4 = VAR2->VAR10; VAR4; VAR4 = VAR4->VAR11)
    {
        VAR6 = VAR4->VAR12;
        if (VAR6->VAR13 != VAR14)
        {
            continue;
        }
        if (FUN2(VAR6->VAR15))
        {
            continue;
        }
        VAR7 = FUN3(VAR2, VAR6->VAR16.VAR17.VAR7);
        if (FUN4(VAR7))
        {
            continue;
        }
        VAR8 = FUN3(VAR2, VAR6->VAR16.VAR17.VAR8);
        if (VAR8->VAR13 == VAR18 && !VAR8->VAR16.VAR19.VAR20)
        {
            continue;
        }
        VAR9 = FUN5("", VAR6->VAR15);
        FUN6(VAR9, VAR6->VAR15, VAR21);
    }
}