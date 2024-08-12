static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    struct VAR5 *VAR6 = VAR3;
    VAR7 *VAR8 = VAR6->VAR8;
    struct VAR9 *VAR10;
    int VAR11;
    VAR6->VAR12 = FUN2(VAR2);
    for (VAR11 = 0; VAR11 < VAR6->VAR12; VAR11++)
    {
        VAR10 = FUN3(sizeof(struct VAR9));
        VAR10->VAR13 = FUN2(VAR2);
        VAR10->VAR14 = FUN2(VAR2);
        VAR10->VAR15 = 0;
        VAR10->VAR16 = FUN4(malloc(VAR10->VAR13));
        VAR10->VAR17 = VAR10->VAR16;
        FUN5(VAR2, VAR10->VAR16, VAR10->VAR13);
        FUN6(&VAR6->VAR18, VAR10, VAR19);
        FUN7("", VAR11 + 1, VAR6->VAR12, VAR10->VAR13, VAR10->VAR14);
    }
    return 0;
}