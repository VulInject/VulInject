int FUN1(
VAR1 *VAR2,
VAR3 *VAR4,
const char *VAR5)
{
git_strarray VAR6 = {0};
size_t VAR7;
VAR8 *VAR9;
const VAR10 *VAR11;
int VAR12 = 0;
char *VAR13 = NULL;

FUN2(VAR2);
FUN2(VAR4);
FUN2(VAR5);


if (!FUN3(VAR5)) {
FUN4(VAR14, "",
VAR5);
VAR12 = VAR15;
goto VAR16;
}


if ((VAR12 = FUN5(&VAR6, VAR4)) < 0)
goto VAR16;


for (VAR7 = 0; VAR7 < VAR6.VAR17; VAR7++) {
if ((VAR12 = FUN6(&VAR9, VAR4, VAR6.VAR18[VAR7])) < 0)
continue;

VAR11 = FUN7(VAR9, VAR5);
if (VAR11) {

if (!VAR13) {
VAR13 = VAR6.VAR18[VAR7];
} else {
FUN8(VAR9);

FUN4(VAR19,
"", VAR5);
VAR12 = VAR20;
goto VAR16;
}
}

FUN8(VAR9);
}

if (VAR13) {
FUN9(VAR2);
VAR12 = FUN10(VAR2, VAR13);
} else {
FUN4(VAR19,
"", VAR5);
VAR12 = VAR21;
}

VAR16:
if (VAR12 < 0)
FUN11(VAR2);

FUN12(&VAR6);
return VAR12;
}