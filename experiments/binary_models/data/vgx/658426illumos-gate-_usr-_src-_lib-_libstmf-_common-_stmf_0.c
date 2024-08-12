int
FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
int VAR5 = VAR6;
int VAR7;
int VAR8;
int VAR9 = VAR10;
int VAR11;
stmf_iocdata_t VAR12;
VAR13 *VAR14, *VAR15 = NULL;
uint8_t VAR16[260];
uint32_t VAR17;

if (VAR4 == NULL || VAR2 == NULL) {
VAR5 = VAR18;
}


VAR5 = FUN2();
if (VAR5 != VAR6) {
return (VAR5);
}


if ((VAR5 = FUN3(VAR19, &VAR7)) != VAR6)
return (VAR5);


VAR17 = VAR20;
VAR17 = VAR17 * (sizeof (VAR13));
VAR14 = (VAR13 *)calloc(1, VAR17);
VAR15 = VAR14;
if (VAR14 == NULL) {
VAR5 = VAR21;
goto VAR22;
}

VAR16[VAR23] = VAR2->VAR24;
bcopy(&(VAR2->VAR16), &VAR16[VAR23 + 1],
VAR2->VAR24);

FUN4(&VAR12, sizeof (VAR12));

VAR12.VAR25 = VAR26;
VAR12.VAR27 = (VAR28)(unsigned long)&VAR16;
VAR12.VAR29 = sizeof (VAR16);
VAR12.VAR30 = VAR17;
VAR12.VAR31 = (VAR28)(unsigned long)VAR14;
VAR8 = FUN5(VAR7, VAR9, &VAR12);
if (VAR8 != 0) {
switch (VAR32) {
case VAR33:
VAR5 = VAR34;
break;
case VAR35:
case VAR36:
VAR5 = VAR37;
break;
default:
syslog(VAR38,
"",
VAR32);
VAR5 = VAR39;
break;
}
goto VAR22;
}

if (VAR12.VAR40 > VAR20) {
VAR17 = VAR12.VAR40 *
sizeof (VAR13);
VAR14 = realloc(VAR14, VAR17);
if (VAR14 == NULL) {
VAR5 = VAR21;
goto VAR22;
}
VAR15 = VAR14;
VAR12.VAR30 = VAR17;
VAR12.VAR31 = (VAR28)(unsigned long)VAR14;
VAR8 = FUN5(VAR7, VAR9, &VAR12);
if (VAR8 != 0) {
switch (VAR32) {
case VAR33:
VAR5 = VAR34;
break;
case VAR35:
case VAR36:
VAR5 = VAR37;
break;
default:
syslog(VAR38,
""
"", VAR32);
VAR5 = VAR39;
break;
}
goto VAR22;
}
}


*VAR4 = (VAR3 *)calloc(1, sizeof (VAR3) +
VAR12.VAR40 * sizeof (VAR41));
if (*VAR4 == NULL) {
VAR5 = VAR21;
free(VAR4);
goto VAR22;
}

(*VAR4)->VAR42 = VAR12.VAR40;


for (VAR11 = 0; VAR11 < (*VAR4)->VAR42; VAR11++) {
(*VAR4)->VAR43[VAR11].VAR44.VAR24 =
VAR14->VAR44[VAR23];
bcopy(&(VAR14->VAR44[VAR23 + 1]),
(*VAR4)->VAR43[VAR11].VAR44.VAR16,
VAR45);
bcopy(&(VAR14->VAR46),
&((*VAR4)->VAR43[VAR11].VAR46),
sizeof ((*VAR4)->VAR43[VAR11].VAR46));
bcopy(&(VAR14++->VAR47),
&((*VAR4)->VAR43[VAR11].VAR48),
sizeof (VAR49));
}
VAR22:
(void) close(VAR7);
free(VAR15);
return (VAR5);
}