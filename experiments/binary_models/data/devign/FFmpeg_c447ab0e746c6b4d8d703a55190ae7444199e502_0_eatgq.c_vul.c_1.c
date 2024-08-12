static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7;
    int VAR8;
    int8_t VAR9[6];
    VAR7 = FUN2(&VAR2->VAR10);
    if (VAR7 > 12)
    {
        GetBitContext VAR10;
        FUN3(&VAR10, VAR2->VAR10.VAR11, FUN4(FUN5(&VAR2->VAR10), VAR7));
        for (VAR8 = 0; VAR8 < 6; VAR8++)
            FUN6(VAR2, VAR2->VAR12[VAR8], &VAR10);
        FUN7(VAR2, VAR2->VAR12, VAR4, VAR6, VAR5);
        FUN8(&VAR2->VAR10, VAR7);
    }
    else
    {
        if (VAR7 == 3)
        {
            memset(VAR9, FUN2(&VAR2->VAR10), 4);
            VAR9[4] = FUN2(&VAR2->VAR10);
            VAR9[5] = FUN2(&VAR2->VAR10);
        }
        else if (VAR7 == 6)
        {
            FUN9(&VAR2->VAR10, VAR9, 6);
        }
        else if (VAR7 == 12)
        {
            for (VAR8 = 0; VAR8 < 6; VAR8++)
            {
                VAR9[VAR8] = FUN2(&VAR2->VAR10);
                FUN8(&VAR2->VAR10, 1);
            }
        }
        else
        {
            FUN10(VAR2->VAR13, VAR14, "", VAR7);
            return -1;
        }
        FUN11(VAR2, VAR4, VAR6, VAR5, VAR9);
    }
    return 0;
}