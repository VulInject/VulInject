VAR1 FUN1(VAR2* VAR3) {

ByteArray VAR4 = FUN2(VAR3, 1);
int VAR5 = (int)FUN3(VAR3, VAR6);

if (VAR5 == 0 && !FUN4(FUN5(VAR3, 2, ""), "")) {
FUN6(VAR3, 2, "");
return 0;
}

if (VAR5 < 0 || (VAR7)VAR5 >= VAR4->VAR8 - 1) {
FUN6(VAR3, 2, "");
return 0;
}

guint32 VAR9 = (VAR10)VAR4->VAR11[VAR5 + 1];
VAR9 <<= 8;
VAR9 |= (VAR10)VAR4->VAR11[VAR5];

FUN7(VAR3, VAR9);

FUN8(1); 
}