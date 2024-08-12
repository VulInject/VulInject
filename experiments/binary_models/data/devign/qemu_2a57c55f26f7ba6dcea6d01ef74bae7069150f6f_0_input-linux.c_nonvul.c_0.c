static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    uint8_t VAR7, VAR8, VAR9;
    uint8_t VAR10[VAR11 / 8], VAR12[VAR11 / 8];
    unsigned int VAR13;
    int VAR14, VAR15;
    if (!VAR6->VAR16)
    {
        FUN3(VAR4, "");
        return;
    }
    VAR6->VAR17 = open(VAR6->VAR16, VAR18);
    if (VAR6->VAR17 < 0)
    {
        FUN4(VAR4, VAR19, VAR6->VAR16);
        return;
    }
    FUN5(VAR6->VAR17);
    VAR14 = FUN6(VAR6->VAR17, VAR20, &VAR15);
    if (VAR14 < 0)
    {
        FUN3(VAR4, "", VAR6->VAR16);
        goto VAR21;
    }
    VAR14 = FUN6(VAR6->VAR17, FUN7(0, sizeof(VAR7)), &VAR7);
    if (VAR14 < 0)
    {
        FUN3(VAR4, "", VAR6->VAR16);
        goto VAR21;
    }
    if (VAR7 & (1 << VAR22))
    {
        VAR8 = 0;
        VAR14 = FUN6(VAR6->VAR17, FUN7(VAR22, sizeof(VAR8)), &VAR8);
        if (VAR8 & (1 << VAR23))
        {
            VAR6->VAR24 = true;
        }
    }
    if (VAR7 & (1 << VAR25))
    {
        VAR9 = 0;
        VAR14 = FUN6(VAR6->VAR17, FUN7(VAR25, sizeof(VAR9)), &VAR9);
        if (VAR9 & (1 << VAR26))
        {
            VAR6->VAR27 = true;
        }
    }
    if (VAR7 & (1 << VAR28))
    {
        memset(VAR10, 0, sizeof(VAR10));
        VAR14 = FUN6(VAR6->VAR17, FUN7(VAR28, sizeof(VAR10)), VAR10);
        VAR14 = FUN6(VAR6->VAR17, FUN8(sizeof(VAR12)), VAR12);
        for (VAR13 = 0; VAR13 < VAR11; VAR13++)
        {
            if (VAR10[VAR13 / 8] & (1 << (VAR13 % 8)))
            {
                if (FUN9(VAR13))
                {
                    VAR6->VAR29++;
                }
                else
                {
                    VAR6->VAR30++;
                }
                if (VAR12[VAR13 / 8] & (1 << (VAR13 % 8)))
                {
                    VAR6->VAR31[VAR13] = true;
                    VAR6->VAR32++;
                }
            }
        }
    }
    FUN10(VAR6->VAR17, VAR33, NULL, VAR6);
    if (VAR6->VAR32)
    {
        VAR6->VAR34 = true;
    }
    else
    {
        FUN11(VAR6);
    }
    FUN12(&VAR35, VAR6, VAR36);
    VAR6->VAR37 = true;
    return;
VAR21:
    close(VAR6->VAR17);
    return;
}