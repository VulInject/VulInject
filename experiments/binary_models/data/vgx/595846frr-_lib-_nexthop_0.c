static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const void *VAR6)
{
const struct VAR7 *VAR7 = VAR6;
bool VAR8 = false;
const char *VAR9 = "", *VAR10 = "", *VAR11 = "";
ssize_t VAR12 = 0;

switch (*VAR5->VAR13) {
case '':
VAR5->VAR13++;
if (*VAR5->VAR13 == '') {
VAR9 = "";
VAR10 = "";
VAR11 = "";
VAR5->VAR13++;
}

if (!VAR7)
return FUN2(VAR3, "");

switch (VAR7->VAR14) {
case VAR15:
case VAR16:
VAR12 += FUN3(VAR3, "", VAR10,
&VAR7->VAR17.VAR18);
VAR8 = true;
break;
case VAR19:
case VAR20:
VAR12 += FUN3(VAR3, "", VAR10,
&VAR7->VAR17.VAR21);
VAR8 = true;
break;
case VAR22:
VAR12 += FUN3(VAR3, "", VAR9,
FUN4(VAR7->VAR23,
VAR7->VAR24));
break;
case VAR25:
VAR12 += FUN2(VAR3, "");

switch (VAR7->VAR26) {
case VAR27:
VAR12 += FUN2(VAR3, "");
break;
case VAR28:
VAR12 += FUN2(VAR3, "");
break;
case VAR29:
VAR12 += FUN2(VAR3, "");
break;
case VAR30:
break;
}
break;
}
if (VAR8 && VAR7->VAR23)
VAR12 += FUN3(VAR3, "", VAR11,
FUN4(VAR7->VAR23,
VAR7->VAR24));

return VAR12;
case '':
VAR5->VAR13++;

VAR12 += FUN5(VAR3, VAR7);
return VAR12;
case '':
VAR5->VAR13++;
if (*VAR5->VAR13 == '') {
VAR5->VAR13++;
if (!VAR7)
return FUN2(VAR3, "");
switch (VAR7->VAR14) {
case VAR15:
case VAR16:
VAR12 += FUN3(VAR3, "",
&VAR7->VAR17.VAR18);
break;
case VAR19:
case VAR20:
VAR12 += FUN3(VAR3, "",
&VAR7->VAR17.VAR21);
break;
case VAR22:
case VAR25:
break;
}
} else if (*VAR5->VAR13 == '') {
VAR5->VAR13++;
if (!VAR7)
return FUN2(VAR3, "");
switch (VAR7->VAR14) {
case VAR22:
VAR12 += FUN3(
VAR3, "",
FUN4(VAR7->VAR23,
VAR7->VAR24));
break;
case VAR15:
case VAR16:
case VAR19:
case VAR20:
if (VAR7->VAR23)
VAR12 += FUN3(
VAR3, "",
FUN4(
VAR7->VAR23,
VAR7->VAR24));
break;
case VAR25:
break;
}
}
return VAR12;
}
return -1;
}