static VAR1 FUN1(u32 VAR2)
{
int VAR3;
const struct VAR4 *VAR5;

for (VAR3 = 0; VAR3 < FUN2(VAR6); VAR3++) {
VAR5 = &VAR6[VAR3];
if (VAR2 < VAR5->VAR2)
return VAR5->VAR7;
}
return 0xc0;
}