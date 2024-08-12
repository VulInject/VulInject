void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    static const MACAddr VAR4 = {.VAR5 = {0, 0, 0, 0, 0, 0}};
    if (memcmp(VAR2, &VAR4, sizeof(VAR4)) != 0)
        return;
    VAR2->VAR5[0] = 0x52;
    VAR2->VAR5[1] = 0x54;
    VAR2->VAR5[2] = 0x00;
    VAR2->VAR5[3] = 0x12;
    VAR2->VAR5[4] = 0x34;
    VAR2->VAR5[5] = 0x56 + VAR3++;
}