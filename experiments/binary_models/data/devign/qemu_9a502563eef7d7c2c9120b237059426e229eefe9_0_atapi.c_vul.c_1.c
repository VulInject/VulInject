static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4[4];
    VAR4[0] = 0x05;
    VAR4[1] = 0x80;
    VAR4[2] = 0x00;
    VAR4[3] = 0x21;
    VAR4[4] = 31;
    VAR4[5] = 0;
    VAR4[6] = 0;
    VAR4[7] = 0;
    FUN2(VAR4 + 8, 8, "");
    FUN2(VAR4 + 16, 16, "");
    FUN2(VAR4 + 32, 4, VAR2->VAR6);
    FUN3(VAR2, 36, VAR5);
}