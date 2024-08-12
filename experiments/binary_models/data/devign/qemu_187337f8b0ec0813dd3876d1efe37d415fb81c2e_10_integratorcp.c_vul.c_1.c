static void FUN1(int VAR1, uint32_t VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    VAR5 = (VAR4 *)FUN2(sizeof(VAR4));
    VAR5->VAR6 = 0x01000048;
    VAR5->VAR7 = 0x0007feff;
    VAR5->VAR8 = 0x00011122;
    if (VAR1 >= 256)
    {
        VAR9[31] = 64;
        VAR5->VAR8 |= 0x10;
    }
    else if (VAR1 >= 128)
    {
        VAR9[31] = 32;
        VAR5->VAR8 |= 0x0c;
    }
    else if (VAR1 >= 64)
    {
        VAR9[31] = 16;
        VAR5->VAR8 |= 0x08;
    }
    else if (VAR1 >= 32)
    {
        VAR9[31] = 4;
        VAR5->VAR8 |= 0x04;
    }
    else
    {
        VAR9[31] = 2;
    }
    memcpy(VAR9 + 73, "", 11);
    VAR5->VAR10 = 0x00000112;
    VAR5->VAR2 = VAR2;
    VAR3 = FUN3(0, VAR11, VAR12, VAR5);
    FUN4(0x10000000, 0x007fffff, VAR3);
    FUN5(VAR5, 1);
}