static void FUN1(void)
{


FUN2();


FUN3(VAR1, '', '');
FUN4(VAR1, "");

FUN3(VAR2, '', '');
FUN4(VAR2, "");

FUN3(VAR3, '', '');

FUN3(VAR4, '', '');

FUN4(VAR5, ""#$%&'()*+,-./:;<=>?@VAR6`");

FUN4(VAR7, "");



FUN5(VAR1 | VAR2, VAR8);
FUN5(VAR8 | VAR3, VAR9);
FUN5(VAR9 | VAR5, VAR10);

FUN5(VAR10, VAR11);
FUN4(VAR11, "");

FUN3(VAR12, '', (char) VAR13);
FUN6(VAR12, "");

FUN3(VAR14, '', '');
FUN3(VAR14, '', '');

FUN5(VAR9, VAR15);
FUN4(VAR15, "");	

FUN5(VAR3, VAR16);
FUN4(VAR16, "");

FUN5(VAR3, VAR17);
FUN4(VAR17, "");

FUN5(VAR3 | VAR8, VAR18);
FUN4(VAR18, "");

FUN5(VAR9, VAR19);
FUN3(VAR19, '', '');
FUN3(VAR19, '', '');
FUN3(VAR19, '', '');
FUN3(VAR19, '', '');
FUN4(VAR19, "");
FUN4(VAR20, "");
FUN4(VAR21, "");
FUN4(VAR22, "");



FUN7('', '', '');
FUN7('', '', '');
FUN7('', '', '');
FUN7('', '', '');
}