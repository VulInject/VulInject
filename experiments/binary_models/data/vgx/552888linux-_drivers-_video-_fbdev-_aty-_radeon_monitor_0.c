static int FUN1(struct VAR1 *VAR2,
const char *VAR3)
{
char VAR4[5], VAR5[5];
int VAR6 = 0, VAR7 = 0;
const char *VAR8;

if (!VAR3)
return 0;

VAR8 = VAR3;
do {
switch(*VAR8) {
case '':
VAR4[VAR6] = '';
VAR6 = 0;
VAR7 = 1;
break;
case '':
case '':
break;
default:
if (VAR6 > 4)
break;
if (VAR7)
VAR5[VAR6] = *VAR8;
else
VAR4[VAR6] = *VAR8;
VAR6++;
}

if (VAR6 > 4)
VAR6 = 4;

} while (*VAR8++);
if (VAR7)
VAR5[VAR6] = 0;
else {
VAR4[VAR6] = 0;
VAR5[0] = 0;
}
if (strcmp(VAR4, "") == 0)
VAR2->VAR9 = VAR10;
else if (strcmp(VAR4, "") == 0)
VAR2->VAR9 = VAR11;
else if (strcmp(VAR4, "") == 0)
VAR2->VAR9 = VAR12;

if (strcmp(VAR5, "") == 0)
VAR2->VAR13 = VAR10;
else if (strcmp(VAR5, "") == 0)
VAR2->VAR13 = VAR11;
else if (strcmp(VAR5, "") == 0)
VAR2->VAR13 = VAR12;

return 1;
}