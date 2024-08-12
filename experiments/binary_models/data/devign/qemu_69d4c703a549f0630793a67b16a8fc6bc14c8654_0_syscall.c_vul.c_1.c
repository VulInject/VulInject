static inline VAR1 FUN1(int VAR2, unsigned short **VAR3, abi_ulong VAR4)
{
    int VAR5;
    unsigned short *VAR6;
    union semun VAR7;
    struct semid_ds VAR8;
    int VAR9, VAR10;
    VAR7.VAR11 = &VAR8;
    VAR10 = FUN2(VAR2, 0, VAR12, VAR7);
    if (VAR10 == -1)
        return FUN3(VAR10);
    VAR5 = VAR8.VAR13;
    *VAR3 = malloc(VAR5 * sizeof(unsigned short));
    VAR6 = FUN4(VAR14, VAR4, VAR5 * sizeof(unsigned short), 1);
    if (!VAR6)
        return -VAR15;
    for (VAR9 = 0; VAR9 < VAR5; VAR9++)
    {
        FUN5((*VAR3)[VAR9], &VAR6[VAR9]);
    }
    FUN6(VAR6, VAR4, 0);
    return 0;
}