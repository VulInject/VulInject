static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    unsigned int VAR7;
    VAR8 *VAR9 = FUN3(VAR6);
    FUN4(&VAR9->VAR10);
    FUN5(&VAR9->VAR11);
    VAR9->VAR12 = (1 << VAR13);
    VAR9->VAR14 = 0x20;
    VAR9->VAR15 = 0x02;
    VAR9->VAR16 = 0;
    for (VAR7 = 0; VAR7 < 4; VAR7++)
    {
        VAR9->VAR17.VAR18[VAR7] = 0xff;
        VAR9->VAR17.VAR19[VAR7] = 0xff;
        VAR9->VAR20.VAR18[VAR7] = 0xff;
        VAR9->VAR20.VAR19[VAR7] = 0xff;
    }
    FUN6(VAR9);
    VAR9->VAR21[0] = 0;
    VAR9->VAR21[1] = 0;
    if (VAR22)
    {
        memcpy(&VAR9->VAR23, &VAR24, 16);
    }
    else
    {
        memset(&VAR9->VAR23, 0, 16);
    }
    FUN7(VAR9);
    FUN8(VAR9);
    VAR9->VAR25 = FUN9(VAR26, VAR27, VAR9);
    FUN10(NULL, 0, &VAR28, VAR9);
}