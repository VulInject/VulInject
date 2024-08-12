static char FUN1(struct VAR1 *VAR1, char VAR2, VAR3 *VAR4)
{
u8 VAR5[8];

if (VAR2 != 0) {
VAR5[0] = VAR4[0];
VAR5[1] = VAR4[1];
VAR5[2] = VAR4[2];
VAR5[3] = VAR4[5];
VAR5[4] = VAR4[6];
VAR5[5] = VAR4[7];
} else {
VAR5[0] = VAR4[0];
VAR5[1] = VAR4[1];
VAR5[2] = VAR4[2];
VAR5[3] = VAR4[3];
VAR5[4] = VAR4[4];
VAR5[5] = VAR4[5];
}

VAR5[6] = 0;
VAR5[7] = FUN2(VAR5, 7);

if (FUN3(VAR1, 0x3f8, VAR5, 8) == 8)
return 1;
return 0;
}