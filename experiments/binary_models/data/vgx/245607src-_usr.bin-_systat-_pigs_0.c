int
FUN1(void)
{
static int VAR1[] = { VAR2, VAR3 };
long VAR4[VAR5];
double VAR6;
int VAR7, VAR8;
size_t VAR9;

VAR10 = VAR11 = 0;

if (FUN2()) {
FUN3("");
return 1;
}

if (VAR12 > VAR13) {
int *VAR14;
VAR14 = FUN4(VAR15, VAR12 + 1, sizeof(int));
if (VAR14 == NULL) {
FUN3("");
return 1;
}
VAR15 = VAR14;
VAR13 = VAR12;
}

memset(&VAR16[VAR12], 0, sizeof(*VAR16));

for (VAR7 = 0; VAR7 <= VAR12; VAR7++)
VAR15[VAR7] = VAR7;


VAR9 = sizeof(VAR4);
FUN5(VAR1, 2, &VAR4, &VAR9, NULL, 0);

VAR6 = 0;
for (VAR7 = 0; VAR7 < VAR5; VAR7++)
VAR6 += VAR4[VAR7] - VAR17[VAR7];
if (VAR6 == 0.0)
VAR6 = 1.0;

VAR16[VAR12].VAR18 = (VAR4[VAR19] - VAR17[VAR19]) / VAR6 / FUN6(1);
for (VAR7 = 0; VAR7 < VAR5; VAR7++)
VAR17[VAR7] = VAR4[VAR7];

FUN7(VAR15, VAR12 + 1, sizeof (int), VAR20);

VAR11 = 0;
for (VAR8 = 0; VAR8 < VAR12 + 1; VAR8++) {
int VAR21 = VAR15[VAR8];
if (FUN6(VAR16[VAR21].VAR18) < 0.01)
break;
VAR11++;
}

VAR10 = VAR11;
return 0;
}