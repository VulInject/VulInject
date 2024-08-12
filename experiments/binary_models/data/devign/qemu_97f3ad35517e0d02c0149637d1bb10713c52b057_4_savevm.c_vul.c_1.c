int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, void *VAR6, int VAR7, int VAR8)
{
    VAR9 *VAR10;
    assert(VAR7 == -1 || VAR8 >= VAR5->VAR11);
    VAR10 = FUN2(sizeof(VAR9));
    VAR10->VAR12 = VAR5->VAR12;
    VAR10->VAR13 = VAR14.VAR15++;
    VAR10->VAR6 = VAR6;
    VAR10->VAR5 = VAR5;
    VAR10->VAR7 = VAR7;
    if (VAR2)
    {
        char *VAR16 = FUN3(VAR2);
        if (VAR16)
        {
            FUN4(VAR10->VAR17, sizeof(VAR10->VAR17), VAR16);
            FUN5(VAR10->VAR17, sizeof(VAR10->VAR17), "");
            FUN6(VAR16);
            VAR10->VAR18 = FUN2(sizeof(VAR19));
            FUN4(VAR10->VAR18->VAR17, sizeof(VAR10->VAR18->VAR17), VAR5->VAR20);
            VAR10->VAR18->VAR3 = VAR3 == -1 ? FUN7(VAR5->VAR20) : VAR3;
            VAR3 = -1;
        }
    }
    FUN5(VAR10->VAR17, sizeof(VAR10->VAR17), VAR5->VAR20);
    if (VAR3 == -1)
    {
        VAR10->VAR3 = FUN8(VAR10->VAR17);
    }
    else
    {
        VAR10->VAR3 = VAR3;
    }
    assert(!VAR10->VAR18 || VAR10->VAR3 == 0);
    FUN9(&VAR14.VAR21, VAR10, VAR22);
    return 0;
}