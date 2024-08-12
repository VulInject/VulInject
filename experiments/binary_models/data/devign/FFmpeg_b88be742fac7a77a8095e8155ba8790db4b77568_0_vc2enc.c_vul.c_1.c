static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = VAR2->VAR5;
    const VAR6 *VAR7 = FUN2(VAR5->VAR8);
    const int VAR9 = VAR7->VAR10[0].VAR9;
    if (VAR9 == 8 && VAR5->VAR11 == VAR12)
    {
        VAR3 = 1;
        VAR2->VAR13 = 1;
        VAR2->VAR14 = 128;
    }
    else if (VAR9 == 8 && (VAR5->VAR11 == VAR15 || VAR5->VAR11 == VAR16))
    {
        VAR3 = 2;
        VAR2->VAR13 = 1;
        VAR2->VAR14 = 128;
    }
    else if (VAR9 == 10)
    {
        VAR3 = 3;
        VAR2->VAR13 = 2;
        VAR2->VAR14 = 512;
    }
    else
    {
        VAR3 = 4;
        VAR2->VAR13 = 2;
        VAR2->VAR14 = 2048;
    }
    FUN3(&VAR2->VAR17, 1, !VAR2->VAR18);
    if (!VAR2->VAR18)
        FUN4(&VAR2->VAR17, VAR3);
}