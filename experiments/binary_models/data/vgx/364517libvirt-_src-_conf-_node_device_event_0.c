static void
FUN1(virConnectPtr VAR1,
VAR2 *VAR3,
virConnectObjectEventGenericCallback VAR4,
void *VAR5)
{
virNodeDevicePtr VAR6 = FUN2(VAR1,
VAR3->VAR7.VAR8);

if (!VAR6)
return;

switch ((VAR9)VAR3->VAR10) {
case VAR11:
{
VAR12 *VAR13;

VAR13 = (VAR12 *)VAR3;
((VAR14)VAR4)(VAR1, VAR6,
VAR13->VAR15,
VAR13->VAR16,
VAR5);
goto VAR17;
}

case VAR18:
{
((VAR19)VAR4)(VAR1, VAR6,
VAR5);
goto VAR17;
}

case VAR20:
break;
}
FUN3("", VAR3->VAR10);

VAR17:
FUN4(VAR6);
}