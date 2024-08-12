static void FUN1(struct VAR1 *VAR2)
{
const char VAR3[] = {
0xff, 0xff, 0xff, 0xff, 0xa5, 0x5a, 0xe7, 0x7e, 0x01
};
VAR4 *VAR5 = VAR2->VAR6;

if (memcmp(VAR3, VAR5, sizeof(VAR3)))
FUN2(&VAR2->VAR7->VAR8,
"",
VAR9, (int)sizeof(VAR3), VAR5);

switch (VAR5[9]) {
case VAR10:
FUN3(VAR2, VAR5);
break;
case VAR11:
FUN4(VAR2, VAR5);
break;
default:
FUN2(&VAR2->VAR7->VAR8,
"",
VAR9, VAR5[9]);
break;
}
}