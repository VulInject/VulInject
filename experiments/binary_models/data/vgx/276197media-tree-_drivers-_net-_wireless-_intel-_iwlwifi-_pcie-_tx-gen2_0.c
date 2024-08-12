void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;


memset(VAR4->VAR6, 0, sizeof(VAR4->VAR6));
memset(VAR4->VAR7, 0, sizeof(VAR4->VAR7));


for (VAR5 = 0; VAR5 < FUN3(VAR4->VAR8); VAR5++) {
if (!VAR4->VAR8[VAR5])
continue;
FUN4(VAR2, VAR5);
}
}