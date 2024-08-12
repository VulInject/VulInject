static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    FUN2(VAR2, "", 3);
    FUN2(VAR2, "", 3);
    FUN3(VAR2, VAR3);
    FUN3(VAR2, VAR4);
    if (VAR7)
    {
        FUN4(VAR2, 0xf7);
        FUN4(VAR2, 0x1f);
        FUN4(VAR2, 0);
        for (VAR8 = 0; VAR8 < 256; VAR8++)
        {
            const uint32_t VAR9 = VAR7[VAR8] & 0xffffff;
            FUN5(VAR2, VAR9);
        }
    }
    else
    {
        FUN4(VAR2, 0);
        FUN4(VAR2, 0);
        FUN4(VAR2, 0);
    }
    if (VAR5 >= 0)
    {
        FUN4(VAR2, 0x21);
        FUN4(VAR2, 0xff);
        FUN4(VAR2, 0x0b);
        FUN2(VAR2, "", sizeof("") - 1);
        FUN4(VAR2, 0x03);
        FUN4(VAR2, 0x01);
        FUN3(VAR2, (VAR10)VAR5);
        FUN4(VAR2, 0x00);
    }
    return 0;
}