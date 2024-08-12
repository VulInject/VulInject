static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    while (FUN3(VAR4))
    {
        unsigned VAR8 = VAR7->VAR9.VAR10;
        unsigned VAR11 = 0;
        VAR12 *VAR13;
        if (VAR8 > 1)
        {
            VAR11 = FUN4(VAR4);
            if (VAR11 >= VAR8)
            {
                FUN5("", VAR11);
                return -VAR14;
            }
        }
        VAR13 = FUN6(VAR2, VAR4, sizeof(VAR12));
        FUN7(VAR7, FUN8(VAR2, VAR11), VAR13);
        VAR13->VAR15 = VAR7->VAR16;
        VAR7->VAR16 = VAR13;
    }
    return 0;
}