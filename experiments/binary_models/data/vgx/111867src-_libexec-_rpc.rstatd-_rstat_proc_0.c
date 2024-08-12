void
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
char *(*VAR5)(void *, struct VAR1 *);
xdrproc_t VAR6, VAR7;
union {
int VAR8;
} VAR9;
char *VAR10;

switch (VAR2->VAR11) {
case VAR12:
(void)FUN2(VAR4, VAR13, (char *)NULL);
return;

case VAR14:
VAR6 = (VAR15)VAR13;
VAR7 = (VAR15)VAR16;
switch (VAR2->VAR17) {
case VAR18:
VAR5 = (char *(*)(void *, struct VAR1 *))
VAR19;
break;
case VAR20:
VAR5 = (char *(*)(void *, struct VAR1 *))
VAR21;
break;
case VAR22:
VAR5 = (char *(*)(void *, struct VAR1 *))
VAR23;
break;
default:
FUN3(VAR4, VAR18, VAR22);
return;
}
break;

case VAR24:
VAR6 = (VAR15)VAR13;
VAR7 = (VAR15)VAR25;
switch (VAR2->VAR17) {
case VAR18:
VAR5 = (char *(*)(void *, struct VAR1 *))
VAR26;
break;
case VAR20:
VAR5 = (char *(*)(void *, struct VAR1 *))
VAR27;
break;
case VAR22:
VAR5 = (char *(*)(void *, struct VAR1 *))
VAR28;
break;
default:
FUN3(VAR4, VAR18, VAR22);
return;
}
break;

default:
FUN4(VAR4);
return;
}
memset(&VAR9, 0, sizeof(VAR9));
if (!FUN5(VAR4, VAR6, (VAR29)&VAR9)) {
FUN6(VAR4);
return;
}
VAR10 = (*VAR5)(&VAR9, VAR2);
if (VAR10 != NULL && !FUN2(VAR4, VAR7, VAR10)) {
FUN7(VAR4);
}
if (!FUN8(VAR4, VAR6, (VAR29)&VAR9)) {
syslog(VAR30, "");
FUN9(1);
}
}