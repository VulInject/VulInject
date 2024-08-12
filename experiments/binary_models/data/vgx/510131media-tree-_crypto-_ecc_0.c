static void FUN1(VAR1 *VAR2, const VAR1 *VAR3,
const VAR1 *VAR4, VAR1 *VAR5)
{
int VAR6;
const unsigned int VAR7 = 4;


FUN2(VAR2, VAR3, VAR7);


VAR5[0] = 0;
VAR5[1] = VAR3[5] & 0xffffffff00000000ull;
VAR5[2] = VAR3[6];
VAR5[3] = VAR3[7];
VAR6 = FUN3(VAR5, VAR5, 1, VAR7);
VAR6 += FUN4(VAR2, VAR2, VAR5, VAR7);


VAR5[1] = VAR3[6] << 32;
VAR5[2] = (VAR3[6] >> 32) | (VAR3[7] << 32);
VAR5[3] = VAR3[7] >> 32;
VAR6 += FUN3(VAR5, VAR5, 1, VAR7);
VAR6 += FUN4(VAR2, VAR2, VAR5, VAR7);


VAR5[0] = VAR3[4];
VAR5[1] = VAR3[5] & 0xffffffff;
VAR5[2] = 0;
VAR5[3] = VAR3[7];
VAR6 += FUN4(VAR2, VAR2, VAR5, VAR7);


VAR5[0] = (VAR3[4] >> 32) | (VAR3[5] << 32);
VAR5[1] = (VAR3[5] >> 32) | (VAR3[6] & 0xffffffff00000000ull);
VAR5[2] = VAR3[7];
VAR5[3] = (VAR3[6] >> 32) | (VAR3[4] << 32);
VAR6 += FUN4(VAR2, VAR2, VAR5, VAR7);


VAR5[0] = (VAR3[5] >> 32) | (VAR3[6] << 32);
VAR5[1] = (VAR3[6] >> 32);
VAR5[2] = 0;
VAR5[3] = (VAR3[4] & 0xffffffff) | (VAR3[5] << 32);
VAR6 -= FUN5(VAR2, VAR2, VAR5, VAR7);


VAR5[0] = VAR3[6];
VAR5[1] = VAR3[7];
VAR5[2] = 0;
VAR5[3] = (VAR3[4] >> 32) | (VAR3[5] & 0xffffffff00000000ull);
VAR6 -= FUN5(VAR2, VAR2, VAR5, VAR7);


VAR5[0] = (VAR3[6] >> 32) | (VAR3[7] << 32);
VAR5[1] = (VAR3[7] >> 32) | (VAR3[4] << 32);
VAR5[2] = (VAR3[4] >> 32) | (VAR3[5] << 32);
VAR5[3] = (VAR3[6] << 32);
VAR6 -= FUN5(VAR2, VAR2, VAR5, VAR7);


VAR5[0] = VAR3[7];
VAR5[1] = VAR3[4] & 0xffffffff00000000ull;
VAR5[2] = VAR3[5];
VAR5[3] = VAR3[6] & 0xffffffff00000000ull;
VAR6 -= FUN5(VAR2, VAR2, VAR5, VAR7);

if (VAR6 < 0) {
do {
VAR6 += FUN4(VAR2, VAR2, VAR4, VAR7);
} while (VAR6 < 0);
} else {
while (VAR6 || FUN6(VAR4, VAR2, VAR7) != 1)
VAR6 -= FUN5(VAR2, VAR2, VAR4, VAR7);
}
}