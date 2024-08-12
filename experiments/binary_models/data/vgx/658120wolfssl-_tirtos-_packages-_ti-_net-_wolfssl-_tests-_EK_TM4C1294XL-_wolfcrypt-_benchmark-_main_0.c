void FUN1(void);
void FUN2(UArg VAR1, UArg VAR2);
extern int FUN3(void* VAR3);


void FUN2(UArg VAR1, UArg VAR2)
{
void *VAR3 = NULL;
FUN1();

FUN4("");
FUN5();
FUN3(VAR3);
FUN4("");

FUN6(0);
}