static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR7;
    int VAR8;
    int64_t VAR9;
    VAR10 *VAR11;
    if (!(VAR4->VAR12.VAR13))
    {
        return -1;
    }
    VAR9 = FUN3(VAR4->VAR12.VAR13);
    if (VAR9 < 0)
    {
        return -1;
    }
    FUN4(&VAR4->VAR12, &VAR4->VAR14);
    if (!VAR4->VAR14)
    {
        return -1;
    }
    VAR11 = VAR2->VAR15;
    VAR11[VAR16] = 1;
    FUN5(VAR2->VAR15, 0x2);
    FUN6(VAR2->VAR15, VAR17);
    FUN7(&VAR4->VAR18, 0x80);
    VAR4->VAR19 = 1;
    VAR4->VAR20 = 64;
    VAR4->VAR21 = 1 << FUN8(0x1004 + 2 * (VAR4->VAR20 + 1) * 4);
    VAR4->VAR22 = VAR9 / (VAR23)VAR4->VAR19;
    VAR4->VAR24 = FUN9(sizeof(*VAR4->VAR24) * VAR4->VAR19);
    VAR4->VAR25 = FUN9(sizeof(*VAR4->VAR25) * VAR4->VAR20);
    VAR4->VAR26 = FUN9(sizeof(*VAR4->VAR26) * VAR4->VAR20);
    FUN10(&VAR4->VAR27, FUN11(VAR4), &VAR28, VAR4, "", VAR4->VAR21);
    FUN12(&VAR4->VAR18, 0, VAR29 | VAR30, &VAR4->VAR27);
    FUN13(&VAR4->VAR18, VAR4->VAR20, 4);
    VAR6->VAR31 = FUN14(FUN15(VAR11 + VAR32));
    VAR6->VAR33 = FUN14(FUN15(VAR11 + VAR34));
    FUN16((char *)VAR6->VAR35, sizeof(VAR6->VAR35), "", '');
    FUN16((char *)VAR6->VAR36, sizeof(VAR6->VAR36), "", '');
    FUN16((char *)VAR6->VAR37, sizeof(VAR6->VAR37), VAR4->VAR14, '');
    VAR6->VAR38 = 6;
    VAR6->VAR39[0] = 0x00;
    VAR6->VAR39[1] = 0x02;
    VAR6->VAR39[2] = 0xb3;
    VAR6->VAR40 = FUN14(0);
    VAR6->VAR41 = 7 << 1;
    VAR6->VAR42 = 1 << 0;
    VAR6->VAR43 = (0x6 << 4) | 0x6;
    VAR6->VAR44 = (0x4 << 4) | 0x4;
    VAR6->VAR45 = FUN17(VAR4->VAR19);
    VAR6->VAR46[0].VAR47 = FUN14(0x9c4);
    VAR6->VAR46[0].VAR48 = FUN17(0x10);
    VAR6->VAR46[0].VAR49 = FUN17(0x4);
    VAR4->VAR50.VAR51 = 0;
    FUN18(VAR4->VAR50.VAR51, 0x7ff);
    FUN19(VAR4->VAR50.VAR51, 1);
    FUN20(VAR4->VAR50.VAR51, 1);
    FUN21(VAR4->VAR50.VAR51, 0xf);
    FUN22(VAR4->VAR50.VAR51, 1);
    VAR4->VAR50.VAR52 = 0x00010001;
    VAR4->VAR50.VAR53 = VAR4->VAR50.VAR54 = 0;
    for (VAR8 = 0; VAR8 < VAR4->VAR19; VAR8++)
    {
        VAR55 *VAR56 = &VAR4->VAR24[VAR8];
        VAR57 *VAR58 = &VAR56->VAR58;
        VAR58->VAR59 = 0;
        VAR58->VAR60 = 0;
        VAR58->VAR61 = 0;
        VAR58->VAR62 = 0;
        VAR58->VAR63 = 0;
        VAR58->VAR64 = 0;
        VAR58->VAR65[0].VAR66 = VAR67;
        VAR58->VAR68 = VAR58->VAR69 = VAR58->VAR70 = FUN23(VAR4->VAR22 >> VAR58->VAR65[FUN24(VAR56->VAR58.VAR61)].VAR66);
    }
    return 0;
}