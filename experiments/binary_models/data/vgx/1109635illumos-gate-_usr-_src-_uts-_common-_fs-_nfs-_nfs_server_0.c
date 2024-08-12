static int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7,
bool_t VAR8, VAR9 *VAR10)
{
int VAR11, VAR12, VAR13, VAR14, VAR15;
struct VAR16 *VAR17;
caddr_t VAR18;
char VAR19[VAR20]; 
int VAR21 = 0;

uid_t VAR22;
gid_t VAR23;
uint_t VAR24;
VAR25 *VAR26;


if (VAR27) {
struct VAR28 *VAR29;
VAR29 = (struct VAR28 *)FUN2(VAR4->VAR30)->VAR19;

if (VAR29 == NULL)
return (0);

if ((VAR29->VAR31 == VAR32 &&
FUN3(((struct VAR33 *)VAR29)->VAR34) >=
VAR35) ||
(VAR29->VAR31 == VAR36 &&
FUN3(((struct VAR37 *)VAR29)->VAR38) >=
VAR35)) {
FUN4(VAR39,
""
"",
FUN5(VAR4), FUN6(VAR4, VAR19));
return (0);
}
}


VAR14 = FUN7(VAR4, VAR6, &VAR18, &VAR12);


if (!VAR14 && VAR12 != VAR40) {
FUN4(VAR39,
"",
FUN5(VAR4));
return (0);
}


if (VAR8)
return (1);

VAR13 = VAR4->VAR41.VAR42;

VAR15 = FUN8(VAR2, VAR4, VAR6, &VAR22, &VAR23, &VAR24, &VAR26);
if (VAR15 & VAR43)
return (-1);	

if (VAR15 & VAR44)
*VAR10 = VAR45;

if (VAR15 & VAR46) {

if (VAR7 == 1)
VAR13 = VAR47;
else
return (0);	

} else if (VAR15 & VAR48) {

VAR13 = VAR47;

} else if (VAR15 & VAR49) {

return (0);
}

if (VAR13 != VAR50)
FUN9(VAR26, VAR24 * sizeof (VAR25));

switch (VAR13) {
case VAR47:
VAR21 = FUN10(VAR6, VAR2->VAR51.VAR52,
VAR2->VAR51.VAR52);
(void) FUN11(VAR6, 0, NULL);
break;

case VAR40:
if (!VAR14 || FUN12(VAR6) == 0 && !(VAR15 & VAR53)) {
VAR21 = FUN10(VAR6, VAR2->VAR51.VAR52,
VAR2->VAR51.VAR52);
(void) FUN11(VAR6, 0, NULL);
} else if (FUN12(VAR6) == 0 && VAR15 & VAR54) {

VAR17 = NULL;
for (VAR11 = 0; VAR11 < VAR2->VAR51.VAR55; VAR11++) {
struct VAR16 *VAR56;
VAR56 = &VAR2->VAR51.VAR57[VAR11];
if (VAR56->VAR58.VAR59 == VAR12) {
VAR17 = VAR56;
break;
}
}
if (VAR17 != NULL) {
(void) FUN10(VAR6, VAR17->VAR60,
VAR17->VAR60);
(void) FUN11(VAR6, 0, NULL);
}
} else if (FUN12(VAR6) != VAR22 || FUN13(VAR6) != VAR23) {
if (FUN10(VAR6, VAR22, VAR23) != 0)
VAR21 = FUN10(VAR6,
VAR2->VAR51.VAR52,
VAR2->VAR51.VAR52);
(void) FUN11(VAR6, 0, NULL);
} else if (VAR15 & VAR61) {
(void) FUN11(VAR6, VAR24, VAR26);
}

FUN9(VAR26, VAR24 * sizeof (VAR25));

break;

case VAR62:
case VAR63:

VAR17 = NULL;
for (VAR11 = 0; VAR11 < VAR2->VAR51.VAR55; VAR11++) {
if (VAR2->VAR51.VAR57[VAR11].VAR58.VAR59 ==
VAR12) {
VAR17 = &VAR2->VAR51.VAR57[VAR11];
break;
}
}

if (!VAR17) {
FUN4(VAR39, ""
"",
FUN5(VAR4), FUN6(VAR4, VAR19),
VAR12);
return (0);
}

if (!FUN14(VAR13, VAR17->VAR64, VAR4)) {
FUN4(VAR39,
""
"",
FUN5(VAR4), FUN6(VAR4, VAR19));
return (0);
}


if (VAR18 && FUN15(VAR13, VAR18,
VAR17->VAR65, VAR17->VAR66)) {
if (FUN12(VAR6) == 0 && VAR17->VAR60 == 0)
return (1);


(void) FUN10(VAR6, VAR17->VAR60, VAR17->VAR60);


(void) FUN11(VAR6, 0, NULL);

return (1);
}


if (FUN12(VAR6) != 0 &&
(FUN12(VAR6) != VAR67 || FUN13(VAR6) != VAR68))
return (1);

VAR21 = FUN10(VAR6, VAR2->VAR51.VAR52,
VAR2->VAR51.VAR52);
(void) FUN11(VAR6, 0, NULL);
break;
default:
return (0);
} 


if (VAR21 != 0) {
if (VAR7 == 0) {
FUN4(VAR39,
""
"",
FUN5(VAR4), FUN6(VAR4, VAR19),
VAR2->VAR51.VAR69 ?
VAR2->VAR51.VAR69 : "");
return (0);
}

if (FUN10(VAR6, VAR67, VAR68) != 0)
return (0);
}

return (1);
}