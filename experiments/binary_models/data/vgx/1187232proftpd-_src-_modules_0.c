int FUN1(VAR1 *VAR2) {
char VAR3[256];

if (VAR2 == NULL ||
VAR2->VAR4 == NULL) {
VAR5 = VAR6;
return -1;
}


if (VAR2->VAR7 < VAR8) {
VAR5 = VAR9;
return -1;
}


memset(VAR3, '', sizeof(VAR3));
FUN2(VAR3, sizeof(VAR3), "", VAR2->VAR4);
VAR3[sizeof(VAR3)-1] = '';

if (FUN3(VAR3) != NULL) {
VAR5 = VAR10;
return -1;
}


if (!VAR2->VAR11 ||
VAR2->FUN4() >= 0) {


VAR2->VAR12 = VAR13++;


if (FUN5(VAR2) < 0) {
return -1;
}

if (FUN6(VAR2) < 0) {
return -1;
}

if (FUN7(VAR2) < 0) {
return -1;
}


if (VAR14) {
VAR2->VAR15 = VAR14;
VAR14->VAR16 = VAR2;
}

VAR14 = VAR2;


FUN8("", VAR3);
return 0;
}

VAR5 = VAR17;
return -1;
}