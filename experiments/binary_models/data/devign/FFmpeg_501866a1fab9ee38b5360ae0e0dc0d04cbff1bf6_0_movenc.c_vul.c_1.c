static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = FUN2(VAR2);
    int VAR8;
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    FUN5(VAR2, VAR4, VAR6);
    for (VAR8 = 0; VAR8 < VAR9; VAR8++)
    {
        if (VAR4->VAR10[VAR8].VAR11 <= 0)
            continue;
        if (VAR4->VAR10[VAR8].VAR12->VAR13 == VAR14 || VAR4->VAR10[VAR8].VAR12->VAR13 == VAR15)
        {
            int VAR7 = FUN2(VAR2);
            FUN3(VAR2, 0);
            FUN4(VAR2, "");
            FUN6(VAR2, sizeof("") - 1);
            FUN6(VAR2, 0);
            FUN7(VAR2, "", sizeof("") - 1);
            FUN8(VAR2, VAR7);
            break;
        }
    }
    if (!(VAR4->VAR10[0].VAR12->VAR16 & VAR17))
    {
        int VAR7 = FUN2(VAR2);
        FUN3(VAR2, 0);
        FUN4(VAR2, "");
        FUN6(VAR2, sizeof(VAR18) - 1);
        FUN6(VAR2, 0);
        FUN7(VAR2, VAR18, sizeof(VAR18) - 1);
        FUN8(VAR2, VAR7);
    }
    if (VAR6->VAR19[0])
    {
        int VAR7 = FUN2(VAR2);
        FUN3(VAR2, 0);
        FUN4(VAR2, "");
        FUN6(VAR2, strlen(VAR6->VAR19));
        FUN6(VAR2, 0);
        FUN7(VAR2, VAR6->VAR19, strlen(VAR6->VAR19));
        FUN8(VAR2, VAR7);
    }
    if (VAR6->VAR20[0])
    {
        int VAR7 = FUN2(VAR2);
        FUN3(VAR2, 0);
        FUN4(VAR2, "");
        FUN6(VAR2, strlen(VAR6->VAR20));
        FUN6(VAR2, 0);
        FUN7(VAR2, VAR6->VAR20, strlen(VAR6->VAR20));
        FUN8(VAR2, VAR7);
    }
    if (VAR6->VAR21[0])
    {
        int VAR7 = FUN2(VAR2);
        FUN3(VAR2, 0);
        FUN4(VAR2, "");
        FUN6(VAR2, strlen(VAR6->VAR21));
        FUN6(VAR2, 0);
        FUN7(VAR2, VAR6->VAR21, strlen(VAR6->VAR21));
        FUN8(VAR2, VAR7);
    }
    return FUN8(VAR2, VAR7);
}