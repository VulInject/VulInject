static int FUN1(void *VAR1, int VAR2, const char *VAR3,
int VAR4, struct VAR5 **VAR6)
{
int VAR7;
int VAR8;
int VAR9;
int VAR10;
int VAR11;

if ((VAR8 = FUN2(VAR1, VAR2)) < 0)
return VAR8;

VAR9 = FUN3(VAR1, VAR3, &VAR11);
if (VAR9 < 0)
return VAR9;

*VAR6 = FUN4(VAR1, VAR8);
VAR7 = sizeof(**VAR6) + FUN5(VAR4);

VAR10 = FUN6(VAR1, *VAR6, 0, VAR7);
if (VAR10) {

if (FUN7() && VAR11)
FUN8(VAR1, VAR3);
return VAR10;
}

(*VAR6)->VAR12 = FUN9(VAR13);
(*VAR6)->VAR14 = FUN9(VAR9);
(*VAR6)->VAR4 = FUN9(VAR4);
return 0;
}