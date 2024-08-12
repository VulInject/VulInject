static void
FUN1(void)
{
int VAR1, VAR2;
int VAR3;

for (VAR1 = 1; ; VAR1 = VAR1 < 256 ? VAR1 << 1 : VAR1) {
VAR3 = -1;
VAR4 = FUN2(VAR5, 0);
if (VAR4 >= 0) {
if ((VAR2 = snprintf(VAR6, sizeof(VAR6), "", VAR7)) < 0 ||
VAR2 >= sizeof(VAR6))
VAR2 = sizeof(VAR6) - 1;
if (write(VAR4, VAR6, VAR2) == VAR2 &&
(VAR3 = FUN3()) == '')
break;
(void)close(VAR4);
}
if (VAR1 == 1) {
if (VAR3 < 0)
FUN4("", VAR5);
else {
FUN4("",
VAR5);
VAR1 = 256;
}
}
sleep(VAR1);
}
FUN4("", VAR5);
}