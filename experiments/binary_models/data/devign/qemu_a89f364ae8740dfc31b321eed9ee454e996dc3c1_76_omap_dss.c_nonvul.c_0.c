static void FUN1(struct VAR1 *VAR2)
{
    void *VAR3;
    hwaddr VAR4;
    hwaddr VAR5;
    int VAR6;
    static void *VAR7;
    static hwaddr VAR8;
    if (!VAR2->VAR9.VAR10 || VAR2->VAR9.VAR11)
        return;
    if (VAR2->VAR9.VAR12 & (1 << 1))
    {
        fprintf(VAR13, "", VAR14);
        return;
    }
    if (!(VAR2->VAR15.VAR12 & (1 << 11)))
        return;
    VAR2->VAR9.VAR11 = 1;
    VAR4 = VAR2->VAR9.VAR16 * 2;
    VAR5 = VAR2->VAR15.VAR17[0].VAR18[0];
    VAR3 = FUN2(VAR5, &VAR4, 0);
    if (VAR3 && VAR4 != VAR2->VAR9.VAR16 * 2)
    {
        FUN3(VAR3, VAR4, 0, 0);
        VAR3 = NULL;
        VAR4 = VAR2->VAR9.VAR16 * 2;
    }
    if (!VAR3)
    {
        if (VAR4 > VAR8)
        {
            VAR7 = FUN4(VAR7, VAR4);
        }
        VAR3 = VAR7;
        FUN5(VAR5, VAR3, VAR4);
    }
    VAR2->VAR9.VAR16 = 0;
    VAR6 = VAR2->VAR15.VAR17[0].VAR19 + (VAR2->VAR15.VAR17[0].VAR20 - 1) / 2;
    if ((VAR2->VAR9.VAR12 & (1 << 2)) && VAR2->VAR9.VAR21[0])
        VAR2->VAR9.VAR21[0]->FUN6(VAR2->VAR9.VAR21[0]->VAR22, 1, VAR3, VAR4, VAR6);
    if ((VAR2->VAR9.VAR12 & (1 << 3)) && VAR2->VAR9.VAR21[1])
        VAR2->VAR9.VAR21[1]->FUN6(VAR2->VAR9.VAR21[1]->VAR22, 1, VAR3, VAR4, VAR6);
    if (VAR3 != VAR7)
    {
        FUN3(VAR3, VAR4, 0, VAR4);
    }
    FUN7(VAR2);
    VAR2->VAR15.VAR23 |= 1;
    FUN8(VAR2);
}