VAR1 *FUN1(void)
{
VAR1 *VAR2 =
FUN2(VAR3, sizeof(VAR1));
if (VAR2 != NULL) {
memset(VAR2, 0, sizeof(VAR1));
VAR2->VAR4 = 0;
VAR2->VAR5 = NULL;
VAR2->VAR6 = NULL;
} else {
FUN3(VAR7,
"",
VAR8);
return NULL;
}

return VAR2;
}