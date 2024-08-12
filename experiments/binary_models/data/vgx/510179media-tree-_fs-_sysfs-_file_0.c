static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR2->private;
struct VAR6 *VAR7 = VAR5->VAR8->VAR9->VAR10;
const struct VAR11 *VAR12 = FUN2(VAR5->VAR8);
ssize_t VAR13;
char *VAR14;


VAR13 = FUN3(VAR2, &VAR14);
if (VAR13 < VAR15) {
FUN4(VAR2, -1);
return 0;
}
memset(VAR14, 0, VAR15);


if (VAR12->VAR16) {
VAR13 = VAR12->FUN5(VAR7, VAR5->VAR8->VAR10, VAR14);
if (VAR13 < 0)
return VAR13;
}


if (VAR13 >= (VAR17)VAR15) {
FUN6("",
(unsigned long)VAR12->VAR16);

VAR13 = VAR15 - 1;
}
FUN4(VAR2, VAR13);
return 0;
}