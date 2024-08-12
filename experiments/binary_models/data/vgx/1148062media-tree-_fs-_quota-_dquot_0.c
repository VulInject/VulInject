static int FUN1(struct VAR1 *VAR1, int VAR2)
{
int VAR3, VAR4 = 0;
struct VAR5 **VAR6, *VAR7[VAR8] = {};
struct VAR9 *VAR10 = VAR1->VAR11;
qsize_t VAR12;
int VAR13 = 0;

if (!FUN2(VAR1))
return 0;

VAR6 = FUN3(VAR1);


for (VAR3 = 0; VAR3 < VAR8; VAR3++) {
struct kqid VAR14;
kprojid_t VAR15;
int VAR16;
struct VAR5 *VAR5;

if (VAR2 != -1 && VAR3 != VAR2)
continue;

if (VAR6[VAR3])
continue;

if (!FUN4(VAR10, VAR3))
continue;

VAR4 = 1;

switch (VAR3) {
case VAR17:
VAR14 = FUN5(VAR1->VAR18);
break;
case VAR19:
VAR14 = FUN6(VAR1->VAR20);
break;
case VAR21:
VAR16 = VAR1->VAR11->VAR22->FUN7(VAR1, &VAR15);
if (VAR16)
continue;
VAR14 = FUN8(VAR15);
break;
}
VAR5 = FUN9(VAR10, VAR14);
if (FUN10(VAR5)) {

if (FUN11(VAR5) != -VAR23) {
VAR13 = FUN11(VAR5);
goto VAR24;
}
VAR5 = NULL;
}
VAR7[VAR3] = VAR5;
}


if (!VAR4)
return 0;

FUN12(&VAR25);
if (FUN13(VAR1))
goto VAR26;
for (VAR3 = 0; VAR3 < VAR8; VAR3++) {
if (VAR2 != -1 && VAR3 != VAR2)
continue;

if (!FUN4(VAR10, VAR3))
continue;

if (!VAR7[VAR3])
continue;
if (!VAR6[VAR3]) {
VAR6[VAR3] = VAR7[VAR3];
VAR7[VAR3] = NULL;

VAR12 = FUN14(VAR1);
if (FUN15(VAR12))
FUN16(VAR6[VAR3], VAR12);
}
}
VAR26:
FUN17(&VAR25);
VAR24:

FUN18(VAR7);

return VAR13;
}