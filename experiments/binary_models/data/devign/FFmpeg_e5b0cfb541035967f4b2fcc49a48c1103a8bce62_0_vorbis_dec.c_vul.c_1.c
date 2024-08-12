static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint_fast8_t VAR5;
    VAR2->VAR6 = FUN2(VAR4, 6) + 1;
    VAR2->VAR7 = FUN3(VAR2->VAR6 * sizeof(VAR8));
    FUN4("", VAR2->VAR6);
    for (VAR5 = 0; VAR5 < VAR2->VAR6; ++VAR5)
    {
        VAR8 *VAR9 = &VAR2->VAR7[VAR5];
        VAR9->VAR10 = FUN5(VAR4);
        VAR9->VAR11 = FUN2(VAR4, 16);
        VAR9->VAR12 = FUN2(VAR4, 16);
        VAR9->VAR13 = FUN2(VAR4, 8);
        FUN4("", VAR5, VAR9->VAR10, VAR9->VAR11, VAR9->VAR12, VAR9->VAR13);
    }
    return 0;
}