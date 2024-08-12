static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    FUN2(VAR2->VAR9, 4);
    if (FUN3(VAR2->VAR9))
        return VAR10;
    VAR3 = FUN3(VAR2->VAR9);
    if (VAR3 && VAR3 != 1)
        return VAR10;
    if (VAR3)
    {
        VAR4 = FUN3(VAR2->VAR9);
        VAR5 = FUN3(VAR2->VAR9);
        VAR6 = FUN3(VAR2->VAR9);
    }
    else
    {
        VAR4 = FUN4(VAR2->VAR9);
        VAR5 = FUN4(VAR2->VAR9);
        VAR6 = FUN4(VAR2->VAR9);
    }
    if (!VAR6 || !VAR4)
        return VAR10;
    VAR8 = FUN5(VAR2, NULL);
    if (!VAR8)
        return FUN6(VAR11);
    VAR8->VAR12->VAR13 = VAR14;
    VAR8->VAR12->VAR6 = VAR6;
    VAR8->VAR12->VAR4 = VAR4;
    switch (VAR5)
    {
    case 0:
        VAR8->VAR12->VAR15 = VAR3 ? VAR16 : VAR17;
        break;
    case 2:
        VAR8->VAR12->VAR15 = VAR18;
        break;
    case 1:
        FUN7(VAR2, "");
    default:
        return VAR10;
    }
    VAR8->VAR12->VAR19 = FUN8(VAR8->VAR12->VAR15);
    VAR8->VAR12->VAR20 = VAR8->VAR12->VAR19 * VAR8->VAR12->VAR6 / 8;
    FUN9(VAR8, 64, 1, VAR8->VAR12->VAR4);
    if (FUN2(VAR2->VAR9, 2024) < 0)
        return VAR10;
    return 0;
}