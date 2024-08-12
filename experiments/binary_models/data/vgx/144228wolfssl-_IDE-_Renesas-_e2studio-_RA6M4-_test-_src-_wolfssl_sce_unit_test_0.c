int FUN1()
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3;
BaseType_t VAR4;

VAR2+=2;
VAR5 = 0;
VAR6 = 0;
VAR7 = 0;

VAR8 = FUN2(VAR2, 0);
VAR4 = VAR9;

VAR4 = FUN3(VAR10, "",
VAR11, NULL, 2, NULL);
if (VAR4 == VAR9)
VAR4 = FUN3(VAR12, "",
VAR11, NULL, 3, NULL);

if (VAR4 == VAR9) {
FUN4("");
FUN5(10000/VAR13);
VAR5 = true;

for (VAR3 = 0; VAR3 < VAR2; VAR3++) {
if(!FUN6(VAR8, 2000/VAR13)) {
FUN4("");
VAR1 = -1;
VAR4 = VAR14;
}
}
}

FUN7(VAR8);

if ((VAR4 == VAR9) &&
(VAR6 == 0 && VAR7 == 0))
VAR1 = 0;
else
VAR1 = -1;

FUN8(VAR1)

return VAR1;
}