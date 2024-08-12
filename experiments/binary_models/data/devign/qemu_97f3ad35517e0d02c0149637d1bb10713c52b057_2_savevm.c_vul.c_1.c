int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, int VAR5, VAR6 *VAR7, void *VAR8)
{
    VAR9 *VAR10;
    VAR10 = FUN2(sizeof(VAR9));
    VAR10->VAR5 = VAR5;
    VAR10->VAR11 = VAR12.VAR13++;
    VAR10->VAR7 = VAR7;
    VAR10->VAR8 = VAR8;
    VAR10->VAR14 = NULL;
    if (VAR7->VAR15 != NULL)
    {
        VAR10->VAR16 = 1;
    }
    if (VAR2)
    {
        char *VAR17 = FUN3(VAR2);
        if (VAR17)
        {
            FUN4(VAR10->VAR3, sizeof(VAR10->VAR3), VAR17);
            FUN5(VAR10->VAR3, sizeof(VAR10->VAR3), "");
            FUN6(VAR17);
            VAR10->VAR18 = FUN2(sizeof(VAR19));
            FUN4(VAR10->VAR18->VAR3, sizeof(VAR10->VAR18->VAR3), VAR3);
            VAR10->VAR18->VAR4 = VAR4 == -1 ? FUN7(VAR3) : VAR4;
            VAR4 = -1;
        }
    }
    FUN5(VAR10->VAR3, sizeof(VAR10->VAR3), VAR3);
    if (VAR4 == -1)
    {
        VAR10->VAR4 = FUN8(VAR10->VAR3);
    }
    else
    {
        VAR10->VAR4 = VAR4;
    }
    assert(!VAR10->VAR18 || VAR10->VAR4 == 0);
    FUN9(&VAR12.VAR20, VAR10, VAR21);
    return 0;
}