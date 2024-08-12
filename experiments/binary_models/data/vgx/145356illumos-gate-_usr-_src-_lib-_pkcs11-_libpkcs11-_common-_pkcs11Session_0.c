VAR1
FUN1(CK_SLOT_ID VAR2)
{

CK_RV VAR3, VAR4;

CK_SLOT_ID VAR5;
CK_SLOT_ID VAR6; 
VAR7 *VAR8, *VAR9;
VAR10 *VAR11;

if (!VAR12) {
return (VAR13);
}


if (VAR14 || VAR15) {
if (VAR16) {

return (VAR17->FUN1(
FUN2(VAR2+1)));
} else {
return (VAR17->FUN1(VAR2));
}
}


if (FUN3(VAR2, &VAR6) != VAR18) {
return (VAR19);
}

VAR11 = VAR20->VAR21[VAR6];
VAR5 = FUN2(VAR6);

VAR3 = FUN4(VAR6)->FUN1(VAR5);


if (VAR3 == VAR22) {



VAR3 = VAR18;

(void) pthread_mutex_lock(&VAR11->VAR23);
VAR8 = VAR11->VAR24;

while (VAR8) {
VAR9 = VAR8->VAR25;

VAR4 = FUN4(VAR6)->
FUN5(VAR8->VAR26);


if ((VAR3 == VAR18) && (VAR4 != VAR18)) {
VAR3 = VAR4;
}

VAR8 = VAR9;
}

(void) pthread_mutex_unlock(&VAR11->VAR23);
}

if (VAR3 != VAR18) {

return (VAR3);
}


FUN6(VAR11);

return (VAR3);
}