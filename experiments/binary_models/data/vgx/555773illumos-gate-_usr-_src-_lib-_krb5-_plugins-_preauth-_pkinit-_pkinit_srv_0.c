static VAR1
FUN1(krb5_context VAR2, pkinit_kdc_context VAR3)
{
krb5_error_code VAR4;
char *VAR5 = NULL;

FUN2("", VAR6, VAR3->VAR7);
VAR4 = FUN3(VAR2, VAR3->VAR7,
"",
&VAR3->VAR8->VAR9);
if (VAR4 != 0 || NULL == VAR3->VAR8->VAR9) {
VAR4 = VAR10;
FUN4(VAR2, VAR4,
"",
VAR3->VAR7);
goto VAR11;
}

VAR4 = FUN5(VAR2, VAR3->VAR7,
"",
&VAR3->VAR8->VAR12);
if (VAR4 != 0 || NULL == VAR3->VAR8->VAR12) {
VAR4 = VAR10;
FUN4(VAR2, VAR4,
"",
VAR3->VAR7);
goto VAR11;
}


(void) FUN5(VAR2, VAR3->VAR7,
"",
&VAR3->VAR8->VAR13);

(void) FUN5(VAR2, VAR3->VAR7,
"",
&VAR3->VAR8->VAR14);

(void) FUN3(VAR2, VAR3->VAR7,
"",
&VAR3->VAR8->VAR15);

(void) FUN3(VAR2, VAR3->VAR7,
"",
&VAR3->VAR8->VAR16);

(void) FUN6(VAR2, VAR3->VAR7,
"",
VAR17,
&VAR3->VAR18->VAR19);
if (VAR3->VAR18->VAR19 < 1024) {
FUN2(""
"", VAR6,
VAR3->VAR18->VAR19, VAR17);
VAR3->VAR18->VAR19 = VAR17;
}

(void) FUN7(VAR2, VAR3->VAR7,
"",
0, &VAR3->VAR18->VAR20);

(void) FUN7(VAR2, VAR3->VAR7,
"",
0, &VAR3->VAR18->VAR21);

(void) FUN3(VAR2, VAR3->VAR7,
"",
&VAR5);
if (VAR5 != NULL) {
if (FUN8(VAR5, "") == 0) {
VAR3->VAR18->VAR22 = 1;
VAR3->VAR18->VAR23 = 0;
} else if (FUN8(VAR5, "") == 0) {
VAR3->VAR18->VAR22 = 1;
VAR3->VAR18->VAR23 = 1;
} else if (FUN8(VAR5, "") == 0) {
VAR3->VAR18->VAR22 = 0;
VAR3->VAR18->VAR23 = 0;
} else {
FUN2("",
VAR6, VAR5);
}
free(VAR5);
}


return 0;
VAR11:
FUN9(VAR2, VAR3);
return VAR4;
}