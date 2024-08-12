static VAR1
FUN1(caddr_t VAR2)
{

struct VAR3 *VAR4 = (struct VAR3 *)VAR2;
struct VAR5 *VAR6 = VAR4->VAR7;
enum ath9k_int VAR8;
VAR9 *VAR10 = (VAR9 *)VAR4;

FUN2(VAR4);

if (VAR4->VAR11 & VAR12) {

FUN3(VAR4);
return (VAR13);
}
if (!FUN4(VAR6)) {	
FUN3(VAR4);
return (VAR13);
}


(void) FUN5(VAR6, &VAR8); 

VAR8 &= VAR4->VAR14; 


if (!VAR8) {
FUN3(VAR4);
return (VAR13);
}

VAR4->VAR15 = VAR8;

if (VAR8 & VAR16) {

FUN6((VAR17, ""
""));
goto VAR18;
} else if (VAR8 & VAR19) {

FUN6((VAR17, ""
""));
goto VAR18;
} else {
if (VAR8 & VAR20) {

FUN6((VAR17, ""
""));
VAR4->VAR21 = NULL;
}
if (VAR8 & VAR22) {

FUN6((VAR17, ""
""));
(void) FUN7(VAR6, VAR23);
}

if (VAR8 & VAR24) {
FUN6((VAR17, ""
""));
VAR4->VAR25 = 1;
FUN8(VAR4->VAR26);
}
if (VAR8 & VAR27) {
FUN6((VAR17, ""
""));
if (FUN9(VAR4->VAR28,
VAR29, VAR4, VAR30) !=
VAR31) {
FUN10(""
"");
}
}
if (VAR8 & VAR32) {

(void) FUN11(VAR6, 0);

FUN12(VAR6, &VAR4->VAR33);
(void) FUN11(VAR6, VAR4->VAR14);
FUN6((VAR17, ""
""));
}

if (VAR8 & VAR34) {
FUN6((VAR17, ""
""));
if (!(VAR6->VAR35.VAR36 &
VAR37)) {

FUN13(VAR6, 0);
goto VAR18;
}
}

if (VAR8 & VAR38) {
FUN6((VAR17, ""
""));
FUN6((VAR17, ""
""));
if (FUN9(VAR4->VAR28, VAR39,
VAR4, VAR30) != VAR31) {
FUN10(""
"");
}
FUN6((VAR17, ""
""));
}

FUN3(VAR4);


if (VAR8 & VAR40) {
FUN6((VAR17, ""
""));
return (VAR41);
}

if (VAR8 & VAR42) {
FUN6((VAR17, ""
""));

return (VAR41);
}
}

return (VAR41);
VAR18:
FUN6((VAR17, ""));
(void) FUN14(VAR10);
FUN3(VAR4);
return (VAR41);
}