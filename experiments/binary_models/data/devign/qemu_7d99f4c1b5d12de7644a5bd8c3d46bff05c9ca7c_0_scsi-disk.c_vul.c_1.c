static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if (VAR2->VAR6.VAR7 != VAR8)
    {
        return -1;
    }
    VAR5 = FUN2(VAR2) ? VAR9 : VAR10;
    memset(VAR4, 0, 40);
    FUN3(&VAR4[0], 36);
    FUN4(&VAR4[6], VAR5);
    VAR4[10] = 0x03;
    VAR4[11] = 8;
    FUN4(&VAR4[12], VAR9);
    VAR4[14] = (VAR5 == VAR9);
    FUN4(&VAR4[16], VAR10);
    VAR4[18] = (VAR5 == VAR10);
    FUN4(&VAR4[20], 1);
    VAR4[22] = 0x08 | 0x03;
    VAR4[23] = 8;
    FUN3(&VAR4[24], 1);
    VAR4[28] = 1;
    FUN4(&VAR4[32], 3);
    VAR4[34] = 0x08 | 0x03;
    VAR4[35] = 4;
    VAR4[36] = 0x39;
    return 40;
}