struct VAR1 *FUN1(VAR2 *VAR3, int VAR4, bool VAR5)
{
    int VAR6;
    struct VAR1 *VAR7 = FUN2(sizeof *VAR7);
    if (!VAR3)
    {
        fprintf(VAR8, "");
        goto VAR9;
    }
    VAR6 = FUN3(VAR3);
    if (VAR6 < 0)
    {
        goto VAR9;
    }
    VAR7->VAR10 = VAR3;
    VAR7->VAR11.VAR12 = VAR3->VAR13->FUN4(VAR3) ? 0 : (1 << VAR14);
    VAR7->VAR3 = VAR6;
    VAR7->VAR11.VAR15 = 2;
    VAR7->VAR11.VAR16 = VAR7->VAR16;
    VAR6 = FUN5(&VAR7->VAR11, VAR4, "", VAR5);
    if (VAR6 < 0)
    {
        goto VAR9;
    }
    if (!VAR3->VAR13->FUN6(VAR3, sizeof(struct VAR17)))
    {
        VAR7->VAR11.VAR18 &= ~(1 << VAR19);
    }
    if (~VAR7->VAR11.VAR18 & VAR7->VAR11.VAR12)
    {
        fprintf(VAR8, "" VAR20 "", (VAR21)(~VAR7->VAR11.VAR18 & VAR7->VAR11.VAR12));
        FUN7(&VAR7->VAR11);
        goto VAR9;
    }
    FUN8(VAR7, 0);
    return VAR7;
VAR9:
    FUN9(VAR7);
    return NULL;
}