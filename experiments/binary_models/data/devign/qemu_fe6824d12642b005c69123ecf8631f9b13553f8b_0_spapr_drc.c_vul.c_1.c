static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, void *VAR7, VAR8 **VAR9)
{
    FUN2(FUN3(VAR2));
    VAR2->VAR6 = VAR6;
    VAR2->VAR7 = VAR7;
    if (!VAR2->VAR10 && !VAR2->VAR11)
    {
        VAR2->VAR12 = VAR13;
    }
    if (VAR2->VAR12 != VAR13)
    {
        FUN4(FUN3(VAR2));
        VAR2->VAR14 = true;
        return;
    }
    if (VAR2->VAR15 != VAR16 && VAR2->VAR17 != VAR18)
    {
        FUN5(FUN3(VAR2));
        VAR2->VAR14 = true;
        return;
    }
    if (VAR2->VAR19)
    {
        VAR2->VAR14 = true;
        FUN6(FUN3(VAR2));
        return;
    }
    VAR2->VAR20 = VAR21;
    if (VAR2->VAR6)
    {
        VAR2->FUN7(VAR2->VAR22, VAR2->VAR7);
    }
    VAR2->VAR14 = false;
    FUN8(VAR2->VAR23);
    VAR2->VAR23 = NULL;
    VAR2->VAR24 = 0;
    FUN9(FUN10(VAR2), "", NULL);
    VAR2->VAR22 = NULL;
    VAR2->VAR6 = NULL;
    VAR2->VAR7 = NULL;
}