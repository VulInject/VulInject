static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR3->VAR6->VAR7);
void *VAR8 = VAR5->VAR9.VAR10 + FUN3(VAR3);
unsigned long VAR11;

for (VAR11 = 0; VAR11 < FUN4(VAR3); VAR11++) {
FUN5(FUN6(VAR3, VAR11), 0, VAR8, VAR12);
VAR8 += VAR12;
}

FUN7(VAR3);
FUN8(VAR3);

return 0;
}