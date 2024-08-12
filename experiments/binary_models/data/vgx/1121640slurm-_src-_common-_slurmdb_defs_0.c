extern char *FUN1(
char *VAR1, List VAR2, int VAR3,
uint32_t VAR4, uint32_t VAR5, char *VAR6)
{
char *VAR7 = NULL;
char *VAR8 = VAR1;
int VAR9;
uint64_t VAR10;
VAR11 *VAR12;
char *VAR13 = NULL;
List VAR14 = NULL;

if (!VAR2 || !VAR8 || !VAR8[0]
|| VAR8[0] < '' || VAR8[0] > '')
return VAR7;

while (VAR8) {
VAR9 = FUN2(VAR8);
if (VAR9 <= 0) {
FUN3(""
"", VAR8);
goto VAR15;
}

if (!(VAR12 = FUN4(
VAR2, VAR16,
&VAR9))) {
FUN5("", VAR9);
goto VAR15;
}

if (!(VAR8 = strchr(VAR8, ''))) {
FUN3(""
"");
break;
}
VAR10 = FUN6(++VAR8);

if (VAR10 == VAR17)
goto VAR15;

if (VAR7)
FUN7(VAR7, "");
if (!VAR12->VAR18)
FUN8(VAR7, "", VAR12->VAR9);

else
FUN8(VAR7, "",
VAR12->VAR18,
VAR12->VAR19 ? "" : "",
VAR12->VAR19 ? VAR12->VAR19 : "");
if (VAR10 != VAR20) {
if (VAR6) {
VAR13 = FUN9(VAR10, VAR6);
FUN8(VAR7, "", VAR13);
FUN10(VAR13);
} else if (VAR5 & VAR21) {

char VAR22[VAR23];
if (VAR12->VAR9 == VAR24) {
VAR10 /= VAR25;
FUN11((VAR26)VAR10, VAR22,
VAR23);
} else
FUN12((double)VAR10, VAR22,
sizeof(VAR22),
VAR27,
VAR3,
VAR4);
FUN8(VAR7, "", VAR22);
} else if ((VAR12->VAR9 == VAR28) ||
!FUN13(VAR12->VAR19, "") ||
!FUN13(VAR12->VAR18, "")) {
char VAR22[VAR23];
FUN12((double)VAR10, VAR22,
sizeof(VAR22), VAR29,
VAR3, VAR4);
FUN8(VAR7, "", VAR22);
} else {
FUN8(VAR7, ""VAR30, VAR10);
}
} else
FUN8(VAR7, "");

if (!(VAR5 & VAR31)) {
if (!VAR14)
VAR14 = FUN14(VAR32);
FUN15(VAR14, VAR7);
VAR7 = NULL;
}
VAR15:
if (!(VAR8 = strchr(VAR8, '')))
break;
VAR8++;
}

if (VAR14) {
VAR7 = FUN16(VAR14);
FUN17(VAR14);
}

return VAR7;
}