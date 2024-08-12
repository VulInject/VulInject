static int
FUN1(VAR1 *VAR2)
{
if (FUN2(VAR2) < 0)
return (-1);

if (VAR2->VAR3.VAR4 != VAR5) {
syslog(VAR6, ""
"",
FUN3(VAR2->VAR3.VAR4));
return (-1);
}

if (FUN4(VAR2, VAR7, VAR8) != 0)
return (-1);

if ((VAR2->VAR9.VAR10[0] == 0) ||
(VAR2->VAR9.VAR11 == 0) ||
(VAR2->VAR9.VAR12 == 0)) {
syslog(VAR6, ""
"");
return (-1);
}

return (0);
}