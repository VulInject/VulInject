bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6)
{
if (VAR4->VAR7[VAR8] == NULL) {
FUN2("");
return false;
}

FUN2("");
if (!FUN3(VAR9, VAR2->VAR10.VAR11->VAR12)) {
FUN2("");
return false;
}

ip_address VAR13;
err_t VAR14 = FUN4(&VAR4->VAR7[VAR8]->VAR15,
VAR2->VAR10.VAR11->VAR16->VAR17.VAR18,
NULL,
&VAR13,
VAR2->VAR10.VAR19);
if (VAR14 != NULL) {
FUN2("", VAR14);
return false;
}




VAR2->VAR10.VAR11->VAR20.VAR13 = VAR13;
FUN5("", VAR2->VAR10.VAR21,
VAR22, NULL);
*VAR6 = VAR23;
return true;
}