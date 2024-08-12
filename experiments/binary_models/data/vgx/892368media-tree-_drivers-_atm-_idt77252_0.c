static int
FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3;
unsigned long VAR4;
struct VAR5 *VAR6;
int VAR7, VAR8;
int VAR9;
u32 VAR10;

for (VAR7 = 0; VAR7 < (1 << VAR2->VAR11); VAR7++) {
for (VAR8 = 3; VAR8 < 5; VAR8++) {
VAR9 = FUN2(VAR2, VAR7, VAR8);

VAR6 = FUN3(sizeof(struct VAR5), VAR12);
if (!VAR6) {
FUN4("", VAR2->VAR13);
return -VAR14;
}
VAR6->VAR9 = VAR9;
VAR2->VAR15[VAR9] = VAR6;

FUN5(VAR2, &VAR6->VAR16.VAR17);

VAR10 = VAR18 |
VAR19 |
VAR20 |
VAR21;

VAR4 = VAR2->VAR22 + (VAR6->VAR9 << 2);
FUN6(VAR2, VAR4, VAR10);

FUN7(&VAR2->VAR23, VAR3);
FUN8(VAR24 | (VAR4 << 2),
VAR25);
FUN9(VAR2);
FUN10(&VAR2->VAR23, VAR3);
}
}

return 0;
}