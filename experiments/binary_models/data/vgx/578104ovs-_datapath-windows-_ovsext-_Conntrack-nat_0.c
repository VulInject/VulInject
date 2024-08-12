VAR1 FUN1()
{
FUN2(VAR2 == NULL);


VAR2 = FUN3(
sizeof(VAR3) * VAR4,
VAR5);
if (VAR2 == NULL) {
return VAR6;
}

VAR7 = FUN3(
sizeof(VAR3) * VAR4,
VAR5);
if (VAR7 == NULL) {
FUN4(VAR2, VAR5);
return VAR6;
}

for (int VAR8 = 0; VAR8 < VAR4; VAR8++) {
FUN5(&VAR2[VAR8]);
FUN5(&VAR7[VAR8]);
}

FUN6(&VAR9);
VAR10 = 0;
return VAR11;
}