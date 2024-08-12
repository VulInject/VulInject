static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR3 = VAR2->VAR4;
    struct VAR5 *VAR6 = FUN2(sizeof(*VAR6) + (VAR3->VAR7 - 1) * sizeof(*VAR3->VAR8));
    int VAR9;
    VAR6->VAR10 = FUN3(VAR2->VAR11);
    VAR6->VAR12 = VAR3->VAR12;
    VAR6->VAR13 = VAR3->VAR14;
    VAR6->VAR7 = VAR3->VAR7;
    memcpy(VAR6->VAR8, VAR3->VAR8, VAR3->VAR7 * sizeof(*VAR3->VAR8));
    for (VAR9 = 0; VAR9 < VAR3->VAR7; VAR9++)
    {
        struct VAR15 *VAR16 = VAR3->VAR8 + VAR9;
        VAR16->VAR17 = FUN2(VAR16->VAR18);
        memset(VAR16->VAR17, 0, VAR16->VAR18);
        memcpy(VAR16->VAR17, VAR6->VAR8[VAR9].VAR17, VAR16->VAR19);
    }
    VAR3->VAR14 = VAR6;
    return 0;
}