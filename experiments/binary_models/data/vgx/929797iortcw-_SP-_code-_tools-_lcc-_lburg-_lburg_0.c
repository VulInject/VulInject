static void FUN1(Nonterm VAR1, int VAR2) {
FUN2("", VAR2 + 1);
for ( ; VAR1; VAR1 = VAR1->VAR3) {
int VAR4 = 1, VAR5 = VAR1->VAR6;
while ((VAR5 >>= 1) != 0)
VAR4++;		
FUN2("", VAR1, VAR4);
}
FUN2("");
}