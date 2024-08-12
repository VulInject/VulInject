static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
size_t VAR5)
{
size_t VAR6, VAR7;

for (VAR6 = 0; VAR6 < FUN2(VAR5, 4); VAR6++) {
size_t VAR8 = FUN3(VAR9, VAR5 - VAR6 * 4, 4);
u32 VAR10;

VAR10 = FUN4(VAR2, FUN5(VAR6));

for (VAR7 = 0; VAR7 < VAR8; VAR7++)
VAR4[VAR6 * 4 + VAR7] = VAR10 >> (VAR7 * 8);
}
}