static int FUN1(VAR1 **VAR2, int VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7;
    unsigned int VAR8;
    FUN2(VAR2, "", 3);
    FUN2(VAR2, "", 3);
    FUN3(VAR2, VAR3);
    FUN3(VAR2, VAR4);
    FUN4(VAR2, 0xf7);
    FUN4(VAR2, 0x1f);
    FUN4(VAR2, 0);
    if (!VAR6)
    {
        FUN2(VAR2, (const unsigned char *)VAR9, 216 * 3);
        for (VAR7 = 0; VAR7 < ((256 - 216) * 3); VAR7++)
            FUN4(VAR2, 0);
    }
    else
    {
        for (VAR7 = 0; VAR7 < 256; VAR7++)
        {
            VAR8 = VAR6[VAR7];
            FUN5(VAR2, VAR8);
        }
    }
    return 0;
}