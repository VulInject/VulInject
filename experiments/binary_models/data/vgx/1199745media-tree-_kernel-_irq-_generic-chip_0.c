}
FUN1(VAR1);


void FUN2(struct VAR2 *VAR3, u32 VAR4,
unsigned int VAR5, unsigned int VAR6)
{
unsigned int VAR7 = VAR3->VAR8;

FUN3(&VAR9);
FUN4(&VAR3->VAR10);
FUN5(&VAR9);

for (; VAR4; VAR4 >>= 1, VAR7++) {
if (!(VAR4 & 0x01))
continue;


FUN6(VAR7, NULL);
FUN7(VAR7, &VAR11);
FUN8(VAR7, NULL);
FUN9(VAR7, VAR5, VAR6);
}
}