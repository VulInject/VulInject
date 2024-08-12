static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint8_t VAR5[16];
    uint32_t VAR6;
    int VAR7;
    FUN2("", VAR2->VAR8);
    if (VAR2->VAR8 > 16)
        VAR2->VAR8 = 16;
    FUN3(FUN4(VAR2), VAR2->VAR9, VAR5, VAR2->VAR8);
    VAR2->VAR10 = VAR5[0];
    VAR2->VAR11 = 0;
    VAR6 = (VAR2->VAR12 >> 8) & 0xf;
    VAR4 = FUN5(&VAR2->VAR13, 0, VAR6, VAR2->VAR14);
    if (!VAR4)
    {
        FUN6(VAR2, VAR6);
        return;
    }
    assert(VAR2->VAR15 == NULL);
    VAR2->VAR15 = FUN7(sizeof(VAR16));
    VAR2->VAR15->VAR17 = VAR2->VAR12;
    VAR2->VAR15->VAR18 = FUN8(VAR4, VAR2->VAR15->VAR17, VAR2->VAR14, VAR5, VAR2->VAR15);
    VAR7 = FUN9(VAR2->VAR15->VAR18);
    if (VAR7)
    {
        if (VAR7 > 0)
        {
            FUN10(VAR2, VAR19);
        }
        else if (VAR7 < 0)
        {
            FUN10(VAR2, VAR20);
        }
        FUN11(VAR2->VAR15->VAR18);
    }
    if (!VAR2->VAR11)
    {
        if (VAR7)
        {
            FUN12(VAR2, 2);
            FUN12(VAR2, 4);
            FUN10(VAR2, VAR21);
            VAR2->VAR22 = 1;
            FUN13(VAR2);
        }
        else
        {
            FUN10(VAR2, VAR19);
        }
    }
}