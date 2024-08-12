VAR1
FUN1(struct VAR2 *VAR3, const char *VAR4, size_t VAR5,
uint64_t VAR6, VAR7 *VAR8)
{
gss_buffer_desc		VAR9, VAR10;
OM_uint32		VAR11, VAR12;
int			VAR13;
int			VAR14;
VAR15		*VAR16;
uint64_t		VAR17;	
boolean_t		VAR18 = VAR19;


(void) pthread_mutex_lock(&VAR20);


if (VAR21 != VAR22) {
*VAR8 = VAR21;
if (VAR21 == VAR23) {
VAR14 = VAR24;
} else {
VAR14 = VAR25;
}
VAR21 = VAR22;
(void) pthread_mutex_unlock(&VAR20);
return (VAR14);
}


if (VAR26 != VAR3->VAR27) {
FUN2((VAR28, "", VAR3->VAR27->VAR29));
if (VAR30 != -1) {
(void) pthread_mutex_unlock(&VAR20);
FUN3(VAR31, VAR32);
return (VAR24);
}
VAR26 = (struct VAR33 *)VAR3->VAR27;
VAR34 = &VAR3->VAR35;
VAR36 = VAR3->VAR37;
}


(void) FUN4(&VAR38, VAR39);


if (VAR30 == -1) {

FUN2((VAR28, ""));
if (!FUN5(&VAR30, VAR26, VAR8)) {

(void) pthread_mutex_unlock(&VAR20);
return (VAR25);
}


FUN2((VAR28, ""));
if (FUN6() != 0) {
FUN2((VAR28,
""));
(void) pthread_mutex_unlock(&VAR20);
FUN3(VAR31, VAR32);
*VAR8 = VAR40;
return (VAR25);
}


VAR18 = VAR41;
}

if (!VAR42) {
FUN2((VAR28, ""));
if (FUN7() != 0) {
(void) pthread_mutex_unlock(&VAR20);
FUN3(VAR31, VAR32);
*VAR8 = VAR43;
return (VAR25);
}
VAR42 = VAR41;
}


if (VAR18) {
VAR18 = VAR19;
if (!FUN8(VAR30)) {
*VAR8 = VAR44;
(void) pthread_mutex_unlock(&VAR20);
return (VAR24);
}
}

(void) pthread_mutex_unlock(&VAR20);


if (VAR45) {
FUN2((VAR28, ""
"", VAR46.VAR47));
if ((VAR14 = FUN9()) == 2) { 
FUN3(VAR31, VAR32);
*VAR8 = VAR23;
return (VAR24);
} else if (VAR14 == 1) {
FUN3(VAR31, VAR32);
*VAR8 = VAR48;
return (VAR25);
}
VAR45 = VAR19;
}


VAR9.VAR49 = VAR5 + sizeof (VAR6);
VAR9.VAR50 = malloc(VAR9.VAR49);
if (VAR9.VAR50 == NULL) {
FUN10(FUN11(""));
FUN2((VAR28, "",
strerror(VAR51)));
FUN3(VAR31, VAR32);
*VAR8 = VAR52;
return (VAR53);
}
VAR17 = FUN12(VAR6);
(void) memcpy(VAR9.VAR50, &VAR17, sizeof (VAR17));
(void) memcpy((char *)VAR9.VAR50 + sizeof (VAR17), VAR4, VAR5);


(void) pthread_mutex_lock(&VAR54);
if (VAR55 != NULL) {
VAR11 = FUN13(&VAR12, VAR55, 1, VAR56,
&VAR9, &VAR13, &VAR10);
(void) pthread_mutex_unlock(&VAR54);
switch (VAR11) {
case VAR57:
break;
case VAR58:
FUN3(VAR31, VAR32);
free(VAR9.VAR50);
*VAR8 = VAR23;
return (VAR24);
default:
FUN14(FUN11(""), VAR11,
VAR12);
FUN3(VAR31, VAR32);
free(VAR9.VAR50);
*VAR8 = VAR48;
return (VAR25);
}
} else {	
(void) pthread_mutex_unlock(&VAR54);
FUN3(VAR31, VAR32);
free(VAR9.VAR50);
*VAR8 = VAR48;
return (VAR25);
}



(void) pthread_mutex_lock(&VAR59);
if (!FUN15(&VAR16, &VAR9, VAR6)) {
(void) pthread_mutex_unlock(&VAR59);
FUN3(VAR31, VAR32);
free(VAR9.VAR50);
(void) FUN16(&VAR12, &VAR10);
*VAR8 = VAR48;
return (VAR24);
}
FUN2((VAR28, ""));
(void) pthread_mutex_unlock(&VAR59);


if (FUN17(&VAR30, &VAR10) < 0) {
FUN2((VAR28, ""));
FUN3(VAR31, VAR32);
(void) FUN16(&VAR12, &VAR10);

(void) pthread_mutex_lock(&VAR59);
FUN18(VAR16);
(void) pthread_mutex_unlock(&VAR59);

*VAR8 = VAR48;
return (VAR25);
}
FUN2((VAR28, "", VAR46.VAR47));

(void) FUN16(&VAR12, &VAR10);

return (VAR60);
}