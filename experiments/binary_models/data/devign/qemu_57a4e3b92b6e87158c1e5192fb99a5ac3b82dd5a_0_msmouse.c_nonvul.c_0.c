static void FUN1(void *VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR1;
    VAR8 *VAR9 = VAR7->VAR1;
    unsigned char VAR10[4] = {0x40, 0x00, 0x00, 0x00};
    VAR10[0] |= (FUN2(VAR3) << 2) | FUN2(VAR2);
    VAR10[1] |= FUN3(VAR2);
    VAR10[2] |= FUN3(VAR3);
    VAR10[0] |= (VAR5 & 0x01 ? 0x20 : 0x00);
    VAR10[0] |= (VAR5 & 0x02 ? 0x10 : 0x00);
    VAR10[3] |= (VAR5 & 0x04 ? 0x20 : 0x00);
    if (VAR9->VAR11 <= sizeof(VAR9->VAR12) - 4)
    {
        memcpy(VAR9->VAR12 + VAR9->VAR11, VAR10, 4);
        VAR9->VAR11 += 4;
    }
    else
    {
    }
    FUN4(VAR7);
}