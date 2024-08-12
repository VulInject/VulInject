FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8;
    hwaddr VAR9 = VAR3;
    FUN2("" VAR10 "", VAR9);
    VAR8 = FUN3(VAR7, 1);
    FUN4(VAR9, VAR8, sizeof(*VAR8));
    FUN5(&VAR8->VAR11);
    FUN5(&VAR8->VAR12);
    FUN5(&VAR8->VAR13);
    FUN2("", VAR8->VAR11, VAR8->VAR13, VAR8->VAR12);
    if (VAR8->VAR11 != 0x1)
    {
        FUN2("", VAR8->VAR11, 0x1);
        FUN6(VAR14, VAR9);
        goto VAR15;
    }
    if (VAR8->VAR13 == VAR16)
    {
        FUN7(VAR6, VAR8, VAR9);
        goto VAR15;
    }
    if (!VAR8->VAR13)
    {
        FUN8(VAR8, VAR9);
        goto VAR15;
    }
    FUN9(VAR8, VAR9);
VAR15:
    FUN10(VAR8);
}