int
FUN1(VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = NULL;
enum __nsw_parse_err VAR6;
struct VAR7 *VAR8;
struct VAR7 *VAR9;
struct VAR7 *VAR10;
struct VAR7 *VAR11;
int VAR12 = VAR13;

if (VAR2 != VAR14) {
VAR12 = FUN2(VAR2->VAR15);
return (VAR12);
}

VAR5 = FUN3("", &VAR6);
if (VAR5 == NULL) {

syslog(VAR16, ""
"");
VAR12 = VAR17 | VAR18;
return (VAR12);
}

VAR8 = VAR5->VAR19;


if (VAR5->VAR20 == 1) {


if (strcmp(VAR8->VAR21, "") == 0) {
VAR12 = FUN2(VAR8->VAR21);
} else if (strcmp(VAR8->VAR21, "") == 0) {
if (VAR3 == VAR22)
VAR12 = VAR23 | FUN4();
else
VAR12 = FUN2(VAR8->VAR21);
} else
VAR12 = VAR23;

} else if (VAR5->VAR20 == 2) {
VAR9 = VAR8->VAR24;
if (strcmp(VAR8->VAR21, "") == 0) {
VAR12 = VAR17;
if (strcmp(VAR9->VAR21, "") == 0)
VAR12 |= VAR25;
else if (strcmp(VAR9->VAR21, "") == 0)
VAR12 |= VAR18;
else if (strcmp(VAR9->VAR21, "") != 0)
VAR12 = VAR23;

} else {
VAR12 = VAR23;
}
} else if (VAR5->VAR20 == 3) {

VAR9 = VAR8->VAR24;
VAR10 = VAR9->VAR24;
if (strcmp(VAR9->VAR21, "") == 0)
VAR11 = VAR10;
else if (strcmp(VAR10->VAR21, "") == 0)
VAR11 = VAR9;
else
VAR11 = NULL;
if (strcmp(VAR8->VAR21, "") == 0 &&
VAR11 != NULL) {
VAR12 = VAR17;
if (strcmp(VAR11->VAR21, "") == 0)
VAR12 |= VAR25;
else if (strcmp(VAR11->VAR21, "") == 0)
VAR12 |= VAR18;
else
VAR12 = VAR23;
} else {
VAR12 = VAR23;
}
} else {
VAR12 = VAR23;
}

(void) FUN5(VAR5);
return (VAR12);
}