static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = (struct VAR3 *)(VAR2->VAR4->VAR5);
const void *VAR6;
const VAR7 *VAR8;
size_t VAR9, VAR10;
uint8_t VAR11[VAR12];
int VAR13;
int VAR14;

if (VAR3->VAR15 || VAR3->VAR16)
return (VAR17);

switch (VAR3->VAR18->VAR19.VAR20) {
case 1: VAR10 = 8;  VAR9 = 16; break;
case 2: VAR10 = 12; VAR9 = 24; break;
case 3: VAR10 = 16; VAR9 = 32; break;
default: goto VAR21;
}
VAR6 = FUN2(VAR2, VAR10 + 2, NULL);
if (VAR6 == NULL)
goto VAR22;

for (VAR13 = 0;; VAR13++) {
const char *VAR23;

VAR23 = FUN3(VAR2);
if (VAR23 == NULL) {
FUN4(&VAR2->VAR24, VAR25,
(VAR13 > 0)?
"":
"");
return (VAR26);
}
memset(VAR11, 0, sizeof(VAR11));
VAR14 = FUN5(VAR23, strlen(VAR23),
VAR6, VAR10, 1000, VAR11, VAR9 * 2 + 2);
if (VAR14 != 0) {
FUN4(&VAR2->VAR24, VAR25,
""
"");
return (VAR26);
}


VAR8 = ((const VAR7 *)VAR6) + VAR10;
if (VAR11[VAR9 * 2] == VAR8[0] &&
VAR11[VAR9 * 2 + 1] == VAR8[1])
break;
if (VAR13 > 10000) {

FUN4(&VAR2->VAR24, VAR25,
"");
return (VAR26);
}
}

VAR14 = FUN6(&VAR3->VAR27, VAR11, VAR9);
if (VAR14 != 0) {
FUN4(&VAR2->VAR24, VAR25,
"");
return (VAR26);
}
VAR14 = FUN7(&VAR3->VAR28, VAR11 + VAR9, VAR9);
if (VAR14 != 0) {
FUN8(&VAR3->VAR27);
FUN4(&VAR2->VAR24, VAR25,
"");
return (VAR26);
}
VAR3->VAR15 = VAR3->VAR16 = 1;
FUN9(VAR2, VAR10 + 2);
VAR3->VAR29 -= VAR10 + 2 + VAR30;
if (0 == (VAR3->VAR18->VAR31 & VAR32)
&& VAR3->VAR29 < 0)
goto VAR21;
VAR3->VAR33 += VAR10 + 2 + VAR30;
VAR3->VAR34 = 0;

VAR3->VAR18->VAR35 = VAR3->VAR18->VAR19.VAR35;
return (FUN10(VAR2));

VAR22:
FUN4(&VAR2->VAR24, VAR36,
"");
return (VAR37);
VAR21:
FUN4(&VAR2->VAR24, VAR36,
"");
return (VAR37);
}