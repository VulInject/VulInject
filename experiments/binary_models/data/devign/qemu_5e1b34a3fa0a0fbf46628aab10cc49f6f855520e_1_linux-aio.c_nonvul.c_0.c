static int FUN1(int VAR1, struct VAR2 *VAR3, off_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    struct VAR9 *VAR10 = &VAR3->VAR9;
    VAR11 *VAR12 = VAR3->VAR12;
    switch (VAR5)
    {
    case VAR13:
        FUN2(VAR10, VAR1, VAR12->VAR14, VAR12->VAR15, VAR4);
        break;
    case VAR16:
        FUN3(VAR10, VAR1, VAR12->VAR14, VAR12->VAR15, VAR4);
        break;
    default:
        fprintf(VAR17, "", VAR18, VAR5);
        return -VAR19;
    }
    FUN4(&VAR3->VAR9, FUN5(&VAR7->VAR20));
    FUN6(&VAR7->VAR21.VAR22, VAR3, VAR23);
    VAR7->VAR21.VAR24++;
    if (!VAR7->VAR21.VAR25 && (!VAR7->VAR21.VAR26 || VAR7->VAR21.VAR27 + VAR7->VAR21.VAR24 >= VAR28))
    {
        FUN7(VAR7);
    }
    return 0;
}