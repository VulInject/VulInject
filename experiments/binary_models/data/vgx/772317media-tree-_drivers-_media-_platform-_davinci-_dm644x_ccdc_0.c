static int FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3 =
&VAR4.VAR5.VAR3;
unsigned int *VAR6 = NULL;
unsigned int *VAR7 = NULL;

memcpy(VAR3, VAR2, sizeof(*VAR2));

if (!VAR3->VAR8.VAR9)
return 0;

VAR7 = (unsigned int *)VAR3->VAR8.VAR10;
VAR6 = (unsigned int *)FUN2(
(unsigned long)VAR7);

if (VAR2->VAR8.VAR11 != VAR3->VAR8.VAR11) {
if (VAR7 != NULL) {
FUN3((unsigned long)VAR6,
VAR12
(VAR3->VAR8.VAR11 *
VAR13));
}


VAR6 =
(unsigned int *)FUN4(VAR14 | VAR15,
FUN5(VAR2->
VAR8.VAR11 *
VAR13));

if (VAR6 == NULL) {
FUN6(VAR4.VAR16,
"");
return -VAR17;
}
VAR7 =
(unsigned int *)FUN7((void *)VAR6);
}


VAR3->VAR8.VAR11 = VAR2->VAR8.VAR11;
if (FUN8(VAR6,
(void VAR18 *)VAR2->VAR8.VAR10,
VAR3->VAR8.VAR11 * VAR13)) {
FUN6(VAR4.VAR16, "");
return -VAR17;
}
VAR3->VAR8.VAR10 = (unsigned long)VAR7;
return 0;
}