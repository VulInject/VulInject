static void FUN1(const char *VAR1,char *VAR2)
{
assert(VAR1 != (char *) NULL);
assert(VAR2 != (char *) NULL);
if (FUN2() != VAR3)
(void) FUN3(VAR4,FUN4(),"",VAR1);
(void) FUN5(VAR2,VAR5,"",VAR1);
(void) FUN6(VAR2);
if (FUN7("",VAR1,7) == 0)
(void) FUN8(VAR2,VAR1,VAR5);
else
{
(void) FUN5(VAR2,VAR5,"",VAR1);
(void) FUN5(VAR2,VAR5,"",VAR1);
}
}