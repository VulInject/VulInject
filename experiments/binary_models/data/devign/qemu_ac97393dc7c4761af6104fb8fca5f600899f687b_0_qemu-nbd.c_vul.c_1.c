static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR4->VAR5 = VAR2[0];
    VAR4->VAR6 = VAR2[1];
    VAR4->VAR7 = VAR2[3] | ((VAR2[2] << 2) & 0x0300);
    VAR4->VAR8 = VAR2[2] & 0x3f;
    VAR4->system = VAR2[4];
    VAR4->VAR9 = VAR2[5];
    VAR4->VAR10 = VAR2[7] | ((VAR2[6] << 2) & 0x300);
    VAR4->VAR11 = VAR2[6] & 0x3f;
    VAR4->VAR12 = VAR2[8] | VAR2[9] << 8 | VAR2[10] << 16 | VAR2[11] << 24;
    VAR4->VAR13 = VAR2[12] | VAR2[13] << 8 | VAR2[14] << 16 | VAR2[15] << 24;
}