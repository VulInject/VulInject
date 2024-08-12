static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = &VAR4->VAR7;
    VAR8 *VAR9;
    FUN3("", sizeof(struct VAR10), sizeof(struct VAR11));
    VAR9 = VAR2->VAR12;
    FUN4(VAR9 + VAR13, VAR14 | VAR15);
    FUN4(VAR9 + VAR16, 0x0);
    FUN4(VAR9 + VAR17, 0x0);
    VAR9[VAR18] = 1;
    VAR9[VAR19] = 0x06;
    VAR9[VAR20] = 0xff;
    VAR6->VAR21 = FUN5(VAR22, VAR23, &VAR4->VAR7, VAR24);
    FUN6(VAR2, 0, VAR25, VAR26, VAR27);
    FUN7(VAR2, 1, VAR28, 0, VAR6->VAR21);
    VAR6->VAR29 = VAR2->VAR29[0];
    VAR6->VAR30 = VAR31;
    VAR6->VAR32 = VAR33;
    if (!VAR2->VAR34.VAR35)
    {
        static int VAR36 = 0;
        if (!VAR36)
        {
            FUN8("", -1);
            VAR36 = 1;
        }
    }
    return FUN9(&VAR2->VAR34, VAR6, &VAR37);
}