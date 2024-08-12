int FUN1(const char *VAR1) { return FUN2(VAR1[123456]); }
int FUN3(void) { return FUN2(&VAR2); }


int FUN4(void) { return FUN2(1); }
int FUN5(void) { return FUN2(""); }
int FUN6(void) { return FUN2((1234 + 45) & ~7); }


int FUN7(void) { return FUN8(1); }
int FUN9(void) { return FUN10(1); }
int FUN11(void) { return FUN2(""[0]); }







int (*VAR3[])(void) = {
VAR4, VAR5, VAR6, VAR7, VAR8, VAR9
};