VAR1 FUN1(Tree VAR2) {
Tree VAR3 = VAR2;

for (;;)
switch (FUN2(VAR3->VAR4)) {
case VAR5:
assert(VAR3->VAR6[0] || VAR3->VAR6[1]);
VAR3 = VAR3->VAR6[1] ? VAR3->VAR6[1] : VAR3->VAR6[0];
continue;
case VAR7:
VAR3 = VAR3->VAR6[1];
continue;
case VAR8: {
Symbol VAR9 = VAR3->VAR10.VAR11;
VAR3->VAR10.VAR11 = 0;
VAR3 = FUN3(VAR9);

}
case VAR12:
if (VAR2 == VAR3)
return VAR3->VAR6[0];
VAR3 = VAR3->VAR6[0];
return FUN4(VAR5, VAR3->VAR13, FUN5(VAR2), VAR3);
default:
FUN6("");
return FUN7(VAR2);
}
}