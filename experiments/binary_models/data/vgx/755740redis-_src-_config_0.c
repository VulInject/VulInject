static int FUN1(VAR1 *VAR2, int VAR3, const char **VAR4) {
int VAR5;
int class;
unsigned long long VAR6, VAR7;
int VAR8, VAR9;
int VAR10;
char *VAR11;
clientBufferLimitsConfig VAR12[VAR13];
int VAR14[VAR13] = {0};


if (VAR3 % 4) {
if (VAR4) *VAR4 = ""
"";
return 0;
}


for (VAR5 = 0; VAR5 < VAR3; VAR5 += 4) {
class = FUN2(VAR2[VAR5]);
if (class == -1 || class == VAR15) {
if (VAR4) *VAR4 = ""
"";
return 0;
}

VAR6 = FUN3(VAR2[VAR5+1], &VAR8);
VAR7 = FUN3(VAR2[VAR5+2], &VAR9);
VAR10 = FUN4(VAR2[VAR5+3], &VAR11, 10);
if (VAR8 || VAR9 ||
VAR10 < 0 || *VAR11 != '')
{
if (VAR4) *VAR4 = ""
"";
return 0;
}

VAR12[class].VAR16 = VAR6;
VAR12[class].VAR17 = VAR7;
VAR12[class].VAR18 = VAR10;
VAR14[class] = 1;
}


for (VAR5 = 0; VAR5 < VAR13; VAR5++) {
if (VAR14[VAR5]) VAR19.VAR20[VAR5] = VAR12[VAR5];
}

return 1;
}