static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    union VAR5 *VAR6 = &VAR4->VAR6;
    struct VAR7 *VAR8 = &VAR6->VAR9.VAR10;
    uint64_t VAR11 = VAR6->VAR9.VAR8.VAR11;
    FUN2();
    memset(VAR6, 0, sizeof(struct VAR7));
    VAR8->VAR12 = VAR13;
    VAR8->VAR14 = FUN3(VAR15 - 2);
    VAR8->VAR11 = VAR11;
    VAR8->VAR16 = FUN3(sizeof(union VAR17));
    VAR8->VAR18 = FUN3(sizeof(union VAR17));
    VAR8->VAR19 = FUN4(VAR20 | VAR21);
    FUN5(VAR2, VAR4, sizeof(*VAR8), VAR22);
}