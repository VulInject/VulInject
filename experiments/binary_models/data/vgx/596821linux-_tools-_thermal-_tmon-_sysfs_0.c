static int FUN1(void)
{
VAR1 *VAR2;
struct VAR3 **VAR4;
char VAR5[256];
int VAR6, VAR7, VAR8 = 0;

if (!VAR9.VAR10) {
fprintf(VAR11, "");
return 0;
}
for (VAR6 = 0; VAR6 <= VAR9.VAR12; VAR6++) {
memset(VAR5, 0, sizeof(VAR5));
snprintf(VAR5, 256, "", VAR13, VAR14, VAR6);

VAR2 = FUN2(VAR5);
if (!VAR2) {
syslog(VAR15, "", VAR5);

continue;
}

VAR7 = FUN3(VAR5, &VAR4, 0, VAR16);
if (VAR7 < 0)
syslog(VAR17, "",  VAR5);
else {
FUN4(VAR5, "", VAR9.VAR18[VAR8].VAR19);
VAR9.VAR18[VAR8].VAR20 = VAR6;
if (strstr(VAR9.VAR18[VAR8].VAR19, VAR21)) {
VAR9.VAR18[VAR8].VAR22 |= VAR23;
syslog(VAR24, "", VAR6);
}
while (VAR7--)
free(VAR4[VAR7]);
free(VAR4);
}
FUN5(VAR2);
VAR8++;
}
return 0;
}