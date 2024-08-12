static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5->VAR4;
    VAR6 *VAR7 = (VAR6 *)VAR2->VAR8[VAR2->VAR9]->VAR10;
    if (!VAR7)
        return (FUN2(VAR11));
    if (VAR7->VAR12.VAR13)
    {
        int VAR14 = FUN3(VAR4, 4);
        VAR2->VAR15 = VAR16;
        if (VAR14 == 2)
        {
            FUN4(VAR2->VAR17, VAR18, "");
            VAR2->VAR15 = VAR19;
        }
        else if (VAR14 == 1)
        {
            FUN4(VAR2->VAR17, VAR18, "");
            VAR2->VAR15 = VAR20;
        }
        FUN3(VAR4, 2);
        FUN3(VAR4, 1);
    }
    return 1;
}