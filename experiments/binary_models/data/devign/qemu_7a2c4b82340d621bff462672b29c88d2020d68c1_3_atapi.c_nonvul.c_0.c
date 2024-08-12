static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9;
    uint64_t VAR10 = VAR2->VAR11 >> 2;
    VAR9 = FUN2(VAR4 + 7);
    VAR5 = VAR4[9] >> 6;
    VAR6 = (VAR4[1] >> 1) & 1;
    VAR7 = VAR4[6];
    switch (VAR5)
    {
    case 0:
        VAR8 = FUN3(VAR10, VAR4, VAR6, VAR7);
        if (VAR8 < 0)
            goto VAR12;
        FUN4(VAR2, VAR8, VAR9);
        break;
    case 1:
        memset(VAR4, 0, 12);
        VAR4[1] = 0x0a;
        VAR4[2] = 0x01;
        VAR4[3] = 0x01;
        FUN4(VAR2, 12, VAR9);
        break;
    case 2:
        VAR8 = FUN5(VAR10, VAR4, VAR6, VAR7);
        if (VAR8 < 0)
            goto VAR12;
        FUN4(VAR2, VAR8, VAR9);
        break;
    default:
    VAR12:
        FUN6(VAR2, VAR13, VAR14);
    }
}