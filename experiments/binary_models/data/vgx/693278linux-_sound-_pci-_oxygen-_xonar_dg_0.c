int FUN1(struct VAR1 *VAR2, enum cs4245_shadow_operation VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
unsigned char VAR7;
int VAR8;

for (VAR7 = 1; VAR7 < FUN2(VAR5->VAR9); VAR7++) {
VAR8 = (VAR3 == VAR10 ?
FUN3(VAR2, VAR7) :
FUN4(VAR2, VAR7));
if (VAR8 < 0)
return VAR8;
}
return 0;
}