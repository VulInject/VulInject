static void FUN1(void *VAR1)
{
    VAR2 *VAR3;
    int VAR4;
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR9.VAR10->VAR11;
    FUN2(VAR6->VAR12);
    VAR6->VAR12 = NULL;
    size_t VAR13 = VAR6->VAR14 * VAR15;
    size_t VAR16;
    switch (FUN3(VAR8, VAR13, VAR6->VAR17 * VAR15, VAR6))
    {
    case VAR18:
        FUN4(VAR6);
    case VAR19:
        return;
    default:
        break;
    }
    VAR3 = FUN5(VAR8);
    if (!VAR3)
    {
        VAR6->VAR9.FUN6(VAR6->VAR9.VAR11, -VAR20);
        FUN4(VAR6);
        return;
    }
    VAR6->VAR13 = 0;
    VAR6->VAR16 = (VAR6->VAR17 * VAR15);
    VAR3->VAR21 = 0;
    FUN7(VAR3->VAR22);
    VAR3->VAR23 = VAR13;
    VAR3->VAR24 = VAR6->VAR16 + VAR8->VAR25;
    VAR16 = FUN8(VAR13 + VAR3->VAR24, VAR8->VAR26) - 1;
    VAR3->VAR22 = FUN9(VAR3->VAR24);
    VAR3->VAR6[0] = VAR6;
    snprintf(VAR3->VAR27, 127, "", VAR13, VAR16);
    FUN10("", (VAR6->VAR17 * VAR15), VAR13, VAR3->VAR27);
    FUN11(VAR3->VAR28, VAR29, VAR3->VAR27);
    FUN12(VAR8->VAR30, VAR3->VAR28);
    FUN13(VAR8->VAR30, VAR31, 0, &VAR4);
}