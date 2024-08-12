static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
struct VAR7 *VAR8 = (void *)VAR2->VAR9;

if (VAR6->VAR10.VAR11[0] == '') {

VAR8->VAR12->VAR13 = FUN2(NULL, 0);
} else if (VAR6->VAR10.VAR11[0] == '') {

VAR8->VAR12->VAR13 = FUN2(VAR6->VAR10.VAR11, strlen(VAR6->VAR10.VAR11));
} else {
FUN3(VAR2, VAR6, "");
return -1;
}
return 0;
}