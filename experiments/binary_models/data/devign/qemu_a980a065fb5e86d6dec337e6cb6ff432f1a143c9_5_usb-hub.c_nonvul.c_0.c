static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6;
    int VAR7;
    FUN3(VAR2);
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        VAR6 = &VAR4->VAR9[VAR7];
        FUN4(FUN5(VAR2), &VAR6->VAR6, VAR4, VAR7, &VAR4->VAR2, VAR10);
        VAR6->VAR11 = VAR12;
        VAR6->VAR13 = 0;
    }
    return 0;
}