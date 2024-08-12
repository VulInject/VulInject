static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    if ((VAR8 = FUN2(VAR2, &VAR4->VAR10, VAR11)) < 0)
        return VAR8;
    VAR9 = 64 * VAR6->VAR12 * VAR6->VAR13;
    if (!(VAR4->VAR14 = FUN3(VAR9 * (1 + sizeof(struct VAR15)))))
    {
        FUN4(VAR2, &VAR4->VAR10);
        return FUN5(VAR16);
    }
    VAR4->VAR17 = VAR4->VAR14->VAR18;
    VAR4->VAR19 = (struct VAR15 *)(VAR4->VAR14->VAR18 + VAR9);
    if (VAR6->VAR20.VAR21 && !VAR6->VAR20.VAR22 && !VAR6->VAR23 && !VAR6->VAR24)
    {
        memcpy(VAR4->VAR17, VAR6->VAR25[VAR26].VAR17, VAR9);
    }
    return 0;
}