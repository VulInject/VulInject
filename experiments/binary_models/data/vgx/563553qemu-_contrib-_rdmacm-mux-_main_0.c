static int FUN1(int VAR1)
{
int VAR2;
RdmaCmMuxMsg VAR3 = {};
struct VAR4 *VAR5;
VAR6 *VAR7 = 0;
uint16_t VAR8;

VAR2 = recv(VAR1, &VAR3, sizeof(VAR3), 0);
syslog(VAR9, "", VAR1, VAR2);

if (VAR2 < 0 && VAR10 != VAR11) {
syslog(VAR12, "", VAR1);
return -VAR13;
}

if (!VAR2) {
syslog(VAR12, "", VAR1);
return -VAR14;
}

if (VAR3.VAR5.VAR15 != VAR16) {
syslog(VAR17, "",
VAR3.VAR5.VAR15, VAR1);
return -VAR18;
}

switch (VAR3.VAR5.VAR19) {
case VAR20:
VAR2 = FUN2(VAR1, VAR3.VAR5.VAR21.VAR22.VAR23);
break;

case VAR24:
VAR2 = FUN3(VAR1, VAR3.VAR5.VAR21.VAR22.VAR23);
break;

case VAR25:

VAR5 = (struct VAR4 *)VAR3.VAR26.VAR27;
VAR8 = FUN4(VAR5->VAR8);
if ((VAR8 == VAR28) || (VAR8 == VAR29) ||
(VAR8 == VAR30) ||
(VAR8 == VAR31) || (VAR8 == VAR32)) {
VAR7 = (VAR6 *)(VAR3.VAR26.VAR27 + sizeof(*VAR5));
FUN5(VAR1, *VAR7,
VAR3.VAR5.VAR21.VAR22.VAR23);
}

syslog(VAR9, "", VAR1, VAR8,
VAR7 ? *VAR7 : 0);
VAR2 = FUN6(VAR33.VAR34.VAR35, VAR33.VAR34.VAR36,
&VAR3.VAR26, VAR3.VAR37, 1, 0);
if (VAR2) {
syslog(VAR12,
"",
VAR8, VAR1, VAR2);
}
break;

default:
syslog(VAR12, "",
VAR3.VAR5.VAR15, VAR1);
VAR2 = VAR38;
}

VAR3.VAR5.VAR15 = VAR39;
VAR3.VAR5.VAR40 = VAR2;
VAR2 = send(VAR1, &VAR3, sizeof(VAR3), 0);

return VAR2 == sizeof(VAR3) ? 0 : -VAR14;
}