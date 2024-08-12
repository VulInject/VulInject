static VAR1 *FUN1(VAR1 *VAR2) {
VAR3;
VAR4 *VAR5;
unsigned VAR6;

assert(VAR2);

while ((VAR5 = VAR2->VAR7)) {
assert(VAR5->VAR8);
FUN2(VAR5);
FUN3(VAR5);
}

if (VAR2->VAR9)
*(VAR2->VAR9) = NULL;

VAR2->VAR10 = true;

FUN4(VAR2);

if (VAR2->VAR11[VAR12] >= 0) {

RHeader VAR13 = {
.VAR14 = VAR15,
.VAR16 = sizeof VAR13,
};


for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
(void) send(VAR2->VAR11[VAR12], &VAR13, VAR13.VAR16, VAR18);
}


for (VAR6 = 0; VAR6 < VAR2->VAR17; VAR6++)
(void) FUN5(VAR2->VAR19[VAR6], NULL);


FUN6(VAR2->VAR11, VAR20);

return FUN7(VAR2);
}