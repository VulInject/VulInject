VAR1 *
FUN1(const char *VAR2)
{
size_t VAR3, VAR4;
VAR1 *VAR5;
const char *VAR6 = VAR2;

VAR5 = FUN2(VAR1, 1);

VAR3 = strspn(VAR6, VAR7);

if (VAR6[VAR3] == '') {

VAR5->VAR8 = FUN3(VAR6, VAR3);
VAR5->VAR9 = VAR10;
VAR5->VAR11.VAR12 = 0;
return VAR5;
}

if (VAR6[VAR3] == '') {
char *VAR13;
unsigned int VAR14;
bool VAR15 = false;

VAR4 = VAR3;

VAR5->VAR8 = FUN3(VAR6, VAR4);

VAR6 += VAR3 + 1;
FUN4(&VAR6);

if (*VAR6 == '') {

VAR5->VAR9 = VAR10;
VAR6++;
} else {

VAR5->VAR9 = VAR16;
}

if (FUN5(VAR6, &VAR13, 10, &VAR14) < 0)
VAR15 = true;
if (!VAR15) {
VAR6 = VAR13;
FUN4(&VAR6);
if (*VAR6 != '')
VAR15 = true;
}
if (VAR15) {
if (VAR5->VAR9 == VAR16)
FUN6(VAR17, "",
FUN7(""));
else
FUN6(VAR17, "",
FUN7(""));
goto VAR18;
}

switch (VAR5->VAR9) {
case VAR16:
VAR5->VAR11.VAR19.VAR3 = VAR14;
VAR5->VAR11.VAR19.VAR20 = ~0;
break;
case VAR10:
if (VAR14 > VAR21) {
FUN6(VAR17,
FUN7(""
""), VAR21);
goto VAR18;
}
VAR5->VAR11.VAR12 = VAR14;
break;
case VAR22:
goto VAR18;
}

return VAR5;
} else {
FUN6(VAR17, "",
FUN7(""));
}

VAR18:
FUN8(VAR5);

return NULL;
}