void
FUN1(char *VAR1, VAR2 *VAR3)
{
char			*VAR4;
ushort			VAR5,
VAR6;
register VAR7	*VAR8;
register VAR9	*VAR10;
register VAR11	*VAR12;




(void)FUN2 (VAR1, VAR13, &VAR4, &VAR5);
syslog(VAR14, "", (VAR4 ? VAR4 : ""),
VAR5);

if (!*VAR4)
VAR6 = VAR15;

else switch (VAR5) {
case VAR16:
if (!(VAR8 = FUN3(VAR4)))
VAR6 = VAR15;

else if (!VAR8->VAR17->VAR18)
VAR6 = VAR19;

else {
FUN4 (VAR20, VAR8);
VAR8->VAR17->VAR18 = 1;
VAR6 = VAR21;
}
break;

case VAR22:
if (!(VAR10 = FUN5(VAR4)))
VAR6 = VAR15;

else if (!VAR10->VAR17->VAR18)
VAR6 = VAR19;

else {
FUN4 (VAR23, VAR10);
VAR10->VAR17->VAR18 = 1;
VAR6 = VAR21;
}
break;

case VAR24:
if (!(VAR12 = FUN6(VAR4)))
VAR6 = VAR15;

else if (!VAR12->VAR17->VAR18)
VAR6 = VAR19;

else {
FUN4 (VAR25, VAR12);
VAR12->VAR17->VAR18 = 1;
VAR6 = VAR21;
}
break;
}

FUN7 (VAR3, VAR26, VAR6);
return;
}