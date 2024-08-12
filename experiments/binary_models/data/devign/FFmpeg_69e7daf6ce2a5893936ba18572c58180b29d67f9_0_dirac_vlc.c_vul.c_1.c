static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        VAR1 *VAR6 = &VAR2[VAR4];
        FUN2(VAR7);
        FUN3(VAR7, VAR4, VAR8);
        VAR6->VAR9 = FUN4(VAR7 >> (VAR10 - VAR3), VAR3);
        VAR6->VAR11 = VAR3;
        VAR6->VAR12 = ((VAR6->VAR9 >> (VAR10 - VAR6->VAR11)) & 1) ? -1 : +1;
        FUN5(VAR6, VAR7 << VAR3, VAR8 - VAR3);
    }
}