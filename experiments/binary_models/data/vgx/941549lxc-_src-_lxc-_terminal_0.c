struct VAR1 *FUN1(int VAR2, int VAR3)
{
__do_close int VAR4 = -VAR5;
__do_free struct VAR1 *VAR6 = NULL;
int VAR7;
sigset_t VAR8;

VAR6 = malloc(sizeof(*VAR6));
if (!VAR6)
return NULL;

memset(VAR6, 0, sizeof(*VAR6));
VAR6->VAR9 = VAR2;
VAR6->VAR10 = VAR3;
VAR6->VAR11 = -1;

VAR7 = FUN2(&VAR8);
if (VAR7 < 0) {
FUN3("");
return NULL;
}

if (FUN4(VAR2)) {
VAR7 = FUN5(&VAR8, VAR12);
if (VAR7 < 0)
FUN6("");
} else {
FUN7("", VAR2);
}


VAR7 = FUN5(&VAR8, VAR13);
if (VAR7 < 0) {
FUN3("");
return NULL;
}

VAR7 = FUN8(VAR14, &VAR8, &VAR6->VAR15);
if (VAR7 < 0) {
FUN9("");
return NULL;
}

VAR4 = FUN10(-1, &VAR8, VAR16);
if (VAR4 < 0) {
FUN9("");
(void)FUN8(VAR17, &VAR6->VAR15, NULL);
return NULL;
}
VAR6->VAR11 = FUN11(VAR4);
FUN12("", VAR6->VAR11);

return FUN13(VAR6);
}