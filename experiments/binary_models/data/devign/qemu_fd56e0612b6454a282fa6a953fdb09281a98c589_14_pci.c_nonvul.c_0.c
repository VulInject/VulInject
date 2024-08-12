static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    for (;;)
    {
        VAR6 = FUN2(VAR2);
        VAR3 = VAR6->FUN3(VAR2, VAR3);
        if (VAR6->VAR7)
            break;
        VAR2 = VAR6->VAR8;
    }
    VAR6->VAR9[VAR3] += VAR4;
    VAR6->FUN4(VAR6->VAR10, VAR3, VAR6->VAR9[VAR3] != 0);
}