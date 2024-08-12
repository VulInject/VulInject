static int FUN1(struct VAR1 *VAR2, uint32_t VAR3,
struct VAR4 **VAR5)
{
int VAR6 = ++VAR7;
struct list_head VAR8;
void *VAR9 = NULL;
size_t VAR10 = 0;
int VAR11;

VAR11 = FUN2(&VAR9, &VAR10,
VAR12, VAR2,
VAR6);
if (VAR11) {
FUN3("",
VAR3);
VAR7--;
goto VAR13;
}

FUN4(&VAR8);

VAR11 = FUN5(VAR9,
&VAR8,
VAR6);
if (VAR11) {
FUN3("",
VAR3);
VAR7--;
goto VAR13;
}

FUN6(&VAR8,
&VAR14);

*VAR5 = FUN7(VAR2);
if (FUN8(!*VAR5)) {
VAR11 = -VAR15;
goto VAR13;
}


FUN9(*VAR5, VAR2);


VAR11 = FUN10();
if (!VAR11)
VAR16.VAR17++;
else
FUN3("",
VAR3, VAR11);

VAR13:
FUN11(VAR9);
return VAR11;
}