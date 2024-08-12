void FUN1(void)
{
int VAR1;



for (VAR1 = FUN2(0); VAR1 <= FUN2(7); VAR1++) {
FUN3(VAR1, VAR1 - FUN2(0));
}

for (VAR1 = FUN4(0); VAR1 <= FUN4(7); VAR1++) {
FUN3(VAR1, (VAR1 - FUN4(0))+8);
}
}