static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = VAR4->VAR2.VAR7;
    int VAR8;
    FUN3(&VAR6[VAR9], 0x20);
    FUN3(&VAR6[VAR10], 0x00);
    FUN3(&VAR6[VAR11], 4);
    FUN3(&VAR6[VAR12], 0);
    FUN3(&VAR6[VAR13], 0);
    FUN3(&VAR6[VAR14], VAR15);
    FUN3(&VAR6[0x61], 0x20);
    FUN4(&VAR6[0x62], 0x00);
    VAR6[0x64] = 0x00;
    VAR6[0x65] = 0x00;
    VAR6[0x66] = 0x00;
    VAR6[0x67] = 0x00;
    VAR6[0x68] = 0x01;
    VAR6[0x69] = 0x00;
    VAR6[0x6a] = 0x00;
    VAR6[0x6b] = 0x00;
    VAR6[0x6c] = 0x00;
    VAR6[0x6d] = 0x00;
    VAR6[0x6e] = 0x00;
    VAR6[0x6f] = 0xc0;
    VAR4->VAR16[0x00] = (VAR5)VAR17;
    VAR4->VAR16[0x01] = 0x00;
    VAR4->VAR16[0x02] = 0x00;
    VAR4->VAR16[0x03] = 0x01;
    VAR4->VAR16[0x04] = VAR18;
    VAR4->VAR16[0x05] = 0x00;
    VAR4->VAR16[0x06] = 0x00;
    VAR4->VAR16[0x07] = 0x00;
    VAR4->VAR16[0x08] = 0x80;
    VAR4->VAR16[0x09] = 0x68;
    VAR4->VAR16[0x0a] = 0x00;
    VAR4->VAR16[0x0b] = 0x00;
    VAR4->VAR19 = VAR4->VAR2.VAR19[3];
    FUN5(&VAR4->VAR20, &VAR21, &VAR4->VAR2.VAR22);
    for (VAR8 = 0; VAR8 < VAR18; VAR8++)
    {
        FUN6(&VAR4->VAR20, &VAR4->VAR23[VAR8], VAR4, VAR8, &VAR24, VAR25);
        VAR4->VAR23[VAR8].VAR2 = 0;
    }
    VAR4->VAR26 = FUN7(VAR27, VAR28, VAR4);
    VAR4->VAR29 = FUN8(VAR30, VAR4);
    FUN9(&VAR4->VAR31);
    FUN9(&VAR4->VAR32);
    FUN10(&VAR4->VAR33);
    FUN11(VAR34, VAR4);
    FUN12(&VAR4->VAR35, &VAR36, VAR4, "", VAR37);
    FUN13(&VAR4->VAR2, 0, VAR38, &VAR4->VAR35);
    return 0;
}