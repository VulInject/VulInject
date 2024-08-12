static int FUN1(struct VAR1 *VAR2, char *VAR3,
struct VAR4 *VAR5, int VAR6, int VAR7)
{
unsigned long VAR8 = 0;
char VAR9[256];
char VAR10[256];
char VAR11[256];
int VAR12;

if (VAR2->VAR13 == VAR14) {
syslog(VAR15, "", VAR6, VAR2->VAR16,
VAR7);
VAR5->VAR17++;
if (VAR5->VAR17 > VAR18.VAR19) {
syslog(VAR20, "",
VAR5->VAR17);
return -VAR21;
}

snprintf(VAR10, 256, "", VAR3, VAR2->VAR16);
memset(VAR9, 0, sizeof(VAR9));
if (readlink(VAR10, VAR9,
sizeof(VAR9) - 1) != -1) {
VAR12 = FUN2(VAR9, 1,
sizeof("") - 1);
syslog(VAR15, "",
VAR10, VAR9, VAR12);
VAR5->VAR22 |= (1 << VAR12);


snprintf(VAR11, 256, "", VAR2->VAR16,
"");
FUN3(VAR3, VAR11,
&VAR8);

if (VAR8 > VAR23)
VAR8 = 0;
VAR5->VAR24[VAR12] |= 1 << VAR8;
syslog(VAR15, "",
VAR10, VAR8,
VAR5->VAR24[VAR12],
VAR12);


}
return 0;
}

return -VAR25;
}