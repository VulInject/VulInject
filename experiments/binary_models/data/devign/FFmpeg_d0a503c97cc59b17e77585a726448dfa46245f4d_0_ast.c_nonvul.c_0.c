static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, NULL);
    if (!VAR6)
        return FUN3(VAR7);
    FUN4(VAR2->VAR8, 8);
    VAR3 = FUN5(VAR2->VAR8);
    switch (VAR3)
    {
    case 1:
        VAR6->VAR3->VAR9 = VAR10;
        break;
    default:
        FUN6(VAR2, VAR11, "", VAR3);
    }
    VAR4 = FUN5(VAR2->VAR8);
    if (VAR4 != 16)
    {
        FUN7(VAR2, "", VAR4);
        return VAR12;
    }
    VAR6->VAR3->VAR13 = VAR14;
    VAR6->VAR3->VAR15 = FUN5(VAR2->VAR8);
    if (!VAR6->VAR3->VAR15)
        return VAR12;
    if (VAR6->VAR3->VAR15 == 2)
        VAR6->VAR3->VAR16 = VAR17;
    else if (VAR6->VAR3->VAR15 == 4)
        VAR6->VAR3->VAR16 = VAR18;
    FUN4(VAR2->VAR8, 2);
    VAR6->VAR3->VAR19 = FUN8(VAR2->VAR8);
    if (VAR6->VAR3->VAR19 <= 0)
        return VAR12;
    VAR6->VAR20 = 0;
    VAR6->VAR21 = FUN8(VAR2->VAR8);
    FUN4(VAR2->VAR8, 40);
    FUN9(VAR6, 64, 1, VAR6->VAR3->VAR19);
    return 0;
}