static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    struct VAR6 *VAR7;
    int VAR8, VAR9;
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        VAR5->VAR11[VAR9] = 0;
    }
    VAR5->VAR12 = 0;
    VAR5->VAR3 = 0;
    FUN3(VAR2);
    VAR8 = FUN4(VAR2->VAR13, &VAR7);
    if (VAR8 != 0)
    {
        if (VAR8 == VAR14)
        {
            return VAR15;
        }
        return VAR16;
    }
    for (VAR9 = 0; VAR9 < VAR7->VAR17; VAR9++)
    {
        FUN5(VAR2->VAR18, VAR2->VAR19, VAR3, VAR9);
        VAR8 = FUN6(VAR2->VAR20, VAR9);
        FUN7("", VAR8);
        if (VAR8 != 0)
        {
            return VAR16;
        }
        VAR2->VAR21[VAR9].VAR22 = true;
    }
    VAR5->VAR12 = VAR7->VAR17;
    VAR5->VAR3 = VAR3;
    FUN8(VAR7);
    return VAR15;
}