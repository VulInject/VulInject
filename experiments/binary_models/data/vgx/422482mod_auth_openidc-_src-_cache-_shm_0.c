int FUN1(VAR1 *VAR2) {
VAR3 *VAR4 = (VAR3 *) FUN2(VAR2->VAR5,
&VAR6);

if (VAR4->VAR7 != NULL)
return VAR8;
VAR9 *VAR10 = FUN3(VAR2->VAR11->VAR12);
VAR4->VAR7 = VAR10;


apr_status_t VAR13 = FUN4(&VAR10->VAR14,
(VAR15) VAR4->VAR16
* VAR4->VAR17,
NULL, VAR2->VAR11->VAR12);
if (VAR13 != VAR8) {
FUN5(VAR2, "");
return VAR18;
}


int VAR19;
VAR20 *VAR21 = FUN6(VAR10->VAR14);
for (VAR19 = 0; VAR19 < VAR4->VAR17;
VAR19++, FUN7(VAR21, VAR4->VAR16)) {
VAR21->VAR22[0] = '';
VAR21->VAR23 = 0;
}

if (FUN8(VAR2, VAR10->mutex, "") == VAR24)
return VAR18;

FUN9(VAR2,
"",
VAR4->VAR17, VAR4->VAR16);

FUN10(VAR2, VAR25, "", VAR10, VAR10 ? VAR10->VAR14 : 0, VAR2, VAR10 ? VAR10->VAR26 : -1);

return VAR27;
}