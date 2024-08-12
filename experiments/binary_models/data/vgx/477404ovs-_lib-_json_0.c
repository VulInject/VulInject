VAR1
FUN1(struct VAR2 *VAR3, const char *VAR4, size_t VAR5)
{
size_t VAR6 = 0;
size_t VAR7;

for (VAR7 = 0; !VAR3->VAR8 && VAR7 < VAR5; ) {
bool VAR9 = true;

const char *VAR10 = &VAR4[VAR6];
unsigned char VAR11 = VAR4[VAR7];
struct json_token VAR12;

switch (VAR3->VAR13) {
case VAR14:
switch (VAR11) {
case '': case '': case '': case '':

VAR6 = VAR7 + 1;
break;

case '': case '': case '': case '': case '':
case '': case '': case '': case '': case '':
case '': case '': case '': case '': case '':
case '': case '': case '': case '': case '':
case '': case '': case '': case '': case '':
case '':
VAR3->VAR13 = VAR15;
VAR6 = VAR7;
break;

case '': case '': case '': case '': case '': case '':
VAR12.VAR16 = VAR11;
FUN2(VAR3, &VAR12);
VAR6 = VAR7 + 1;
break;

case '':
case '': case '': case '': case '': case '':
case '': case '': case '': case '': case '':
VAR3->VAR13 = VAR17;
VAR6 = VAR7;
break;

case '':
VAR3->VAR13 = VAR18;
VAR6 = VAR7 + 1;
break;

default:
if (FUN3(VAR11)) {
FUN4(VAR3, "", VAR11);
} else {
FUN4(VAR3, "", VAR11);
}
break;
}
break;

case VAR15:
if (!FUN5((unsigned char) VAR11)) {
FUN6(&VAR3->VAR19, VAR10, VAR7 - VAR6);
FUN7(VAR3);
VAR9 = false;
break;
}
break;

case VAR17:
if (!strchr("", VAR11)) {
FUN6(&VAR3->VAR19, VAR10, VAR7 - VAR6);
FUN8(VAR3);
VAR9 = false;
break;
}
break;

case VAR18:
if (VAR11 == '') {
VAR3->VAR13 = VAR20;
} else if (VAR11 == '') {
FUN6(&VAR3->VAR19, VAR10, VAR7 - VAR6);
FUN9(VAR3);
} else if (VAR11 < 0x20) {
FUN4(VAR3, "", VAR11);
}
break;

case VAR20:
VAR3->VAR13 = VAR18;
break;

default:
FUN10(0, "");
}

if (VAR9) {
FUN11(VAR3, VAR11);
VAR7++;
}
}

if (!VAR3->VAR8) {
FUN6(&VAR3->VAR19, &VAR4[VAR6], VAR7 - VAR6);
}
return VAR7;
}