static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    while (FUN3(VAR4))
    {
        VAR8 *VAR9 = FUN4(VAR7);
        FUN5(VAR4, (unsigned char *)VAR9->VAR10, sizeof(VAR11));
        VAR9->VAR12 = VAR7->VAR13;
        VAR7->VAR13 = VAR9;
        FUN6(VAR9->VAR10->VAR14, VAR9->VAR10->VAR15, VAR9->VAR10->VAR16, 1);
        FUN6(VAR9->VAR10->VAR17, VAR9->VAR10->VAR18, VAR9->VAR10->VAR19, 0);
    }
    return 0;
}