void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(sizeof(*VAR4));
    VAR5 = FUN2(sizeof(VAR6));
    VAR2->VAR7 = VAR4;
    VAR5->VAR8 = 1;
    VAR9 = VAR4;
    VAR4->VAR10 = -1;
    VAR4->VAR11 = -1;
    VAR4->VAR2 = VAR2;
    FUN3(&VAR4->VAR12);
    VAR4->VAR13 = VAR14;
    if (VAR15)
        VAR4->VAR16 = FUN4(VAR17, VAR15);
    else
        VAR4->VAR16 = FUN4(VAR17, "");
    if (!VAR4->VAR16)
        FUN5(1);
    FUN6(&VAR4->mutex);
    FUN7();
    VAR5->VAR18 = &VAR19;
    FUN8(VAR2, VAR5);
}