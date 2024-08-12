static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    uint32_t VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    assert(FUN2());
    VAR2->VAR10 = "";
    FUN3(0x0, 0, &VAR6, &VAR7, &VAR8, &VAR9);
    VAR2->VAR11 = VAR7;
    VAR2->VAR12 = VAR9;
    VAR2->VAR13 = VAR8;
    FUN3(0x1, 0, &VAR6, &VAR7, &VAR8, &VAR9);
    VAR2->VAR14 = ((VAR6 >> 8) & 0x0F) + ((VAR6 >> 20) & 0xFF);
    VAR2->VAR15 = ((VAR6 >> 4) & 0x0F) | ((VAR6 & 0xF0000) >> 12);
    VAR2->VAR16 = VAR6 & 0x0F;
    VAR2->VAR17 = FUN4(VAR4, 0x0, 0, VAR18);
    VAR2->VAR19 = FUN4(VAR4, 0x1, 0, VAR20);
    VAR2->VAR21 = FUN4(VAR4, 0x1, 0, VAR22);
    if (VAR2->VAR17 >= 7)
    {
        VAR2->VAR23 = FUN4(VAR4, 0x7, 0, VAR24);
    }
    else
    {
        VAR2->VAR23 = 0;
    }
    VAR2->VAR25 = FUN4(VAR4, 0x80000000, 0, VAR18);
    VAR2->VAR26 = FUN4(VAR4, 0x80000001, 0, VAR20);
    VAR2->VAR27 = FUN4(VAR4, 0x80000001, 0, VAR22);
    FUN5(VAR2->VAR28);
    VAR2->VAR29 = 0;
    if (VAR2->VAR11 == VAR30 && VAR2->VAR12 == VAR31 && VAR2->VAR13 == VAR32)
    {
        FUN3(0xC0000000, 0, &VAR6, &VAR7, &VAR8, &VAR9);
        VAR6 = FUN4(VAR4, 0xC0000000, 0, VAR18);
        if (VAR6 >= 0xC0000001)
        {
            VAR2->VAR33 = VAR6;
            FUN3(0xC0000001, 0, &VAR6, &VAR7, &VAR8, &VAR9);
            VAR2->VAR34 = FUN4(VAR4, 0xC0000001, 0, VAR20);
        }
    }
    VAR2->VAR35 = -1;
}