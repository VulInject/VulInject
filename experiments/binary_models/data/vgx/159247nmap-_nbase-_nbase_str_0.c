char *FUN1(const char *VAR1)
{
const char *VAR2;
char *VAR3;
unsigned int VAR4 = 0, VAR5 = 1;

VAR3 = (char *) FUN2(VAR5);
VAR3 = FUN3(VAR3, '', &VAR4, &VAR5);

for (VAR2 = VAR1; *VAR2 != ''; VAR2++) {
unsigned int VAR6;
unsigned int VAR7;

VAR6 = 0;
for (; *VAR2 == ''; VAR2++)
VAR6++;

if (*VAR2 == '') {

for (VAR7 = 0; VAR7 < VAR6*2; VAR7++)
VAR3 = FUN3(VAR3, '', &VAR4, &VAR5);
break;
} else if (*VAR2 == '') {

for (VAR7 = 0; VAR7 < VAR6*2 + 1; VAR7++)
VAR3 = FUN3(VAR3, '', &VAR4, &VAR5);
VAR3[VAR4++] = *VAR2;
} else {

for (VAR7 = 0; VAR7 < VAR6; VAR7++)
VAR3 = FUN3(VAR3, '', &VAR4, &VAR5);
VAR3 = FUN3(VAR3, *VAR2, &VAR4, &VAR5);
}
}

VAR3 = FUN3(VAR3, '', &VAR4, &VAR5);
VAR3 = FUN3(VAR3, '', &VAR4, &VAR5);

return VAR3;
}