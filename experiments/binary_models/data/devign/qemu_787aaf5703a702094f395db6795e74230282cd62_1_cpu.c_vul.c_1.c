static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    uint32_t VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    assert(FUN2());
    VAR2->VAR10 = "";
    FUN3(0x0, 0, &VAR6, &VAR7, &VAR8, &VAR9);
    FUN4(VAR2->VAR11, VAR7, VAR9, VAR8);
    FUN3(0x1, 0, &VAR6, &VAR7, &VAR8, &VAR9);
    VAR2->VAR12 = ((VAR6 >> 8) & 0x0F) + ((VAR6 >> 20) & 0xFF);
    VAR2->VAR13 = ((VAR6 >> 4) & 0x0F) | ((VAR6 & 0xF0000) >> 12);
    VAR2->VAR14 = VAR6 & 0x0F;
    VAR2->VAR15 = FUN5(VAR4, 0x0, 0, VAR16);
    VAR2->VAR17[VAR18] = FUN5(VAR4, 0x1, 0, VAR19);
    VAR2->VAR17[VAR20] = FUN5(VAR4, 0x1, 0, VAR21);
    if (VAR2->VAR15 >= 7)
    {
        VAR2->VAR17[VAR22] = FUN5(VAR4, 0x7, 0, VAR23);
    }
    else
    {
        VAR2->VAR17[VAR22] = 0;
    }
    VAR2->VAR24 = FUN5(VAR4, 0x80000000, 0, VAR16);
    VAR2->VAR17[VAR25] = FUN5(VAR4, 0x80000001, 0, VAR19);
    VAR2->VAR17[VAR26] = FUN5(VAR4, 0x80000001, 0, VAR21);
    FUN6(VAR2->VAR27);
    if (!strcmp(VAR2->VAR11, VAR28))
    {
        FUN3(0xC0000000, 0, &VAR6, &VAR7, &VAR8, &VAR9);
        VAR6 = FUN5(VAR4, 0xC0000000, 0, VAR16);
        if (VAR6 >= 0xC0000001)
        {
            VAR2->VAR29 = VAR6;
            FUN3(0xC0000001, 0, &VAR6, &VAR7, &VAR8, &VAR9);
            VAR2->VAR17[VAR30] = FUN5(VAR4, 0xC0000001, 0, VAR19);
        }
    }
    VAR2->VAR17[VAR31] = FUN5(VAR4, 0x8000000A, 0, VAR19);
    VAR2->VAR17[VAR32] = FUN5(VAR4, VAR33, 0, VAR16);