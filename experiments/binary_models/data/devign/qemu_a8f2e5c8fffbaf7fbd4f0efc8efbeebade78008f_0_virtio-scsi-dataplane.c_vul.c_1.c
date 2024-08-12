void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    VAR5 *VAR6 = FUN2(FUN3(FUN4(VAR2)));
    VAR7 *VAR8 = FUN5(VAR6);
    VAR9 *VAR10 = FUN6(VAR2);
    if (VAR2->VAR11 || VAR2->VAR12 || VAR2->VAR13 || VAR2->VAR14 != FUN7(VAR10->VAR15.VAR16))
    {
        return;
    }
    VAR2->VAR12 = true;
    VAR4 = VAR8->FUN8(VAR6->VAR17, VAR10->VAR15.VAR18 + 2, true);
    if (VAR4 != 0)
    {
        fprintf(VAR19, ""
                        "",
                VAR4);
        goto VAR20;
    }
    FUN9(VAR2->VAR14);
    VAR4 = FUN10(VAR2, VAR10->VAR21, 0);
    if (VAR4)
    {
        goto VAR22;
    }
    VAR4 = FUN10(VAR2, VAR10->VAR23, 1);
    if (VAR4)
    {
        goto VAR22;
    }
    for (VAR3 = 0; VAR3 < VAR10->VAR15.VAR18; VAR3++)
    {
        VAR4 = FUN10(VAR2, VAR10->VAR24[VAR3], VAR3 + 2);
        if (VAR4)
        {
            goto VAR22;
        }
    }
    VAR2->VAR12 = false;
    VAR2->VAR11 = true;
    FUN11(VAR2->VAR14);
    return;
VAR22:
    FUN12(VAR2);
    FUN11(VAR2->VAR14);
    for (VAR3 = 0; VAR3 < VAR10->VAR15.VAR18 + 2; VAR3++)
    {
        VAR8->FUN13(VAR6->VAR17, VAR3, false);
    }
    VAR8->FUN8(VAR6->VAR17, VAR10->VAR15.VAR18 + 2, false);
VAR20:
    VAR2->VAR13 = true;
    VAR2->VAR12 = false;
    VAR2->VAR11 = true;
}