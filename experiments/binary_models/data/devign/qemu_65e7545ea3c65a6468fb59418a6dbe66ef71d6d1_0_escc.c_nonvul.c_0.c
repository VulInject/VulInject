static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    unsigned int VAR5;
    VAR4->VAR6[0].VAR7 = VAR4->VAR7;
    VAR4->VAR6[1].VAR7 = VAR4->VAR7;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        FUN3(VAR2, &VAR4->VAR6[VAR5].VAR8);
        VAR4->VAR6[VAR5].VAR6 = 1 - VAR5;
        VAR4->VAR6[VAR5].VAR9 = VAR4->VAR10 / 2;
        if (VAR4->VAR6[VAR5].VAR11)
        {
            FUN4(VAR4->VAR6[VAR5].VAR11, VAR12, VAR13, VAR14, &VAR4->VAR6[VAR5]);
        }
    }
    VAR4->VAR6[0].VAR15 = &VAR4->VAR6[1];
    VAR4->VAR6[1].VAR15 = &VAR4->VAR6[0];
    FUN5(&VAR4->VAR16, FUN6(VAR4), &VAR17, VAR4, "", VAR18 << VAR4->VAR19);
    FUN7(VAR2, &VAR4->VAR16);
    if (VAR4->VAR6[0].VAR20 == VAR21)
    {
        FUN8(VAR22, &VAR4->VAR6[0], 0, "");
    }
    if (VAR4->VAR6[1].VAR20 == VAR23)
    {
        VAR4->VAR6[1].VAR24 = FUN9((VAR25 *)(&VAR4->VAR6[1]), &VAR26);
    }
    return 0;
}