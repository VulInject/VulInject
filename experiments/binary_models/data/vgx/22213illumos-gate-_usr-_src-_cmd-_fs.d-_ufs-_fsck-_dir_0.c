static int
FUN1(fsck_ino_t VAR1, char *VAR2)
{
struct VAR3 *VAR4, *VAR5[2];
daddr32_t VAR6, VAR7;
daddr32_t VAR8[2];
struct VAR9 *VAR10;
char *VAR11;
int VAR12, VAR13;
int VAR14;
int VAR15;
int VAR16;
int VAR17 = 0;
int VAR18 = 0;
int VAR19 = 0;

VAR5[0] = VAR5[1] = NULL;

VAR10 = FUN2(VAR1);
if (VAR10->VAR20 == 0) {
goto VAR21;
}

VAR7 = FUN3(&VAR22, VAR10->VAR20 - 1) + 1;


for (VAR12 = 0; ((VAR7 > 0) && (VAR12 < VAR7) && (VAR12 < VAR23)); VAR12++) {
if (VAR10->VAR24[VAR12] == 0) {
goto VAR21;
}
}


VAR15 = 0;
VAR6 = -1;
VAR14 = 0;

if (VAR7 <= VAR23)  {

VAR17 = VAR10->VAR20 % VAR22.VAR25;
}

if (VAR7 >= VAR23 && !VAR17) {
VAR14 = VAR22.VAR25 / sizeof (VAR26);
VAR6 = VAR7 - VAR23;

if (VAR6 >= VAR14) {
goto VAR21;
}

if (VAR6 == 0)
VAR15++;
}


if ((VAR8[0] = FUN4(VAR22.VAR27)) == 0) {
goto VAR21;
}
VAR18++;
if (VAR15) {
if ((VAR8[1] = FUN4(VAR22.VAR27)) == 0) {
goto VAR21;
}
VAR18++;
}


VAR5[0] = FUN5(VAR8[0], (VAR28)VAR22.VAR25);
if (VAR5[0]->VAR29) {
goto VAR21;
}

if (VAR17) {

VAR4 = FUN5(VAR10->VAR24[VAR7 - 1],
(VAR28)FUN6(&VAR22, VAR10, VAR7 - 1));
if (!VAR4->VAR29) {
(void) memmove(VAR5[0]->VAR30.VAR31, VAR4->VAR30.VAR31,
(VAR28)VAR17);
}
}


for (VAR11 = &(VAR5[0]->VAR30.VAR31[VAR17]);
VAR11 < &(VAR5[0]->VAR30.VAR31[VAR22.VAR25]);
VAR11 += VAR32) {
(void) memmove(VAR11, (char *)&VAR33,
sizeof (VAR33));
}
FUN7(VAR5[0]);


if (VAR15) {
VAR5[1] = FUN8(VAR8[1], (VAR28)VAR22.VAR25);
if (VAR5[1]->VAR29) {
goto VAR21;
}
(void) memset(VAR5[1]->VAR30.VAR31, 0, VAR22.VAR25);
FUN7(VAR5[1]);
} else if (VAR6 >= 0) {

if (VAR10->VAR34[0] == 0) {
goto VAR21;
}
VAR5[1] = FUN8(VAR10->VAR34[0], (VAR28)VAR22.VAR25);
if (VAR5[1]->VAR29) {
goto VAR21;
}

for (VAR12 = 0; ((VAR12 < VAR6) && (VAR12 < VAR14)); VAR12++) {

if (((VAR26 *)VAR5[1]->VAR30.VAR31)[VAR12] == 0) {
goto VAR21;
}
}
}


FUN9("", VAR2);
if (!VAR35 && (FUN10("") == 0))
goto VAR21;



if (VAR17) {

VAR16 = FUN11(VAR17, VAR22.VAR36);
FUN12(VAR1, VAR10->VAR24[VAR7 - 1],
VAR16 / VAR22.VAR36);
VAR16 = FUN13(VAR16);
VAR10->VAR20 -= (VAR37)VAR17;
VAR10->VAR38 = VAR10->VAR38 - VAR16;
VAR10->VAR24[VAR7 - 1] = VAR8[0];
VAR10->VAR20 += (VAR37)VAR22.VAR25;
VAR10->VAR38 += FUN13(VAR22.VAR25);
FUN14();
VAR19 = 1;
goto VAR39;
}


VAR10->VAR20 += (VAR37)VAR22.VAR25;
VAR10->VAR38 += FUN13(VAR22.VAR25);
if (VAR15) {
VAR10->VAR38 += FUN13(VAR22.VAR25);
}

FUN14();
if (VAR6 < 0) {

VAR10->VAR24[VAR7] = VAR8[0];
} else {

if (VAR15)
VAR10->VAR34[0] = VAR8[1];

((VAR26 *)VAR5[1]->VAR30.VAR31)[VAR6] = VAR8[0];
FUN7(VAR5[1]);
}

if (VAR35)
(void) FUN15("");

VAR19 = 1;
goto VAR39;

VAR21:
for (VAR13 = 0; VAR13 < VAR18; VAR13++)
FUN12(VAR1, VAR8[VAR13], VAR22.VAR27);
VAR39:

if (VAR5[1] != NULL)
FUN16(VAR5[1]);

return (VAR19);
}