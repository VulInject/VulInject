static void
FUN1(VAR1 *VAR2,
const VAR3 *VAR4, const void *VAR5)
{
uint16_t VAR6, VAR7;

if (FUN2(VAR2->VAR8->VAR9[VAR2->VAR10 + 4], 5, 5) == 0) {
return;
}

VAR6 = VAR2->VAR8->VAR9[VAR2->VAR10 + 5];
if (VAR6 == 0) {
VAR6 = 256;
}

VAR7 = VAR6 / 32;
if ((VAR6 % 8) != 0) {
VAR7++;
}

for (uint16_t VAR11 = 0; VAR11 < VAR7; VAR11++) {
char VAR12[32], VAR13[128];
pcieadm_cfgspace_print_t VAR14;

(void) snprintf(VAR12, sizeof (VAR12), "", VAR11);
(void) snprintf(VAR13, sizeof (VAR13), ""
"", VAR11);
VAR14.VAR15 = VAR4->VAR15 + VAR11 * 4;
VAR14.VAR16 = 4;
VAR14.VAR17 = VAR12;
VAR14.VAR18 = VAR13;
VAR14.VAR19 = VAR20;
VAR14.VAR21 = NULL;

VAR14.FUN3(VAR2, &VAR14, VAR14.VAR21);
}
}