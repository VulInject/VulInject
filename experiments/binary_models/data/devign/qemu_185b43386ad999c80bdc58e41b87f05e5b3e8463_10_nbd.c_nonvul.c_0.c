static int FUN1(int VAR1, off_t VAR2, uint32_t VAR3)
{
    char VAR4[8 + 8 + 8 + 128];
    int VAR5;
    VAR5 = -VAR6;
    FUN2("");
    memcpy(VAR4, "", 8);
    FUN3((VAR7 *)(VAR4 + 8), 0x00420281861253LL);
    FUN3((VAR7 *)(VAR4 + 16), VAR2);
    FUN4((VAR8 *)(VAR4 + 24), VAR3 | VAR9 | VAR10 | VAR11 | VAR12);
    memset(VAR4 + 28, 0, 124);
    if (FUN5(VAR1, VAR4, sizeof(VAR4)) != sizeof(VAR4))
    {
        FUN6("");
        goto VAR13;
    }
    FUN2("");
    VAR5 = 0;
VAR13:
    return VAR5;
}