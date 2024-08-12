int
FUN1(struct VAR1 *VAR1)
{
enum { VAR2 = 0, VAR3, VAR4,
VAR5, VAR6 };

const struct VAR7 *VAR8, *VAR9 = NULL, *VAR10 = NULL;
const char *VAR11, *VAR12 = "";
size_t VAR13;
int VAR14 = '';
int VAR15 = 0;

VAR1->VAR16 = NULL;


if (VAR1->VAR17 == VAR2) {

++VAR1->argv;
--VAR1->argc;
if (*VAR1->argv == NULL)
return (-1);

VAR1->VAR17 = VAR4;
}


if (VAR1->VAR17 == VAR4) {

if (VAR1->argv[0] == NULL)
return (-1);

if (VAR1->argv[0][0] != '')
return (-1);

if (strcmp(VAR1->argv[0], "") == 0) {
++VAR1->argv;
--VAR1->argc;
return (-1);
}

VAR1->VAR18 = *VAR1->argv++;
--VAR1->argc;
if (VAR1->VAR18[1] == '') {

VAR1->VAR17 = VAR6;
VAR1->VAR18 += 2; 
} else {

VAR1->VAR17 = VAR5;
++VAR1->VAR18;  
}
}


if (VAR1->VAR17 == VAR5) {

VAR14 = *VAR1->VAR18++;
if (VAR14 == '') {

VAR1->VAR17 = VAR4;
return FUN1(VAR1);
}


VAR11 = strchr(VAR19, VAR14);
if (VAR11 == NULL)
return ('');
if (VAR11[1] == '')
VAR15 = 1;


if (VAR15) {

if (VAR1->VAR18[0] == '') {

VAR1->VAR18 = *VAR1->argv;
if (VAR1->VAR18 == NULL) {
FUN2(0,
"",
VAR14);
return ('');
}
++VAR1->argv;
--VAR1->argc;
}
if (VAR14 == '') {
VAR1->VAR17 = VAR6;
VAR12 = ""; 
} else {
VAR1->VAR17 = VAR4;
VAR1->VAR16 = VAR1->VAR18;
}
}
}


if (VAR1->VAR17 == VAR6) {

VAR1->VAR17 = VAR4;


VAR11 = strchr(VAR1->VAR18, '');
if (VAR11 != NULL) {
VAR13 = (VAR20)(VAR11 - VAR1->VAR18);
VAR1->VAR16 = (char *)(VAR21)(VAR11 + 1);
} else {
VAR13 = strlen(VAR1->VAR18);
}


for (VAR8 = VAR22; VAR8->VAR23 != NULL; VAR8++) {

if (VAR8->VAR23[0] != VAR1->VAR18[0])
continue;

if (FUN3(VAR1->VAR18, VAR8->VAR23, VAR13) == 0) {
VAR10 = VAR9; 
VAR9 = VAR8;

if (strlen(VAR8->VAR23) == VAR13) {
VAR10 = NULL; 
break;
}
}
}


if (VAR9 == NULL) {
FUN2(0,
"",
VAR12, VAR1->VAR18);
return ('');
}
if (VAR10 != NULL) {
FUN2(0,
"",
VAR12, VAR1->VAR18, VAR9->VAR23, VAR10->VAR23);
return ('');
}


if (VAR9->VAR15) {

if (VAR1->VAR16 == NULL) {
VAR1->VAR16 = *VAR1->argv;
if (VAR1->VAR16 == NULL) {
FUN2(0,
"",
VAR12, VAR9->VAR23);
return ('');
}
++VAR1->argv;
--VAR1->argc;
}
} else {

if (VAR1->VAR16 != NULL) {
FUN2(0,
"",
VAR12, VAR9->VAR23);
return ('');
}
}
return (VAR9->VAR24);
}

return (VAR14);
}