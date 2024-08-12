void
FUN1(uint32 VAR1, float VAR2[3])
{
int	VAR3;
double	VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;

VAR4 = FUN2(VAR1>>14 & 0x3ff);
if (VAR4 <= 0.) {
VAR2[0] = VAR2[1] = VAR2[2] = 0.;
return;
}

VAR3 = VAR1 & 0x3fff;
if (FUN3(&VAR5, &VAR6, VAR3) < 0) {
VAR5 = VAR10; VAR6 = VAR11;
}
VAR7 = 1./(6.*VAR5 - 16.*VAR6 + 12.);
VAR8 = 9.*VAR5 * VAR7;
VAR9 = 4.*VAR6 * VAR7;

VAR2[0] = (float)(VAR8/VAR9 * VAR4);
VAR2[1] = (float)VAR4;
VAR2[2] = (float)((1.-VAR8-VAR9)/VAR9 * VAR4);
}