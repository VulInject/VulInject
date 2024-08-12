struct VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    bool VAR5 = VAR3->VAR6 == VAR7;
    struct VAR1 *VAR8 = FUN2(sizeof *VAR8);
    if (!VAR3->VAR9)
    {
        fprintf(VAR10, "");
        goto VAR11;
    }
    if (VAR5)
    {
        VAR4 = FUN3(VAR3->VAR9);
        if (VAR4 < 0)
        {
            goto VAR11;
        }
        VAR8->VAR12.VAR13 = FUN4(VAR3->VAR9) ? 0 : (1 << VAR14);
        VAR8->VAR15 = VAR4;
    }
    else
    {
        VAR8->VAR12.VAR13 = 0;
        VAR8->VAR15 = -1;
    }
    VAR8->VAR16 = VAR3->VAR9;
    VAR8->VAR12.VAR17 = 2;
    VAR8->VAR12.VAR18 = VAR8->VAR18;
    VAR4 = FUN5(&VAR8->VAR12, VAR3->VAR19, VAR3->VAR6, VAR3->VAR20);
    if (VAR4 < 0)
    {
        goto VAR11;
    }
    if (VAR5)
    {
        if (!FUN6(VAR3->VAR9, sizeof(struct VAR21)))
        {
            VAR8->VAR12.VAR22 &= ~(1 << VAR23);
        }
        if (~VAR8->VAR12.VAR22 & VAR8->VAR12.VAR13)
        {
            fprintf(VAR10, "" VAR24 "", (VAR25)(~VAR8->VAR12.VAR22 & VAR8->VAR12.VAR13));
            FUN7(&VAR8->VAR12);
            goto VAR11;
        }
    }
    FUN8(VAR8, 0);
    return VAR8;
VAR11:
    FUN9(VAR8);
    return NULL;
}