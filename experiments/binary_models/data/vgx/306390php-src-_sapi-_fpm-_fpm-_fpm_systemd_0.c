int FUN1(void)
{
char *VAR1;
int  VAR2 = 0;

VAR1 = getenv("");
if (VAR1) {

VAR2 = (int)(FUN2(VAR1) / 2000L);
FUN3(VAR3, "", VAR1, VAR2);
}

if (VAR2 > 1000) {
if (VAR4.VAR5 > 0) {
FUN3(VAR6, "");
}
FUN3(VAR7, "", (float)VAR2 / 1000.0);
VAR4.VAR8 = 1;
VAR4.VAR5 = VAR2;

} else if (VAR4.VAR5 < 0) {

VAR4.VAR5 = VAR9;

} else {

VAR4.VAR5 *= 1000;
}
return 0;
}