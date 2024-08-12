static VAR1 FUN1(void)
{
    struct tm VAR2;
    FUN2(&VAR2, 0);
    return ((VAR1)VAR2.VAR3 & 0xff) << 48 | ((VAR1)VAR2.VAR4 & 0xff) << 40 | ((VAR1)VAR2.VAR5 & 0xff) << 32 | ((VAR1)VAR2.VAR6 & 0xff) << 24 | ((VAR1)VAR2.VAR7 & 0xff) << 16 | ((VAR1)(VAR2.VAR8 + 1900) & 0xffff);
}