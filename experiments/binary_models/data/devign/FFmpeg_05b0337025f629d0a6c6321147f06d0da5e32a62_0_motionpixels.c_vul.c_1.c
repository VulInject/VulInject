static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    YuvPixel VAR5;
    int VAR6, VAR7;
    for (VAR6 = 0; VAR6 < VAR2->VAR8->VAR9; ++VAR6)
    {
        if (VAR2->VAR10[VAR6 * VAR2->VAR8->VAR11] != 0)
        {
            memset(VAR2->VAR12, 1, sizeof(VAR2->VAR12));
            VAR5 = FUN2(VAR2, 0, VAR6);
        }
        else
        {
            VAR5.VAR6 += FUN3(VAR2, 0, FUN4(VAR2, VAR4));
            VAR5.VAR6 = FUN5(VAR5.VAR6, 0, 31);
            if ((VAR6 & 3) == 0)
            {
                VAR5.VAR13 += FUN3(VAR2, 1, FUN4(VAR2, VAR4));
                VAR5.VAR13 = FUN5(VAR5.VAR13, -32, 31);
                VAR5.VAR14 += FUN3(VAR2, 2, FUN4(VAR2, VAR4));
                VAR5.VAR14 = FUN5(VAR5.VAR14, -32, 31);
            }
            VAR2->VAR15[VAR6] = VAR5;
            FUN6(VAR2, 0, VAR6, &VAR5);
        }
    }
    for (VAR7 = 0; VAR7 < 2; ++VAR7)
        for (VAR6 = VAR7; VAR6 < VAR2->VAR8->VAR9; VAR6 += 2)
            FUN7(VAR2, VAR4, VAR6);