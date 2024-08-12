static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR9;
    AVRational VAR10 = VAR2->VAR11[0]->VAR12->VAR13;
    int VAR14, VAR15 = 0;
    if (VAR10.VAR16 > 0 && VAR10.VAR17 > 0)
    {
        VAR15 = VAR10.VAR16 * 64 / VAR10.VAR17 - 15;
        if (VAR15 < 0 || VAR15 > 255)
            VAR15 = 0;
    }
    FUN2(VAR9, "", 3);
    FUN2(VAR9, "", 3);
    FUN3(VAR9, VAR3);
    FUN3(VAR9, VAR4);
    if (VAR7)
    {
        FUN4(VAR9, 0xf7);
        FUN4(VAR9, 0x1f);
        FUN4(VAR9, VAR15);
        for (VAR14 = 0; VAR14 < 256; VAR14++)
        {
            const uint32_t VAR18 = VAR7[VAR14] & 0xffffff;
            FUN5(VAR9, VAR18);
        }
    }
    else
    {
        FUN4(VAR9, 0);
        FUN4(VAR9, 0);
        FUN4(VAR9, VAR15);
    }
    if (VAR5 >= 0)
    {
        FUN4(VAR9, 0x21);
        FUN4(VAR9, 0xff);
        FUN4(VAR9, 0x0b);
        FUN2(VAR9, "", sizeof("") - 1);
        FUN4(VAR9, 0x03);
        FUN4(VAR9, 0x01);
        FUN3(VAR9, (VAR19)VAR5);
        FUN4(VAR9, 0x00);
    }
    return 0;
}