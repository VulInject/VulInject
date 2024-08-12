static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    VAR7 *VAR8;
    uint8_t VAR9;
    int VAR10 = 1;
    int VAR11 = 0;
    if (!(VAR2->VAR12.VAR13 & VAR14))
    {
        FUN3(FUN4(VAR4), "");
    }
    for (VAR9 = 0; VAR9 < FUN5(VAR2->VAR15); VAR9++)
    {
        uint64_t VAR16;
        if (VAR2->VAR15[VAR9] < 0)
        {
            continue;
        }
        if (VAR2->VAR15[VAR9] > VAR17)
        {
            FUN3(FUN4(VAR4), "", VAR9, VAR2->VAR15[VAR9]);
        }
        VAR8 = &VAR2->VAR18[VAR2->VAR15[VAR9]][VAR9];
        VAR16 = FUN6(FUN7(VAR8->VAR19));
        if (!(VAR2->VAR20[6] & VAR16))
        {
            VAR10 = 0;
            continue;
        }
        if (!VAR11)
        {
            uint64_t VAR13, VAR21;
            VAR11 = 1;
            VAR6 = FUN8(VAR2);
            VAR6->VAR22 = FUN9(VAR8->VAR23);
            VAR6->VAR24 = FUN9(VAR8->VAR25);
            VAR6->VAR26 = FUN10(VAR8->VAR27);
            VAR6->VAR28 = FUN10(VAR8->VAR19);
            VAR6->VAR29.VAR13 = FUN11(FUN12(VAR2));
            VAR6->VAR29.VAR21 = FUN11(VAR2->VAR12.VAR21);
            VAR13 = FUN13(VAR6->VAR30.VAR13);
            VAR21 = FUN13(VAR6->VAR30.VAR21);
            FUN14(VAR6);
            VAR2->VAR15[VAR9]--;
            FUN15("" VAR31 "" VAR31 "", VAR32, VAR2->VAR12.VAR13, VAR2->VAR12.VAR21);
            FUN16(VAR2, VAR13, VAR21);
        }
        if (VAR2->VAR15[VAR9] >= 0)
        {
            VAR10 = 0;
        }
        continue;
    }
    if (VAR10)
    {
        VAR2->VAR33 &= ~VAR34;
    }
}