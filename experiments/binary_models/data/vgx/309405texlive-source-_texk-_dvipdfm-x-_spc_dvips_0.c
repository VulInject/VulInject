FUN1 (struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int       VAR5 = 0;
int       VAR6, VAR7;
double    VAR8, VAR9;
pdf_coord VAR10;

FUN2(VAR2, &VAR10);
if (VAR4->VAR11 + strlen("") <= VAR4->VAR12 &&
!FUN3(VAR4->VAR11, "", strlen(""))) {
VAR13++;
VAR14 = 1;

VAR8 = VAR15 = VAR10.VAR16;
VAR9 = VAR17 = VAR10.VAR18;
VAR4->VAR11 += strlen("");
} else if (VAR4->VAR11 + strlen("") <= VAR4->VAR12 &&
!FUN3(VAR4->VAR11, "", strlen(""))) {
if (VAR13 <= 0) {
FUN4(VAR2, "");
return -1;
}
VAR13--;

VAR14 = 0;

VAR8 = VAR15;
VAR9 = VAR17;
VAR4->VAR11 += strlen("");
} else if (VAR4->VAR11 < VAR4->VAR12 && VAR4->VAR11[0] == '') {
VAR8 = VAR14 ? VAR15 : VAR10.VAR16;
VAR9 = VAR14 ? VAR17 : VAR10.VAR18;
VAR4->VAR11++;
} else {
VAR14 = 1;
VAR8 = VAR15 = VAR10.VAR16;
VAR9 = VAR17 = VAR10.VAR18;
}

FUN5(&VAR4->VAR11, VAR4->VAR12);
if (VAR4->VAR11 < VAR4->VAR12) {

VAR6 = FUN6();
VAR7 = FUN7();

VAR5 = FUN8(&VAR4->VAR11, VAR4->VAR12, VAR8, VAR9);
if (VAR5) {
FUN4(VAR2, "");
FUN9(VAR7);
} else if (VAR6 != FUN6()) {
FUN4(VAR2, "");
FUN4(VAR2, "");
FUN4(VAR2, "");
}
}

return  VAR5;
}