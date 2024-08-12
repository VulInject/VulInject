static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    unsigned int VAR9;
    FUN2(VAR2, "");
    FUN2(VAR2, "");
    FUN3(VAR2, VAR3);
    FUN3(VAR2, VAR4);
    FUN4(VAR2, 0xf7);
    FUN4(VAR2, 0x1f);
    FUN4(VAR2, 0);
    if (!VAR7)
    {
        FUN5(VAR2, (unsigned char *)VAR10, 216 * 3);
        for (VAR8 = 0; VAR8 < ((256 - 216) * 3); VAR8++)
            FUN4(VAR2, 0);
    }
    else
    {
        for (VAR8 = 0; VAR8 < 256; VAR8++)
        {
            VAR9 = VAR7[VAR8];
            FUN4(VAR2, (VAR9 >> 16) & 0xff);
            FUN4(VAR2, (VAR9 >> 8) & 0xff);
            FUN4(VAR2, (VAR9)&0xff);
        }
    }
    if (VAR5 >= 0 && VAR5 <= 65535)
    {
        FUN4(VAR2, 0x21);
        FUN4(VAR2, 0xff);
        FUN4(VAR2, 0x0b);
        FUN2(VAR2, "");
        FUN4(VAR2, 0x03);
        FUN4(VAR2, 0x01);
        FUN3(VAR2, (VAR11)VAR5);
        FUN4(VAR2, 0x00);
    }
    return 0;
}