void FUN1(struct VAR1 *VAR2)
{
size_t VAR3 = 0, VAR4 = 0;
struct VAR5 *VAR6;
int VAR7 = 0;

assert(VAR2);
VAR6 = FUN2(VAR2, NULL);
if (!VAR6)
return;
VAR3 = FUN3(VAR6);
if (!VAR3)
return;

if (FUN4(VAR6)) {

size_t VAR8[4], VAR9 = 0, VAR10;
int VAR11;

VAR10 = VAR3;

for (VAR11 = 3; VAR11 >= 0; VAR11--)
VAR8[3 - VAR11] = VAR9 += (VAR10 + VAR11 - VAR9) / (VAR11 + 1);
VAR11 = VAR9 = 0;

do {
char VAR12[VAR13 * VAR14];
size_t VAR15 = VAR13;
const struct VAR16 *VAR17 = FUN5(VAR6, VAR4);
size_t VAR18;

if (FUN6(VAR17)) {
FUN7("", VAR11 ? "" : "",
FUN8(VAR17));
VAR18 = FUN9(FUN10(FUN6(VAR17)),
VAR12, sizeof(VAR12),
&VAR15, VAR19, 0);

if (VAR18 == (VAR20)-1 || VAR18 >= sizeof(VAR12))
FUN7("",
FUN10(FUN6(VAR17)));
else
fputs(VAR12, VAR21);
}

VAR4 = VAR8[VAR11++] + VAR9;
if (VAR11 > 3 || VAR4 >= VAR8[VAR11]) {
VAR11 = 0;
VAR4 = ++VAR9;
}
} while (VAR9 < VAR8[0]);

FUN11('');
} else {

size_t VAR11;

FUN12();
VAR7 = 1;

for (VAR11 = 0; VAR11 < VAR3; VAR11++) {
const struct VAR16 *VAR17 = FUN5(VAR6, VAR11);
FUN7("", VAR11 + 1,
FUN6(VAR17),
FUN13(VAR17));
}

}



if (FUN14(VAR6)) {
const char *VAR22 = NULL, *VAR23 = NULL;
int VAR24 = 0;

fputs(FUN10(""), VAR21);

for (VAR4 = 0; VAR24 == 0 || VAR24 == 2; VAR4++) {

VAR24 = FUN15(VAR6,
VAR4, &VAR23, NULL, &VAR22);
if (VAR24 == 0)
FUN7("", VAR22, VAR23);
}
}

if (VAR7)
FUN16();

}