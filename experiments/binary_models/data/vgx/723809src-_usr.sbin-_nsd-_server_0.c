void
FUN1(struct VAR1 *VAR1, int VAR2, int VAR3)
{
pid_t VAR4;
int VAR5[2] = {0,0};
struct VAR6 *VAR7;

if(VAR1->VAR8->VAR9 != -1)
close(VAR1->VAR8->VAR9);
if(VAR2) {


char* tmpfile = VAR1->VAR10[1-VAR1->VAR11]->VAR12;
VAR1->VAR10[1-VAR1->VAR11]->VAR12 = NULL;

FUN2(VAR1->VAR10[1-VAR1->VAR11]->VAR13);
VAR1->VAR10[1-VAR1->VAR11]->VAR13 = NULL;
FUN3(VAR1->VAR10[1-VAR1->VAR11]);

VAR1->VAR10[1-VAR1->VAR11] = FUN4(tmpfile);
free(tmpfile);
}
if (FUN5(VAR14, VAR15, 0, VAR5) == -1) {
FUN6(VAR16, "", strerror(VAR17));
return;
}
VAR4 = FUN7();
switch (VAR4) {
case -1:
FUN6(VAR16, "", strerror(VAR17));
break;
default:

close(VAR5[0]);
if (FUN8(VAR5[1], VAR18, VAR19) == -1) {
FUN6(VAR16, "", strerror(VAR17));
}
if(VAR2) FUN9(VAR1);

VAR1->VAR11 = 1 - VAR1->VAR11;

FUN10("");
if(VAR1->VAR20) {
FUN11(VAR1->VAR21);
}

FUN12(VAR5[1], VAR1, VAR2, VAR3, VAR4);

break;
case 0:

close(VAR5[1]);
if (FUN8(VAR5[0], VAR18, VAR19) == -1) {
FUN6(VAR16, "", strerror(VAR17));
}
VAR1->VAR8->VAR9 = VAR5[0];
break;
}

VAR1->VAR8->VAR22 = NULL;
VAR1->VAR8->VAR23 = VAR24;
VAR1->VAR8->VAR25 = VAR26;

VAR7 = (struct VAR6 *) VAR1->VAR8->VAR27;
VAR7->VAR28->VAR29 = 0;
}