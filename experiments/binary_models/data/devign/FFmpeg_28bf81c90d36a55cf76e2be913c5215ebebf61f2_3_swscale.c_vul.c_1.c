void FUN1()
{
    int VAR1;
    for (VAR1 = 0; VAR1 < 768; VAR1++)
    {
        int VAR2 = FUN2(FUN3(VAR1 - 256, 0), 255);
        VAR3[VAR1] = VAR2;
        VAR4[VAR2] = VAR5[VAR1] = (0x2568 * (VAR2 - 16)) + (256 << 13);
        VAR6[VAR2] = VAR7[VAR1] = 0x3343 * (VAR2 - 128);
        VAR8[VAR2] = VAR9[VAR1] = -0x0c92 * (VAR2 - 128);
        VAR10[VAR2] = VAR11[VAR1] = -0x1a1e * (VAR2 - 128);
        VAR12[VAR2] = VAR13[VAR1] = 0x40cf * (VAR2 - 128);
    }
    for (VAR1 = 0; VAR1 < 768; VAR1++)
    {
        int VAR14 = VAR3[VAR1];
        VAR15[VAR1] = VAR14 >> 3;
        VAR16[VAR1] = (VAR14 << 3) & 0x07E0;
        VAR17[VAR1] = (VAR14 << 8) & 0xF800;
        VAR18[VAR1] = VAR14 >> 3;
        VAR19[VAR1] = (VAR14 << 2) & 0x03E0;
        VAR20[VAR1] = (VAR14 << 7) & 0x7C00;
    }
}