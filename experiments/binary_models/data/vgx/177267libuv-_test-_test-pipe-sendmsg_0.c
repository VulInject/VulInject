static void FUN1(VAR1* VAR2,
ssize_t VAR3,
const VAR4* VAR5) {
VAR6* VAR7;
VAR6* VAR8;
uv_handle_type VAR9;
unsigned int VAR10;

VAR7 = (VAR6*) VAR2;
FUN2(VAR3 >= 0);

while (FUN3(VAR7) != 0) {
VAR9 = FUN4(VAR7);
FUN2(VAR9 == VAR11);

FUN2(VAR12 < FUN5(VAR13));
VAR8 = &VAR13[VAR12++];
FUN2(0 == FUN6(VAR7->VAR14, VAR8, 0));
FUN2(0 == FUN7(VAR2, (VAR1*) VAR8));
}

if (VAR12 != FUN5(VAR13))
return;

FUN2(0 == FUN8((VAR1*) VAR7));
FUN9((VAR15*) VAR7, VAR16);
for (VAR10 = 0; VAR10 < FUN5(VAR13); VAR10++)
FUN9((VAR15*) &VAR13[VAR10], VAR16);
}