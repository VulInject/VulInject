FUN1("");
FUN2("");


static int FUN3(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN4(VAR2->VAR5);
char VAR6[32] = {0};
char *VAR7;
int VAR8;

VAR8 = FUN5(VAR2->VAR5->VAR9, VAR10, VAR6,
sizeof(VAR6));
if (VAR8 < 0)
return VAR8;

VAR7 = FUN6(VAR6);

strcpy(VAR2->VAR11->VAR12, "");
strcpy(VAR2->VAR11->VAR13, VAR7);
strcpy(VAR2->VAR11->VAR14, VAR7);
snprintf(VAR2->VAR11->VAR15, sizeof(VAR2->VAR11->VAR15),
"", VAR7,
VAR4->VAR16[3], VAR4->VAR16[4],
FUN7(&VAR2->VAR5->VAR17), 100 << VAR4->VAR18);

return 0;
}