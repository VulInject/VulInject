static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(struct VAR3, VAR5, VAR2);
    VAR4->VAR5.VAR6[VAR7] = 0x08;
    VAR4->VAR5.VAR6[VAR8] = 0x40;
    VAR4->VAR5.VAR6[VAR9] = 0xff;
    FUN3(&VAR4->VAR5, 0, 0x10, VAR10, VAR11);
    FUN3(&VAR4->VAR5, 1, VAR12, VAR13, VAR14);
    FUN3(&VAR4->VAR5, 2, VAR15, VAR13, VAR16);
    FUN4(&VAR4->VAR17, VAR12);
    if (!VAR2->VAR18)
    {
        FUN5(&VAR4->VAR17.VAR19);
    }
    return 0;
}