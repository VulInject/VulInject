static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8;
    assert(VAR6 != NULL);
    FUN2(VAR2, VAR3, VAR4, VAR6->VAR9);
    VAR2->VAR10 = NULL;
    VAR2->VAR11 = 0;
    VAR2->VAR12 = 0;
    VAR2->VAR13 = 0;
    VAR2->VAR8 = VAR4;
    VAR2->VAR14 = 512;
    FUN3(VAR2->VAR3, sizeof(VAR2->VAR3), VAR3);
    if (VAR15 && !FUN4(VAR6))
    {
        return -VAR16;
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR17 = FUN5(VAR6->VAR18);
    if (VAR4 & VAR19)
        VAR2->VAR20 = 1;
    VAR8 = VAR4 & ~(VAR21 | VAR22);
    if (VAR2->VAR23)
    {
        VAR8 |= VAR24;
    }
    VAR2->VAR25 = VAR2->VAR26 = !(VAR8 & VAR24);
    if (VAR6->VAR27)
    {
        VAR7 = VAR6->FUN6(VAR2, VAR3, VAR8);
    }
    else
    {
        VAR7 = FUN6(&VAR2->VAR10, VAR3, VAR8);
        if (VAR7 >= 0)
        {
            VAR7 = VAR6->FUN7(VAR2, VAR8);
        }
    }
    if (VAR7 < 0)
    {
        goto VAR28;
    }
    VAR7 = FUN8(VAR2, VAR2->VAR11);
    if (VAR7 < 0)
    {
        goto VAR28;
    }
    if (VAR2->VAR23)
    {
        unlink(VAR3);
    }
    return 0;
VAR28:
    if (VAR2->VAR10)
    {
        FUN9(VAR2->VAR10);
        VAR2->VAR10 = NULL;
    }
    FUN10(VAR2->VAR17);
    VAR2->VAR17 = NULL;
    VAR2->VAR6 = NULL;
    return VAR7;
}