static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
char VAR5[VAR6 * 2];
struct VAR7 *VAR8;
unsigned int VAR9;
int VAR10;


VAR8 = FUN2(VAR2->VAR11->VAR12->VAR13,
VAR2->VAR14, 0);
if (!VAR8) {

FUN3(3, VAR2, "");
return 0;
}

VAR4->VAR15 = VAR16;
VAR10 = FUN4(FUN5(VAR8), VAR4);
if (VAR10 < 0) {
FUN6(VAR2, "");
goto VAR17;
}

for (VAR9 = 0; VAR9 < VAR4->VAR18.VAR19.VAR20; VAR9++) {
unsigned int VAR21 = VAR4->VAR18.VAR19.VAR5[VAR9];

if (VAR21 > 4) {
FUN6(VAR2, "",
VAR21, VAR9);
VAR10 = -VAR22;
goto VAR17;
}

VAR5[VAR9*2] = '' + VAR21;
VAR5[VAR9*2+1] = '';
}

VAR5[VAR9*2-1] = '';

FUN3(3, VAR2,
"",
VAR4->VAR18.VAR19.VAR23, VAR5,
VAR4->VAR18.VAR19.VAR24);


VAR2->VAR25 = FUN7(VAR8);
VAR2->VAR26 = FUN8(VAR2->VAR25);
if (!VAR2->VAR26) {
FUN3(3, VAR2, "");
FUN9(VAR2->VAR25);
VAR10 = -VAR22;
goto VAR17;
}

FUN3(1, VAR2, "", VAR2->VAR26);

VAR17:
FUN9(VAR8);
return VAR10;
}