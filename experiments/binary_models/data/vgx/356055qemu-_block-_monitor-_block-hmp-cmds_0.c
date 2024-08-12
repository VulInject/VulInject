void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
VAR5 *VAR6, *VAR7;
VAR8 *VAR9, *VAR10;
const char *VAR11 = FUN2(VAR4, "");
bool VAR12 = FUN3(VAR4, "", false);
bool VAR13 = FUN3(VAR4, "", false);
bool VAR14 = false;


if (!VAR13) {
VAR6 = FUN4(NULL);
} else {
VAR6 = NULL;
}

for (VAR7 = VAR6; VAR7; VAR7 = VAR7->VAR15) {
if (VAR11 && strcmp(VAR11, VAR7->VAR16->VAR11)) {
continue;
}

if (VAR7 != VAR6) {
FUN5(VAR2, "");
}

FUN6(VAR2, VAR7->VAR16, VAR7->VAR16->VAR17
? VAR7->VAR16->VAR18 : NULL,
VAR12);
VAR14 = true;
}

FUN7(VAR6);

if ((!VAR11 && !VAR13) || VAR14) {
return;
}


VAR9 = FUN8(false, false, NULL);
for (VAR10 = VAR9; VAR10; VAR10 = VAR10->VAR15) {
assert(VAR10->VAR16->VAR19);
if (VAR11 && strcmp(VAR11, VAR10->VAR16->VAR20)) {
continue;
}

if (VAR10 != VAR9) {
FUN5(VAR2, "");
}

FUN6(VAR2, NULL, VAR10->VAR16, VAR12);
}
FUN9(VAR9);
}