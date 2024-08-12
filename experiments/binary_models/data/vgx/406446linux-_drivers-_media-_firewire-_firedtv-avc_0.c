static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5, VAR6, VAR7 = 1;

for (VAR5 = 0, VAR6 = 0; VAR5 < 16; VAR5++) {
if (FUN2(VAR5, &VAR2->VAR8)) {
VAR4[VAR7++] = 0x13; 
VAR4[VAR7++] = 0x80; 
VAR4[VAR7++] = (VAR2->VAR9[VAR5] >> 8) & 0x1f;
VAR4[VAR7++] = VAR2->VAR9[VAR5] & 0xff;
VAR4[VAR7++] = 0x00; 
VAR4[VAR7++] = 0x00; 
VAR6++;
}
}
VAR4[0] = VAR6;

return VAR7;
}