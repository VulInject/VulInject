static void FUN1(void *VAR1, struct VAR2 *VAR3, int VAR4,
struct VAR5 *VAR6)
{

VAR7 *VAR8 = (VAR7 *)VAR1;
size_t VAR9;
size_t VAR10 = 5;
size_t VAR11 = VAR3->VAR12;

for (VAR9 = 0; VAR9 < FUN2(VAR13); VAR9++)
if (VAR8[VAR9] >> 28 != 0xC)
break;

if (VAR9 == FUN2(VAR13)) {
VAR10 += FUN2(VAR13);
VAR11 -= sizeof(VAR13);
}

VAR8[VAR10] = FUN3(VAR11);
}