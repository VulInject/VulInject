static unsigned int FUN1(struct VAR1 *VAR2,
unsigned char *VAR3,
unsigned int VAR4)
{
unsigned int VAR5 = 0;

while (VAR2->VAR6 > 4 && VAR4) {
VAR3[VAR5++] = VAR2->VAR7[0] & 0xff;
VAR2->VAR7[0] >>= 8;
VAR4--;
VAR2->VAR6--;
}

if (!VAR4)
return VAR5;

while (VAR2->VAR6 && VAR4) {
VAR3[VAR5++] = VAR2->VAR7[1] & 0xff;
VAR2->VAR7[1] >>= 8;
VAR4--;
VAR2->VAR6--;
}

return VAR5;
}