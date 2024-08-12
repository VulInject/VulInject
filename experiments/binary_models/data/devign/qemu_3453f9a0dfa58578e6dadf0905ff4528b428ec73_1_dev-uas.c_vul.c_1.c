static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7;
    uint16_t VAR8 = FUN2(VAR4->VAR9.VAR8);
    if (FUN3(VAR2) && VAR8 > VAR10)
    {
        goto VAR11;
    }
    VAR6 = FUN4(VAR2, VAR8);
    if (VAR6)
    {
        goto VAR12;
    }
    VAR6 = FUN5(VAR2, VAR4);
    if (VAR6->VAR13 == NULL)
    {
        goto VAR14;
    }
    FUN6(VAR2->VAR13.VAR15, VAR6->VAR8, FUN7(VAR6->VAR16), VAR6->VAR16 >> 32, VAR6->VAR16 & 0xffffffff);
    FUN8(&VAR2->VAR17, VAR6, VAR18);
    if (FUN3(VAR2) && VAR2->VAR19[VAR6->VAR8] != NULL)
    {
        VAR6->VAR20 = VAR2->VAR19[VAR6->VAR8];
        VAR6->VAR21 = true;
        VAR2->VAR19[VAR6->VAR8] = NULL;
    }
    VAR6->VAR6 = FUN9(VAR6->VAR13, VAR6->VAR8, FUN7(VAR6->VAR16), VAR4->VAR22.VAR23, VAR6);
    if (VAR2->VAR24)
    {
        FUN10(VAR6->VAR6);
    }
    VAR7 = FUN11(VAR6->VAR6);
    if (VAR7)
    {
        VAR6->VAR25 = VAR7;
        FUN12(VAR6->VAR6);
    }
VAR12:
    FUN13(VAR2, VAR8, VAR26);
VAR14:
    FUN13(VAR2, VAR8, VAR27);
    FUN14(VAR6);