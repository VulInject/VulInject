static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR1 *VAR5;
int VAR6;

for (VAR6 = 0; VAR6 < VAR7; VAR6++) {
VAR5 = VAR2 + VAR6;
if (!FUN2(*VAR5))
return;
}

FUN3(&VAR8, (VAR1 *)FUN4(FUN5(*VAR4)));
FUN6(VAR4);
}