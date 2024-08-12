void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (!VAR2->VAR5)
        return;
    FUN2(VAR4, VAR2->VAR6);
    if (VAR4->VAR7)
    {
        if (VAR4->VAR7 != &VAR4->VAR8[0])
            FUN3(VAR4->VAR8[0].VAR2, VAR4->VAR7->VAR2, 0);
        if (VAR2->VAR9->VAR10)
            VAR2->VAR9->FUN4(VAR4->VAR8[0].VAR2);
    }
    VAR4->VAR11 = VAR4->VAR12 = 0;
    VAR4->VAR13 = 1;
    VAR4->VAR7 = NULL;
    for (int VAR14 = 0; VAR14 < VAR2->VAR6; VAR14++)
    {
        VAR15 *VAR16 = &VAR4->VAR8[VAR14];
        VAR16->VAR17 = 0;
        FUN5(VAR16);
    }
}