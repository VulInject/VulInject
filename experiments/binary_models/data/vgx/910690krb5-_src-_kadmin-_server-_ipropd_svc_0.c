void
FUN1(struct VAR1 *VAR2,
VAR3 *VAR4)
{
union {
kdb_last_t VAR5;
} VAR6;
void *VAR7;
FUN2 (*VAR8)(), (*VAR9)();
void *(*VAR10)();
char *VAR11 = "";

if (!FUN3(VAR2)) {
FUN4(VAR12, FUN5(""
""),
FUN6(VAR2->VAR13),
VAR2->VAR14.VAR15);
FUN7(VAR4);
return;
}

switch (VAR2->VAR16) {
case VAR17:
(void) FUN8(VAR4, VAR18,
(char *)NULL);
return;

case VAR19:
VAR8 = VAR20;
VAR9 = VAR21;
VAR10 = (void *(*)()) VAR22;
break;

case VAR23:
VAR8 = VAR18;
VAR9 = VAR24;
VAR10 = (void *(*)()) VAR25;
break;

case VAR26:
VAR8 = VAR27;
VAR9 = VAR24;
VAR10 = (void *(*)()) VAR28;
break;

default:
FUN4(VAR12,
FUN5(""),
VAR2->VAR16, VAR11);
FUN9(VAR4);
return;
}
(void) memset(&VAR6, 0, sizeof (VAR6));
if (!FUN10(VAR4, VAR8, (VAR29)&VAR6)) {
FUN4(VAR12,
FUN5(""),
VAR11);
FUN11(VAR4);
return;
}
VAR7 = (*VAR10)(&VAR6, VAR2);

if (VAR9 && VAR7 != NULL &&
!FUN8(VAR4, VAR9, VAR7)) {
FUN4(VAR12,
FUN5(""),
VAR11);
FUN12(VAR4);
}
if (!FUN13(VAR4, VAR8, (VAR29)&VAR6)) {
FUN4(VAR12,
FUN5(""),
VAR11);

FUN14(1);
}

if (VAR2->VAR16 == VAR19) {

VAR30 *VAR31 = (VAR30 *)VAR7;

if (VAR31->VAR32 == VAR33) {
FUN15(VAR31->VAR34.VAR35,
VAR31->VAR34.VAR36);
VAR31->VAR34.VAR35 = NULL;
VAR31->VAR34.VAR36 = 0;
}
}

}