void
FUN1(const VAR1 *VAR2, size_t VAR3)
{
cdf_timestamp_t VAR4;
struct timeval VAR5;
char VAR6[64];
size_t VAR7, VAR8;

for (VAR7 = 0; VAR7 < VAR3; VAR7++) {
FUN2(VAR6, sizeof(VAR6), VAR2[VAR7].VAR9);
(void)fprintf(VAR10, "" VAR11 "", VAR7, VAR6);
switch (VAR2[VAR7].VAR12) {
case VAR13:
break;
case VAR14:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR15);
break;
case VAR16:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR17);
break;
case VAR18:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR19);
break;
case VAR20:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR21);
break;
case VAR22:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR23);
break;
case VAR24:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR25.VAR26,
VAR2[VAR7].VAR25.VAR26, VAR2[VAR7].VAR25.VAR27);
break;
case VAR28:
(void)fprintf(VAR10, "",
VAR2[VAR7].VAR25.VAR26);
for (VAR8 = 0; VAR8 < VAR2[VAR7].VAR25.VAR26 - 1; VAR8++)
(void)fputc(VAR2[VAR7].VAR25.VAR27[VAR8 << 1], VAR10);
(void)fprintf(VAR10, "");
break;
case VAR29:
VAR4 = VAR2[VAR7].VAR30;
if (VAR4 < 1000000000000000LL) {
FUN3(VAR6, sizeof(VAR6), VAR4);
(void)fprintf(VAR10, "", VAR6);
} else {
char VAR31[26];
FUN4(&VAR5, VAR4);
(void)fprintf(VAR10, "",
FUN5(&VAR5.VAR32, VAR31));
}
break;
case VAR33:
(void)fprintf(VAR10, "", VAR2[VAR7].VAR19);
break;
default:
FUN6(("",
VAR2[VAR7].VAR12));
break;
}
}
}