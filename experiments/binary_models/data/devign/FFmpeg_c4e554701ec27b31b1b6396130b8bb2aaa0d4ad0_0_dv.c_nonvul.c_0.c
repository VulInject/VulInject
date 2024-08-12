VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
        return NULL;
    VAR4->VAR5 = FUN3(VAR3, 0);
    VAR4->VAR6[0] = FUN3(VAR3, 0);
    if (!VAR4->VAR5 || !VAR4->VAR6[0])
        goto VAR7;
    FUN4(VAR4->VAR5, 64, 1, 30000);
    FUN4(VAR4->VAR6[0], 64, 1, 30000);
    VAR4->VAR8 = VAR3;
    VAR4->VAR6[1] = NULL;
    VAR4->VAR9 = 0;
    VAR4->VAR10 = 0;
    VAR4->VAR11 = 0;
    VAR4->VAR12[0].VAR13 = 0;
    VAR4->VAR12[1].VAR13 = 0;
    VAR4->VAR5->VAR14.VAR15 = VAR16;
    VAR4->VAR5->VAR14.VAR17 = VAR18;
    VAR4->VAR5->VAR14.VAR19 = 25000000;
    VAR4->VAR5->VAR20 = 0;
    VAR4->VAR6[0]->VAR14.VAR15 = VAR21;
    VAR4->VAR6[0]->VAR14.VAR17 = VAR22;
    VAR4->VAR6[0]->VAR20 = 0;
    return VAR4;
VAR7:
    if (VAR4->VAR5)
        FUN5(VAR4->VAR5);
    if (VAR4->VAR6[0])
        FUN5(VAR4->VAR6[0]);
    FUN5(VAR4);
    return NULL;
}