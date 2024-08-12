int FUN1(void) {
FUN2(1, ""
"",
FUN3(VAR1),
VAR2, VAR3);

FUN4(&VAR4);
FUN5();
FUN6(&VAR4);


FUN2(1, ""
"");


{
extern int FUN7(void);
FUN7();
}


{
extern int FUN8(void);
FUN8();
}


{
extern int FUN9(void);
FUN9();
}


return 0;
}