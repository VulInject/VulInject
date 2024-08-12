static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const VAR9 *VAR10 = VAR5;
    int VAR11;
    if (VAR7->VAR12.VAR13 == 1)
        FUN2(VAR7);
    FUN3(VAR7, VAR10);
    FUN4(VAR7);
    FUN5(VAR7);
    FUN6(VAR7);
    FUN7(VAR7);
    FUN8(VAR7);
    VAR11 = FUN9(VAR7);
    if (VAR11)
    {
        FUN10(VAR2, VAR14, "");
        return VAR11;
    }
    FUN11(VAR7);
    FUN12(VAR7, VAR3);
    return VAR7->VAR15;
}