VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    static int VAR4 = 0;
    int VAR5;
    VAR3 = FUN2(sizeof(VAR1));
    FUN3(VAR3);
    FUN4(VAR3);
    if (VAR4)
        return VAR3;
    VAR4 = 1;
    VAR6 = FUN5(VAR7, "");
    VAR8 = FUN6(VAR7, FUN7(VAR1, VAR9), "");
    VAR10 = FUN6(VAR7, FUN7(VAR1, VAR11), "");
    VAR12 = FUN6(VAR7, FUN7(VAR1, VAR13), "");
    VAR14 = FUN6(VAR7, FUN7(VAR1, VAR15), "");
    VAR16 = FUN6(VAR7, FUN7(VAR1, VAR17), "");
    for (VAR5 = 0; VAR5 < FUN8(VAR18); VAR5++)
    {
        VAR18[VAR5] = FUN6(VAR7, FUN7(VAR1, VAR19[VAR5]), VAR20[VAR5]);
    }
    for (VAR5 = 0; VAR5 < FUN8(VAR21); VAR5++)
    {
        VAR21[VAR5] = FUN6(VAR7, FUN7(VAR1, VAR22[VAR5]), VAR23[VAR5]);
    }
    return VAR3;
}