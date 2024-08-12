static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5) {
const VAR3 *VAR6;
size_t VAR7 = 1;


if (*VAR4 != 0x00 && *VAR4 != 0xff) {
for (VAR6 = &VAR4[1]; VAR6 < VAR4 + VAR5 && *VAR6 == *VAR4; VAR6++) {
VAR7++;
}
}
const char *VAR8 = "";
switch (*VAR4) {
case '':
VAR8 = "";
break;
case '':
VAR8 = "";
break;
case '':
VAR8 = (VAR7 > 1)? "": "";
break;
case '':
VAR8 = (VAR7 > 1)? "": "";
break;
case '':
VAR8 = (VAR7 > 1)? "": "";
break;
case '':
VAR8 = (VAR7 > 1)? "": "";
break;
case '':
VAR8 = "";
break;
case '':
VAR8 = "";
break;
case 0xff:
case 0x00:
VAR8 = "";
break;
default:
VAR8 = "";
break;
}

char VAR9[256];
if (VAR7 > 1) {

const char *VAR10 = strchr (VAR8, '')? "": "";
snprintf (VAR9, sizeof (VAR9), VAR10, VAR8, VAR7);
VAR8 = VAR9;
}
VAR2->VAR11 = strdup (VAR8);
VAR2->VAR12 = VAR7;
return VAR7;
}