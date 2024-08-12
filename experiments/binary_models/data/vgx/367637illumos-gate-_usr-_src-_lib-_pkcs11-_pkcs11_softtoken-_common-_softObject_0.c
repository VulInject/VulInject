VAR1
FUN1(CK_SESSION_HANDLE VAR2, CK_OBJECT_HANDLE VAR3)
{

CK_RV VAR4;
VAR5 *VAR6;
VAR7 *VAR8;
boolean_t VAR9 = VAR10;
CK_SESSION_HANDLE VAR11;


if (!VAR12)
return (VAR13);

VAR4 = FUN2(VAR2, &VAR8);
if (VAR4 != VAR14)
return (VAR4);


FUN3(VAR3, VAR6, VAR4);
if (VAR4 != VAR14) {
FUN4(VAR8, VAR9);
return (VAR4);
}


VAR11 = VAR6->VAR15;

if (VAR11 == 0) {

VAR4 = FUN5(VAR6);
if (VAR4 != VAR14) {
FUN4(VAR8, VAR9);
return (VAR4);
}

VAR4 = FUN6(VAR8, VAR6);
if (VAR4 != VAR14) {
FUN4(VAR8, VAR9);
return (VAR4);
}


(void) pthread_mutex_lock(&VAR6->VAR16);
if (VAR6->VAR17 & VAR18) {
(void) pthread_mutex_unlock(&VAR6->VAR16);
FUN4(VAR8, VAR9);
return (VAR19);
}
VAR6->VAR17 |= VAR18;
(void) pthread_mutex_unlock(&VAR6->VAR16);
FUN4(VAR8, VAR9);


FUN7(VAR6, VAR20, VAR10);
return (VAR14);
}


(void) pthread_mutex_lock(&VAR6->VAR16);
if (VAR6->VAR17 & VAR18) {
(void) pthread_mutex_unlock(&VAR6->VAR16);
FUN4(VAR8, VAR9);
return (VAR19);
}
VAR6->VAR17 |= VAR18;
(void) pthread_mutex_unlock(&VAR6->VAR16);


FUN8(VAR8, VAR6, VAR10, VAR10);


FUN4(VAR8, VAR9);

return (VAR4);
}