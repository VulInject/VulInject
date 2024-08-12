int FUN1(VAR1* VAR2)
{
struct VAR3* VAR4;
VAR5* VAR6;

if (VAR2->VAR7 != VAR8) {
FUN2("");
return -1;
}

if (FUN3(VAR2->VAR9)) {
FUN2("");
return -1;
}

VAR4 = (struct VAR3*)FUN4(sizeof(struct VAR3));
if (VAR4 == NULL) {
FUN2("");
return -1;
}
memset(VAR4, '', sizeof(struct VAR3));
if (FUN5(&VAR4->VAR10, VAR11) < 0) goto VAR12;


VAR6 = VAR2->VAR13->VAR6[VAR14];
if (FUN6(&VAR4->VAR15, VAR6, &VAR2->VAR16) < 0) goto VAR12;

FUN7(VAR2, VAR4);
return 0;

VAR12:
if (VAR4) {
FUN7(VAR2, NULL);
FUN8(&VAR4->VAR10);
FUN9(VAR4);
}
return -1;
}