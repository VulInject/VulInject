static void FUN1(VAR1 *VAR2, double *VAR3)
{
static const uint16_t VAR4[5] = { 256, 64, 128, 64, 128 };
static const double VAR5[5] = {
3.3439586280e-3,    6.9908173703e-4,
3.3216608306e-3,    1.0334960326e-3,
3.1899104283e-3
};
static const double VAR6[5] = {
VAR7 * -1.27576e-1, VAR7 * -2.4292e-2,
VAR7 * -1.28094e-1, VAR7 * -3.2128e-2,
VAR7 * -1.29816e-1
};
uint16_t VAR8[5];

VAR8[0] = FUN2(VAR2, 8);
VAR8[1] = FUN2(VAR2, 6);
VAR8[2] = FUN2(VAR2, 7);
VAR8[3] = FUN2(VAR2, 6);
VAR8[4] = FUN2(VAR2, 7);

FUN3( VAR3,     5,  VAR8,     VAR4,    2,
VAR9,  VAR5,     VAR6);
FUN3(&VAR3[5],  5, &VAR8[2], &VAR4[2], 2,
VAR10, &VAR5[2], &VAR6[2]);
FUN3(&VAR3[10], 6, &VAR8[4], &VAR4[4], 1,
VAR11, &VAR5[4], &VAR6[4]);
}