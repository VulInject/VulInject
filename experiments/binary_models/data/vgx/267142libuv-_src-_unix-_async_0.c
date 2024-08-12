int FUN1(VAR1* VAR2) {
_Atomic int* VAR3;
_Atomic int* VAR4;

VAR3 = (_Atomic int*) &VAR2->VAR3;
VAR4 = (_Atomic int*) &VAR2->VAR5.VAR6;


if (FUN2(VAR3, VAR7) != 0)
return 0;


FUN3(VAR4, 1);


if (FUN4(VAR3, 1) == 0)
FUN5(VAR2->VAR8);


FUN3(VAR4, -1);

return 0;
}