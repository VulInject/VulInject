static int FUN1(struct VAR1 *VAR2)
{
    uint64_t VAR3;
    if (FUN2(&VAR2->VAR4, "", &VAR3) == -1)
        return -1;
    assert(VAR3 == (VAR5)VAR3);
    if (FUN3(&VAR2->VAR4, "", &VAR2->VAR4.VAR6) == -1)
        return -1;
    VAR2->VAR7 = FUN4(VAR8, VAR2->VAR4.VAR9, VAR10, VAR11 | VAR12, VAR3);
    if (VAR2->VAR7 == NULL)
        return -1;
    FUN5(&VAR2->VAR4);
    FUN6(&VAR2->VAR4, 1, "" VAR13 "", VAR3, VAR2->VAR4.VAR6, VAR2->VAR4.VAR14);
    return 0;
}