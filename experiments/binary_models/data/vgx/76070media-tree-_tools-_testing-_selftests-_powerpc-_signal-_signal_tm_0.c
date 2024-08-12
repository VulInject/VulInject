static int FUN1()
{
int VAR1;
struct sigaction VAR2;

VAR2.VAR3 = VAR4;
VAR2.VAR5 = 0;
FUN2(&VAR2.VAR6);
if (FUN3(VAR7, &VAR2, NULL) < 0) {
FUN4("");
FUN5(1);
}
if (FUN3(VAR8, &VAR2, NULL) < 0) {
FUN4("");
FUN5(1);
}

FUN6(!FUN7());

for (VAR1 = 0; VAR1 < VAR9; VAR1++) {

long VAR10 = 0xdead;
long VAR11 = 0xbeef;

FUN8(0); 
VAR12 = 0;
FUN8(VAR13);
FUN9(FUN10());
VAR11 = FUN11(FUN12(), VAR7, &VAR10);
if (VAR10 == 0xdead)

continue;

if (VAR11 || VAR10) {

FUN13("",
FUN14(), FUN15());
fprintf(VAR14, "",
VAR1, VAR15, VAR11, VAR10);
FUN9(VAR10);
}
while(!VAR12 && !VAR15)
asm volatile("": : :"");
if (!VAR12) {
fprintf(VAR14, "",
VAR1, VAR15, VAR11, VAR10);
FUN9(VAR15); 
}
}

return 0;
}