void FUN1(unsigned int VAR1, void * VAR2) {

struct VAR3 *VAR4, *VAR5;
FUN2("");

VAR4 = FUN3(VAR1);

while (VAR4) {
VAR5 = VAR4;
VAR4 = VAR4->VAR6;
VAR5->VAR6 = NULL;
FUN2("", VAR5, VAR4);
FUN4(VAR5);
}
}