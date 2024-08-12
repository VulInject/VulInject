static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    if (FUN2(VAR7->VAR9, VAR7->VAR10, 0, VAR4) < 0)
        return FUN3(VAR11);
    VAR2->VAR9 = VAR7->VAR9;
    VAR2->VAR10 = VAR7->VAR10;
    VAR2->VAR12 = VAR7->VAR12;
    if (!(VAR7->VAR13 = VAR7->FUN4(VAR2->VAR9, VAR2->VAR10)))
    {
        FUN5(VAR4, VAR14, "");
        return FUN3(VAR11);
    }
    return FUN6(VAR4, VAR7->VAR15);