static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
char **VAR5,
struct VAR6 *VAR7)
{
size_t VAR8;
VAR9 *VAR10;
enum _msm8996_version VAR11;
*VAR5 = NULL;

VAR11 = FUN2();
if (VAR12 == VAR11) {
FUN3(VAR2, "");
return -VAR13;
}

VAR10 = FUN4(VAR4, &VAR8);
if (FUN5(VAR10))
return FUN6(VAR10);

switch (VAR11) {
case VAR14:
VAR7->VAR15 = 1 << (unsigned int)(*VAR10);
break;
case VAR16:
VAR7->VAR15 = 1 << ((unsigned int)(*VAR10) + 4);
break;
default:
FUN7();
break;
}

FUN8(VAR10);
return 0;
}