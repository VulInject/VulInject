static int FUN1(int VAR1, struct VAR2 *VAR3, socklen_t VAR4, int VAR5)
{
int VAR6, VAR7=0;

if ((VAR6 = FUN2(VAR1, VAR8,0)) == -1) {
syslog(VAR9, "");
return -1;
}

if (FUN2(VAR1, VAR10, VAR6|VAR11) == -1) {
syslog(VAR9, "");
return -1;
}

if (connect(VAR1, VAR3, VAR4) < 0) {
if (VAR12 != VAR13) {
VAR7 = -1;
goto VAR14;
}
} else {

syslog(VAR15, "");
VAR7 = 0;
goto VAR14;
}

syslog(VAR15, "");

if (FUN3(VAR1, VAR16, VAR5) < 0) {
syslog(VAR9, "");
VAR7 = -1;
goto VAR14;
}

syslog(VAR15, "");
VAR7 = 0;

VAR14:

if (!VAR7 && (FUN2(VAR1, VAR10, VAR6) == -1)) {
syslog(VAR9, "");
VAR7 = -1;
}

return VAR7;
}