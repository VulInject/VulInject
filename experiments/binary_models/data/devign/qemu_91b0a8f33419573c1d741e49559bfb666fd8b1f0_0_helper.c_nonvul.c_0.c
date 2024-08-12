static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    uint8_t VAR7;
    int VAR8 = 1;
    int VAR9 = 0;
    if (!(VAR2->VAR10.VAR11 & VAR12))
    {
        FUN2(VAR2, "");
    }
    for (VAR7 = 0; VAR7 < FUN3(VAR2->VAR13); VAR7++)
    {
        uint64_t VAR14;
        if (VAR2->VAR13[VAR7] < 0)
        {
            continue;
        }
        if (VAR2->VAR13[VAR7] > VAR15)
        {
            FUN2(VAR2, "", VAR7, VAR2->VAR13[VAR7]);
        }
        VAR6 = &VAR2->VAR16[VAR2->VAR13[VAR7]][VAR7];
        VAR14 = FUN4(FUN5(VAR6->VAR17));
        if (!(VAR2->VAR18[6] & VAR14))
        {
            VAR8 = 0;
            continue;
        }
        if (!VAR9)
        {
            uint64_t VAR11, VAR19;
            VAR9 = 1;
            VAR4 = FUN6(VAR2);
            VAR4->VAR20 = FUN7(VAR6->VAR21);
            VAR4->VAR22 = FUN7(VAR6->VAR23);
            VAR4->VAR24 = FUN8(VAR6->VAR25);
            VAR4->VAR26 = FUN8(VAR6->VAR17);
            VAR4->VAR27.VAR11 = FUN9(FUN10(VAR2));
            VAR4->VAR27.VAR19 = FUN9(VAR2->VAR10.VAR19);
            VAR11 = FUN11(VAR4->VAR28.VAR11);
            VAR19 = FUN11(VAR4->VAR28.VAR19);
            FUN12(VAR4);
            VAR2->VAR13[VAR7]--;
            FUN13("" VAR29 "" VAR29 "", VAR30, VAR2->VAR10.VAR11, VAR2->VAR10.VAR19);
            FUN14(VAR2, VAR11, VAR19);
        }
        if (VAR2->VAR13[VAR7] >= 0)
        {
            VAR8 = 0;
        }
        continue;
    }
    if (VAR8)
    {
        VAR2->VAR31 &= ~VAR32;
    }
}