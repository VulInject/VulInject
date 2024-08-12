static int FUN1(struct VAR1 *VAR2, int VAR3)
{
    struct elf_note VAR4;
    VAR4.VAR5 = VAR2->VAR6;
    VAR4.VAR7 = VAR2->VAR8;
    VAR4.VAR9 = VAR2->VAR10;
    FUN2(&VAR4);
    if (FUN3(VAR3, &VAR4, sizeof(VAR4)) != 0)
        return (-1);
    if (FUN3(VAR3, VAR2->VAR11, VAR2->VAR12) != 0)
        return (-1);
    if (FUN3(VAR3, VAR2->VAR13, VAR2->VAR14) != 0)
        return (-1);
    return (0);
}