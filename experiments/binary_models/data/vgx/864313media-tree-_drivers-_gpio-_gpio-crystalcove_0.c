static void FUN1(struct VAR1 *VAR2,
int VAR3)
{
u8 VAR4 = VAR3 < 8 ? VAR5 : VAR6;
int VAR7 = FUN2(VAR3 % 8);

if (VAR2->VAR8)
FUN3(VAR2->VAR9, VAR4, VAR7, VAR7);
else
FUN3(VAR2->VAR9, VAR4, VAR7, 0);
}