static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6, *VAR7;
    VncState VAR8;
    int VAR9;
    int VAR10;
    FUN2(VAR2);
    while (FUN3(&VAR2->VAR11) && !VAR2->VAR12)
    {
        FUN4(&VAR2->VAR13, &VAR2->mutex);
    }
    VAR4 = FUN5(&VAR2->VAR11);
    FUN6(VAR2);
    if (VAR2->VAR12)
    {
        return -1;
    }
    FUN7(VAR4->VAR8);
    if (VAR4->VAR8->VAR14 == -1 || VAR4->VAR8->VAR15 == true)
    {
        FUN8(VAR4->VAR8);
        goto VAR16;
    }
    FUN8(VAR4->VAR8);
    FUN9(VAR4->VAR8, &VAR8);
    VAR9 = 0;
    FUN10(&VAR8, VAR17);
    FUN10(&VAR8, 0);
    VAR10 = VAR8.VAR18.VAR19;
    FUN11(&VAR8, 0);
    FUN12(VAR4->VAR8->VAR20);
    FUN13(VAR6, &VAR4->VAR21, VAR22, VAR7)
    {
        int VAR23;
        if (VAR4->VAR8->VAR14 == -1)
        {
            FUN14(VAR4->VAR8->VAR20);
            goto VAR16;
        }
        VAR23 = FUN15(&VAR8, VAR6->VAR24.VAR25, VAR6->VAR24.VAR26, VAR6->VAR24.VAR27, VAR6->VAR24.VAR28);
        if (VAR23 >= 0)
        {
            VAR9 += VAR23;
        }
        FUN16(VAR6);
    }
    FUN14(VAR4->VAR8->VAR20);
    VAR8.VAR18.VAR29[VAR10] = (VAR9 >> 8) & 0xFF;
    VAR8.VAR18.VAR29[VAR10 + 1] = VAR9 & 0xFF;
    FUN7(VAR4->VAR8);
    if (VAR4->VAR8->VAR14 != -1)
    {
        FUN17(&VAR4->VAR8->VAR30, VAR8.VAR18.VAR19);
        FUN18(&VAR4->VAR8->VAR30, VAR8.VAR18.VAR29, VAR8.VAR18.VAR19);
        FUN19(VAR4->VAR8->VAR31);
    }
    else
    {
    }
    FUN8(VAR4->VAR8);
VAR16:
    FUN2(VAR2);
    FUN20(&VAR2->VAR11, VAR4, VAR22);
    FUN6(VAR2);
    FUN21(&VAR2->VAR13);
    FUN16(VAR4);
    return 0;