void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR4 = FUN2(sizeof(VAR3));
    if (!VAR4)
        FUN3(1);
    VAR2->VAR5 = VAR4;
    VAR6 = VAR4;
    VAR4->VAR7 = NULL;
    VAR4->VAR8 = NULL;
    VAR4->VAR9 = -1;
    VAR4->VAR10 = -1;
    VAR4->VAR11 = 4;
    VAR4->VAR12 = -1;
    VAR4->VAR13 = -1;
    VAR4->VAR2 = VAR2;
    if (!VAR14)
        VAR14 = "";
    VAR4->VAR15 = FUN4(VAR14);
    if (!VAR4->VAR15)
        FUN3(1);
    VAR4->VAR16 = FUN5(VAR17, VAR18, VAR4);
    VAR4->VAR2->VAR19 = NULL;
    VAR4->VAR2->VAR20 = VAR21;
    VAR4->VAR2->VAR22 = VAR23;
    VAR4->VAR2->VAR24 = NULL;
    FUN6(VAR4->VAR2, 640, 400);
}