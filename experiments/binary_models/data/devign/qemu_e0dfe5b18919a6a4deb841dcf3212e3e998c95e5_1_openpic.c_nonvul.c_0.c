static VAR1 FUN1(void *VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7;
    int VAR8;
    FUN2("" VAR9 "", VAR10, VAR3);
    VAR7 = 0xFFFFFFFF;
    VAR3 = VAR3 & 0xffff;
    VAR8 = VAR3 >> 5;
    switch (VAR3 & 0x1f)
    {
    case 0x00:
        VAR7 = FUN3(VAR6, VAR8);
        break;
    case 0x10:
        VAR7 = FUN4(VAR6, VAR8);
        break;
    case 0x18:
        VAR7 = FUN5(VAR6, VAR8);
        break;
    }
    FUN2("", VAR10, VAR7);
    return VAR7;
}