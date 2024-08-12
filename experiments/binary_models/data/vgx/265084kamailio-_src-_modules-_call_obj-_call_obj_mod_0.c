static void FUN1(VAR1 *VAR2, void *VAR3)
{
int VAR4 = 0;
int VAR5 = 0; 
VAR6 *VAR7 = NULL;

int VAR8 = VAR2->FUN2(VAR3, "", &VAR4, &VAR5);
if (VAR8 != 1 && VAR8 != 2) {
VAR2->FUN3(VAR3, 400, "");
goto VAR9;
}

if (VAR4 < 0) {
VAR2->FUN3(VAR3, 400, "");
goto VAR9;
}

if (VAR5 < 0) {
VAR2->FUN3(VAR3, 400, "");
goto VAR9;
}

uint64_t VAR10;
uint64_t VAR11 = VAR4;
VAR11 *= 1000; 
if (FUN4(&VAR10)) {
FUN5("");
VAR2->FUN3(VAR3, 500, "");
goto VAR9;
}

if (VAR10 < VAR11) {
VAR2->FUN3(VAR3, 400, "");
goto VAR9;
}

uint64_t VAR12 = VAR10 - VAR11;
int VAR13 = FUN6(VAR12, &VAR7, VAR5);
if (VAR13 < 0) {
VAR2->FUN3(VAR3, 500, "");
goto VAR9;
}

VAR2->FUN7(VAR3, "", VAR13);
if (VAR5 && VAR5 < VAR13) {
VAR2->FUN7(VAR3, "", VAR5);
}
VAR6 *VAR14 = VAR7;
while (VAR14) {
VAR2->FUN7(VAR3, "" VAR15 "", VAR14->VAR16,
VAR14->VAR12, VAR14->VAR17.VAR18, VAR14->VAR17.VAR19);
VAR14 = VAR14->VAR20;
}

VAR9:


if (VAR7) {
FUN8(VAR7);
}

return;
}