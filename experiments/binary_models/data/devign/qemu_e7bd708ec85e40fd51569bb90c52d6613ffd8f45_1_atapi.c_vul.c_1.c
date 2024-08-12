static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    VAR5 = (VAR4[6] << 16) | (VAR4[7] << 8) | VAR4[8];
    VAR6 = FUN2(VAR4 + 2);
    if (VAR5 == 0)
    {
        FUN3(VAR2);
        return;
    }
    VAR7 = VAR4[9];
    switch (VAR7 & 0xf8)
    {
    case 0x00:
        FUN3(VAR2);
        break;
    case 0x10:
        FUN4(VAR2, VAR6, VAR5, 2048);
        break;
    case 0xf8:
        FUN4(VAR2, VAR6, VAR5, 2352);
        break;
    default:
        FUN5(VAR2, VAR8, VAR9);
        break;
    }
}