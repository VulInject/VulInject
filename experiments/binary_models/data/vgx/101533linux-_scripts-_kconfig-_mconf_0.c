static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;
struct VAR4 *VAR5;
struct VAR1 *VAR6;
int VAR7, VAR8, VAR9 = 2;
tristate VAR10;
char VAR11;
bool VAR12;


VAR12 = FUN2(VAR1);
if (VAR13 && !FUN3(VAR1))
return;
else if (!VAR13 && !VAR12)
return;

VAR3 = VAR1->VAR3;
VAR5 = VAR1->VAR14;
if (!VAR3) {
if (VAR5 && VAR1 != VAR15) {
const char *VAR14 = FUN4(VAR1);
switch (VAR5->VAR7) {
case VAR16:
VAR17++;
if (VAR18) {
FUN5("",
VAR1->VAR19 ? "" : "",
VAR20 + 1, '', VAR14);
} else
FUN5("",
VAR20 + 1, '', VAR14,
FUN6(VAR1) ? "" : "");
FUN7('');
FUN8(VAR1);
if (VAR18 && VAR1->VAR19)
goto VAR21;
return;
case VAR22:
if (VAR14) {
VAR17++;
FUN5("", VAR20 + 1, '', VAR14);
FUN7('');
FUN8(VAR1);
}
break;
default:
if (VAR14) {
VAR17++;
FUN5("", VAR20 + 1, '', VAR14);
FUN7('');
FUN8(VAR1);
}
}
} else
VAR9 = 0;
goto VAR21;
}

VAR7 = FUN9(VAR3);
if (FUN10(VAR3)) {
struct VAR2 *VAR23 = FUN11(VAR3);
struct VAR1 *VAR24 = NULL;

VAR17++;
for (VAR6 = VAR1->VAR25; VAR6; VAR6 = VAR6->VAR26) {
if (FUN2(VAR6) && VAR6->VAR3 == VAR23)
VAR24 = VAR6;
}

VAR10 = FUN12(VAR3);
if (FUN13(VAR3)) {
switch (VAR7) {
case VAR27:
FUN5("", VAR10 == VAR28 ? '' : '');
break;
case VAR29:
switch (VAR10) {
case VAR30: VAR11 = ''; break;
case VAR31: VAR11 = ''; break;
default:  VAR11 = ''; break;
}
FUN5("", VAR11);
break;
}
FUN7('');
FUN8(VAR1);
} else {
FUN5("");
FUN7(VAR24 ? '' : '');
FUN8(VAR1);
}

FUN14("", VAR20 + 1, '', FUN4(VAR1));
if (VAR10 == VAR30) {
if (VAR24) {
FUN14("", FUN4(VAR24));
FUN14("");
if (VAR24->VAR25) {
VAR20 += 2;
FUN1(VAR24);
VAR20 -= 2;
}
}
return;
}
} else {
if (VAR1 == VAR15) {
FUN5("", VAR20 + 1, '', FUN4(VAR1));
FUN7('');
FUN8(VAR1);
goto VAR21;
}
VAR17++;
VAR10 = FUN12(VAR3);
if (FUN15(VAR3) && VAR10 == VAR30) {
FUN5("");
FUN7('');
FUN8(VAR1);
} else {
switch (VAR7) {
case VAR27:
if (FUN13(VAR3))
FUN5("", VAR10 == VAR28 ? '' : '');
else
FUN5("", VAR10 == VAR28 ? '' : '');
FUN7('');
FUN8(VAR1);
break;
case VAR29:
switch (VAR10) {
case VAR30: VAR11 = ''; break;
case VAR31: VAR11 = ''; break;
default:  VAR11 = ''; break;
}
if (FUN13(VAR3)) {
if (VAR3->VAR32.VAR33 == VAR31)
FUN5("", VAR11);
else
FUN5("", VAR11);
} else
FUN5("", VAR11);
FUN7('');
FUN8(VAR1);
break;
default:
VAR8 = 2 + strlen(FUN16(VAR3)); 
FUN5("", FUN16(VAR3));
VAR8 = VAR20 - VAR8 + 4;
if (VAR8 < 0)
VAR8 = 0;
FUN14("", VAR8, '', FUN4(VAR1),
(FUN17(VAR3) || !FUN13(VAR3)) ?
"" : "");
FUN7('');
FUN8(VAR1);
goto VAR21;
}
}
FUN14("", VAR20 + 1, '', FUN4(VAR1),
(FUN17(VAR3) || !FUN13(VAR3)) ?
"" : "");
if (VAR1->VAR14->VAR7 == VAR16) {
FUN14("", FUN6(VAR1) ? "" : "");
return;
}
}

VAR21:
VAR20 += VAR9;
for (VAR6 = VAR1->VAR25; VAR6; VAR6 = VAR6->VAR26)
FUN1(VAR6);
VAR20 -= VAR9;
}