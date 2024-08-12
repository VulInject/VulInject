static VAR1 * FUN1(VAR2 *VAR3,
VAR4 *VAR5,
const VAR6 *VAR7,
const VAR8 *VAR9,
const VAR8 **VAR10)
{
if (VAR5->VAR11->VAR12 != NULL) {
return (*VAR5->VAR11->VAR12)(VAR5, VAR7,
VAR9, VAR10);
}

*VAR10 = NULL;


while (VAR9 != NULL) {
VAR1 *VAR13;
VAR14 *VAR15;
VAR8 *VAR16;


if ((VAR13 = (*VAR5->VAR11->VAR17)(VAR5, VAR9, VAR7,
1, &VAR15)) != NULL) {

return VAR13;
}


if (VAR15 == NULL) {
return FUN2(VAR3, VAR18, 0, 0,
""
"");
}

if (VAR15->VAR19 == VAR20) {


*VAR10 = VAR9;
return NULL;
}


if ((VAR13 = (*VAR9->VAR11->VAR21)(VAR9,
&VAR16)) != NULL) {

return VAR13;
}
VAR9 = VAR16;
}

return FUN2(VAR3, VAR22, 0, 0,
""
""
"");
}