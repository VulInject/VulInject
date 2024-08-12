void FUN1(unsigned long VAR1)
{
FUN2(VAR2, 14, VAR3);	
FUN2(VAR2, 15, VAR3);	
FUN2(VAR2, 16, VAR3);	

FUN3(VAR4);

if (VAR1 & (1 << 0)) {
FUN2(VAR2, 17, 1);
}
if (VAR1 & (1 << 1)) {
FUN4(VAR5, 28, 1);
}
if (VAR1 & (1 << 2)) {
FUN2(VAR5, 18, 1);
}
if (VAR1 & (1 << 3)) {
FUN2(VAR5, 19, 1);
}
if (VAR1 & (1 << 4)) {
FUN5(VAR2, 17, 1);
}
if (VAR1 & (1 << 5)) {
FUN5(VAR5, 28, 1);
}
if (VAR1 & (1 << 6)) {
FUN5(VAR5, 18, 1);
}
if (VAR1 & (1 << 7)) {
FUN5(VAR5, 19, 1);
}

}