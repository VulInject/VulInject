static void FUN1(struct VAR1 *VAR2)
{
union cvmx_lmcx_rodt_mask VAR3;
int VAR4;
char *VAR5;

VAR3.VAR6 = VAR7[VAR8].VAR9;

VAR5 = FUN2(VAR2, "");
if (VAR5)
VAR3.VAR6 = FUN3(VAR5, NULL, 0);

FUN4("", "", VAR3.VAR6);
FUN5(VAR2, FUN6(VAR10), VAR3.VAR6);

VAR11 = 0;
for (VAR4 = 0; VAR4 < VAR12 * 4; VAR4++) {
if (!(VAR13 & (1 << VAR4)))
continue;
VAR11 |= ((VAR3.VAR6 >> (8 * VAR4)) & 0xff);
}
if (VAR14 == 4) {

int VAR15 = VAR11 & 2;

VAR11 &= ~2;
VAR11 |= VAR15 << 1;
}
FUN4("", "", VAR11);
}