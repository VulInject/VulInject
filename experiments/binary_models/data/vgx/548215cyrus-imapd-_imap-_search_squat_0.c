static int FUN1(void *VAR1, const VAR2 *VAR3)
{
VAR4 *VAR5 = (VAR4 *)VAR1;
unsigned long VAR6;


if (!FUN2(VAR3->VAR7, "", 9)) {
VAR5->VAR8 = FUN3(VAR3->VAR7 + 9, NULL, 10);
return (1);
}

if (!strchr("", VAR3->VAR7[0])) {
syslog(VAR9, "", VAR3->VAR7);
VAR5->VAR10 = 0;

return (1);
}

VAR6 = FUN3(VAR3->VAR7 + 1, NULL, 10);
if (VAR6 > 0) {
FUN4(&VAR5->VAR11, VAR6);
return (1);
}


return (0);
}