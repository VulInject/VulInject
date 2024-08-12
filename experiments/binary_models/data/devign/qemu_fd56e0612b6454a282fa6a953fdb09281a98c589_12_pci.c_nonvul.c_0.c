static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5;
    pcibus_t VAR6;
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        VAR4 = &VAR2->VAR8[VAR5];
        if (!VAR4->VAR9)
            continue;
        VAR6 = FUN2(VAR2, VAR5, VAR4->VAR10, VAR4->VAR9);
        if (VAR6 == VAR4->VAR11)
            continue;
        if (VAR4->VAR11 != VAR12)
        {
            FUN3(VAR2, FUN4(VAR2), FUN5(VAR2->VAR13), FUN6(VAR2->VAR13), VAR5, VAR4->VAR11, VAR4->VAR9);
            FUN7(VAR4->VAR14, VAR4->VAR15);
        }
        VAR4->VAR11 = VAR6;
        if (VAR4->VAR11 != VAR12)
        {
            FUN8(VAR2, FUN4(VAR2), FUN5(VAR2->VAR13), FUN6(VAR2->VAR13), VAR5, VAR4->VAR11, VAR4->VAR9);
            FUN9(VAR4->VAR14, VAR4->VAR11, VAR4->VAR15, 1);
        }
    }
    FUN10(VAR2);
}