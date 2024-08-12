static void
FUN1(unsigned short VAR1, int VAR2)
{
struct VAR3 * VAR4;
struct VAR3 * * VAR5;
VAR5 = &VAR6;
VAR4 = *VAR5;
while(VAR4) {
if(VAR4->VAR1 == VAR1 && VAR4->VAR7 == (short)VAR2) {
syslog(VAR8, "", VAR1, VAR2, VAR4->VAR9);

*VAR5 = VAR4->VAR10;
free(VAR4);
return;
}
VAR5 = &(VAR4->VAR10);
VAR4 = *VAR5;
}
syslog(VAR11, "", VAR1, VAR2);
}