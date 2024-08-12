static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR10[0]->VAR11;
    GetBitContext VAR12;
    int VAR13;
    FUN2(VAR4, 1, !!VAR6->VAR14);
    if (!VAR6->VAR14)
    {
        FUN3(&VAR12, VAR9->VAR15, VAR9->VAR16 * 8);
        FUN2(VAR4, 1, 0);
        FUN2(VAR4, 1, 1);
        FUN2(VAR4, 6, 0);
        FUN2(VAR4, 4, 0);
        FUN2(VAR4, 3, 0);
        if (VAR6->VAR17 == VAR18)
        {
            VAR13 = VAR9->VAR16 - (VAR6->VAR19 + 7) >> 3;
            FUN4(VAR4, &VAR9->VAR15[VAR6->VAR19], VAR13);
        }
        else
        {
            FUN4(VAR4, VAR9->VAR15, VAR6->VAR19 + 3);
            if (!VAR6->VAR20)
            {
                FUN5(VAR4, &VAR12);
            }
        }
        FUN2(VAR4, 3, 0);
        FUN2(VAR4, 8, 0xff);
        FUN2(VAR4, 1, 0);
        FUN2(VAR4, 1, 0);
    }
    VAR6->VAR14++;
    VAR6->VAR14 %= VAR6->VAR21;
}