int FUN1(struct VAR1 *VAR2, const char *VAR3, ...)
{
va_list VAR4;
int VAR5;
int VAR6;
static unsigned int VAR7;
struct tomoyo_query VAR8 = { };
bool VAR9 = false;

FUN2(VAR4, VAR3);
VAR6 = vsnprintf(NULL, 0, VAR3, VAR4) + 1;
FUN3(VAR4);

FUN2(VAR4, VAR3);
FUN4(VAR2, VAR6, VAR3, VAR4);
FUN3(VAR4);

if (VAR2->VAR10)
return 0;
if (VAR2->VAR11)
FUN5(VAR2->VAR11);
switch (VAR2->VAR11) {
case VAR12:
VAR5 = -VAR13;
if (FUN6(&VAR14))
break;
goto VAR15;
case VAR16:
VAR5 = 0;

if (FUN7(VAR2))
break;
VAR17;
default:
return 0;
}

FUN2(VAR4, VAR3);
VAR8.VAR18 = FUN8(VAR2, VAR6, VAR3, VAR4);
FUN3(VAR4);
if (!VAR8.VAR18)
goto VAR15;
VAR8.VAR19 = strlen(VAR8.VAR18) + 1;
if (!VAR5) {
FUN9(VAR2->VAR20, VAR8.VAR18);
goto VAR15;
}
VAR6 = FUN10(VAR8.VAR19);
VAR8.VAR20 = VAR2->VAR20;
FUN11(&VAR21);
if (VAR22[VAR23] &&
VAR24[VAR23] + VAR6
>= VAR22[VAR23]) {
VAR9 = true;
} else {
VAR8.VAR25 = VAR7++;
VAR8.VAR26 = VAR2->VAR26;
VAR24[VAR23] += VAR6;
FUN12(&VAR8.VAR27, &VAR28);
}
FUN13(&VAR21);
if (VAR9)
goto VAR15;

while (VAR8.VAR29 < 10) {
FUN14(&VAR30);
if (VAR31
(VAR32, VAR8.VAR33 ||
!FUN6(&VAR14), VAR34))
break;
VAR8.VAR29++;
}
FUN11(&VAR21);
FUN15(&VAR8.VAR27);
VAR24[VAR23] -= VAR6;
FUN13(&VAR21);
switch (VAR8.VAR33) {
case 3: 
VAR5 = VAR35;
VAR2->VAR26++;
break;
case 1:

VAR5 = 0;
break;
default:

break;
}
VAR15:
FUN16(VAR8.VAR18);
return VAR5;
}