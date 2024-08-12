char* FUN1(VAR1 *VAR2, const char *VAR3) {
const char *VAR4;
char *VAR5;
size_t VAR6;
int VAR7;

if (VAR3 == NULL) {
return NULL;
}

VAR6 = 0;
for (VAR4 = VAR3; *VAR4; VAR4++) {
switch (*VAR4) {
case ''':
case '':
case '':
case '':
case 0x0D:
case 0x0A:
VAR6 += 2;
break;
case '':
case '':
VAR6 += 4;
break;
default:
VAR6 += 1;
break;
}
}

VAR7 = 0;
VAR5 = FUN2(VAR2, VAR6 + 1);
for (VAR4 = VAR3; *VAR4; VAR4++) {
switch (*VAR4) {
case ''':
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 2;
break;
case '':
(void)strcpy(&VAR5[VAR7], """);
VAR7 += 2;
break;
case '':
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 2;
break;
case '':
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 2;
break;
case 0x0D:
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 2;
break;
case 0x0A:
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 2;
break;
case '':
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 4;
break;
case '':
(void)strcpy(&VAR5[VAR7], "");
VAR7 += 4;
break;
default:
VAR5[VAR7] = *VAR4;
VAR7 += 1;
break;
}
}
VAR5[VAR7] = '';
return VAR5;
}