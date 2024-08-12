static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = VAR2->VAR5;

VAR2->VAR6->VAR7 = 1;

if (FUN2())
snprintf(VAR2->VAR6->VAR8[0], sizeof(VAR2->VAR6->VAR8[0]),
"", VAR4->VAR9->VAR10, VAR4->VAR10);
else
snprintf(VAR2->VAR6->VAR8[0], sizeof(VAR2->VAR6->VAR8[0]), "",
VAR4->VAR10);

return VAR11;
}