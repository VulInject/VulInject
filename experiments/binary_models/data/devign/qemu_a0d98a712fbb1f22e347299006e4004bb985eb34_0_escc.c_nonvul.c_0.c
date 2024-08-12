static void FUN1(void *VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR1;
    int VAR8;
    FUN2("", VAR2, VAR3, VAR5);
    VAR8 = 0x80 | 0x7;
    if (VAR5 & VAR9)
        VAR8 ^= 0x4;
    if (VAR5 & VAR10)
        VAR8 ^= 0x2;
    if (VAR5 & VAR11)
        VAR8 ^= 0x1;
    FUN3(VAR7, VAR8);
    VAR8 = VAR2;
    if (VAR8 > 127)
        VAR8 = 127;
    else if (VAR8 < -127)
        VAR8 = -127;
    FUN3(VAR7, VAR8 & 0xff);
    VAR8 = -VAR3;
    if (VAR8 > 127)
        VAR8 = 127;
    else if (VAR8 < -127)
        VAR8 = -127;
    FUN3(VAR7, VAR8 & 0xff);
    FUN3(VAR7, 0);
    FUN3(VAR7, 0);
}