static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    int VAR8, VAR9;
    if (VAR4->VAR10 == 2)
    {
        if (!VAR4->VAR11)
            return;
        VAR8 = 1;
    }
    else
    {
        VAR8 = VAR12 - 1;
    }
    VAR6 = VAR4->VAR13 + 18;
    for (VAR9 = VAR8; VAR9 > 0; VAR9--)
    {
        int VAR14, VAR15, VAR16;
        VAR7 = &VAR17[0][0];
        VAR14 = 4 * (VAR6[-1 - VAR18]);
        VAR15 = 4 * (VAR6[VAR18]);
        VAR16 = FUN2(VAR14 + VAR15, VAR7[0 + 4 * VAR18]);
        VAR6[-1 - VAR18] = VAR16 - FUN2(VAR15, VAR7[2 + 4 * VAR18]);
        VAR6[VAR18] = VAR16 + FUN2(VAR14, VAR7[3 + 4 * VAR18]);
        FUN3(0)
        FUN3(1) FUN3(2) FUN3(3) FUN3(4) FUN3(5) FUN3(6) FUN3(7) VAR6 += 18;
    }
}