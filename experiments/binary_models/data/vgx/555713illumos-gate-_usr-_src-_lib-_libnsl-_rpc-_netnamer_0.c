int
FUN1(const char *VAR1, VAR2 *VAR3, VAR4 *VAR5, int *VAR6,
VAR4 *VAR7)
{
struct VAR8 *VAR9;
struct VAR10 *VAR11;
enum __nsw_parse_err VAR12;
int VAR13 = 1, VAR14;
struct netid_userdata VAR15;
int VAR16;



if (strcmp(VAR1, "") == 0) {
*VAR3 = VAR17;
*VAR5 = VAR17;
*VAR6 = 0;
return (1);
}


if (FUN2(VAR1, VAR18, VAR19) != 0)
return (0);
if (!FUN3(VAR1[VAR19+1]))	
return (0);

VAR15.VAR3 = VAR3;
VAR15.VAR5 = VAR5;
VAR15.VAR6 = VAR6;
VAR15.VAR7 = VAR7;
(void) FUN4(&VAR20);

VAR9 = FUN5("", &VAR12);
if (!VAR9) {
VAR9 = &VAR21;
VAR13 = 0;
} else
VAR13 = 1; 

for (VAR11 = VAR9->VAR22; VAR11; VAR11 = VAR11->VAR23) {
if (strcmp(VAR11->VAR24, "") == 0)
VAR14 = FUN6(&VAR16, (char *)VAR1, &VAR15);
else if (strcmp(VAR11->VAR24, "") == 0)
VAR14 = FUN7(&VAR16, (char *)VAR1, &VAR15);
else if (strcmp(VAR11->VAR24, "") == 0)
VAR14 = FUN8(&VAR16, (char *)VAR1, &VAR15);
else {
syslog(VAR25,
""
"", VAR11->VAR24);
VAR16 = VAR26;
VAR14 = 0;
}
switch (VAR11->VAR27[VAR16]) {
case VAR28 :
break;
case VAR29 :
if (VAR13)
(void) FUN9(VAR9);
(void) FUN10(&VAR20);
return (VAR14);
default :
syslog(VAR30,
""
"", VAR11->VAR24);
}
}
if (VAR13)
(void) FUN9(VAR9);
(void) FUN10(&VAR20);
return (0);
}