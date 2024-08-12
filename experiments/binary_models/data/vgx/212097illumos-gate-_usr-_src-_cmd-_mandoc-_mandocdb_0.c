static int
FUN1(void)
{
char		 VAR1[VAR2];
VAR3		*VAR4;
VAR5		*VAR6;
struct VAR7	*VAR7;
int		 VAR8;
enum form	 VAR9;
char		*VAR10, *VAR11, *VAR12, *VAR13;
const char	*VAR14;
const char	*argv[2];

argv[0] = "";
argv[1] = NULL;

VAR4 = FUN2((char * const *)argv, VAR15 | VAR16,
VAR17);
if (VAR4 == NULL) {
VAR18 = (int)VAR19;
FUN3("", "");
return 0;
}

VAR10 = VAR11 = NULL;
VAR9 = VAR20;

while ((VAR6 = FUN4(VAR4)) != NULL) {
VAR14 = VAR6->VAR21 + 2;
switch (VAR6->VAR22) {


case VAR23:
if (FUN5(VAR14, VAR1) == NULL) {
if (VAR24)
FUN3(VAR14, "");
continue;
}
if (FUN6(VAR1, VAR25, VAR26) != 0
&& !FUN7(VAR1)
) {
if (VAR24) FUN3("",
"", VAR1);
continue;
}

if (FUN8(VAR14, VAR6->VAR27) == -1) {
if (VAR24)
FUN3(VAR14, "");
continue;
}
if ((VAR6->VAR27->VAR28 & VAR29) != VAR30)
continue;



case VAR31:
if ( ! strcmp(VAR14, VAR32))
continue;
if ( ! VAR33 && VAR6->VAR34 < 2) {
if (VAR24)
FUN3(VAR14, "");
continue;
}
VAR8 = 0;
VAR12 = NULL;
while (VAR12 == NULL) {
VAR12 = strrchr(VAR6->VAR35, '');
if (VAR12 == NULL || strcmp(VAR12+1, ""))
break;
VAR8 = 1;
*VAR12 = '';
VAR12 = NULL;
}
if (VAR12 == NULL) {
if ( ! VAR33) {
if (VAR24)
FUN3(VAR14,
"");
continue;
}
} else if ( ! strcmp(++VAR12, "")) {
if (VAR24)
FUN3(VAR14, "");
continue;
} else if ( ! strcmp(VAR12, "")) {
if (VAR24)
FUN3(VAR14, "");
continue;
} else if ( ! strcmp(VAR12, "")) {
if (VAR24)
FUN3(VAR14, "");
continue;
} else if ( ! VAR33 &&
((VAR9 == VAR36 &&
FUN6(VAR12, VAR10, strlen(VAR10))) ||
(VAR9 == VAR37 && strcmp(VAR12, "")))) {
if (VAR24)
FUN3(VAR14, "");
continue;
} else
VAR12[-1] = '';

VAR7 = FUN9(1, sizeof(struct VAR7));
if (FUN10(VAR7->VAR38, VAR14,
sizeof(VAR7->VAR38)) >=
sizeof(VAR7->VAR38)) {
FUN3(VAR14, "");
free(VAR7);
continue;
}
VAR7->VAR9 = VAR9;
VAR7->VAR10 = VAR10;
VAR7->VAR11 = VAR11;
VAR7->VAR39 = VAR6->VAR35;
VAR7->VAR12 = VAR12;
VAR7->VAR8 = VAR8;
FUN11(VAR7, VAR6->VAR27);
continue;

case VAR40:
case VAR41:
break;

default:
if (VAR24)
FUN3(VAR14, "");
continue;
}

switch (VAR6->VAR34) {
case 0:

break;
case 1:

VAR13 = VAR6->VAR35;
if (VAR6->VAR22 == VAR41) {
VAR9 = VAR20;
VAR10 = NULL;
break;
}

if ( ! FUN6(VAR13, "", 3)) {
VAR9 = VAR36;
VAR10 = VAR13 + 3;
} else if ( ! FUN6(VAR13, "", 3)) {
VAR9 = VAR37;
VAR10 = VAR13 + 3;
} else {
VAR9 = VAR20;
VAR10 = NULL;
}

if (VAR10 != NULL || VAR33)
break;

if (VAR24)
FUN3(VAR14, "");
FUN12(VAR4, VAR6, VAR42);
break;
case 2:

if (VAR6->VAR22 != VAR41 && VAR10 != NULL)
VAR11 = VAR6->VAR35;
else
VAR11 = NULL;
break;
default:
if (VAR6->VAR22 == VAR41 || VAR33)
break;
if (VAR24)
FUN3(VAR14, "");
FUN12(VAR4, VAR6, VAR42);
break;
}
}

FUN13(VAR4);
return 1;
}