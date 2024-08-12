static VAR1 FUN1(VAR2 *VAR3)
{
const int VAR4 = FUN2(VAR3->VAR5.VAR5);
int VAR6 = 1;

if (!VAR3->VAR5.VAR7) {
FUN3(VAR8);
}


if (!FUN4(5, 11)) {
FUN5(""
"");
FUN3(VAR9);
}

if (FUN6(VAR3) != VAR8) {
FUN3(VAR9);
}

if (FUN7(VAR4, VAR10, VAR11, (void *)&VAR6, sizeof(VAR6)) < 0) {
FUN3(VAR9);
}

VAR6 = VAR3->VAR5.VAR12;
if (FUN7(VAR4, VAR10, VAR13, (void *)&VAR6, sizeof(VAR6)) < 0) {
FUN3(VAR9);
}

VAR6 = VAR3->VAR5.VAR14;
if (FUN7(VAR4, VAR10, VAR15, (void *)&VAR6, sizeof(VAR6)) < 0) {
FUN3(VAR9);
}

FUN3(VAR8);
}