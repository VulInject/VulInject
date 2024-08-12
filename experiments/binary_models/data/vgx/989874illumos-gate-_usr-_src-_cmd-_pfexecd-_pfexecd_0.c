static void
FUN1(void *VAR1, char *VAR2, size_t VAR3, VAR4 *VAR5, uint_t VAR6)
{

VAR7 *VAR8 = (VAR7 *)VAR2;

if (VAR3 < sizeof (VAR7) || VAR8->VAR9 != VAR10) {
(void) FUN2(NULL, 0, NULL, 0);
return;
}

switch (VAR8->VAR11) {
case VAR12:
FUN3(VAR8);
break;
case VAR13:
FUN4(VAR8);
break;
case VAR14:
FUN5(VAR8);
break;
default:
syslog(VAR15, "", VAR8->VAR11);
break;
}


(void) FUN2(NULL, 0, NULL, 0);
}