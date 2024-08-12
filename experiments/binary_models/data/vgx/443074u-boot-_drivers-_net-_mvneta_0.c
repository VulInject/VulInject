static void FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4;
u32 VAR5;

if (VAR3 == -1) {
memset(VAR2->VAR6, 0, sizeof(VAR2->VAR6));
VAR5 = 0;
} else {
memset(VAR2->VAR6, 1, sizeof(VAR2->VAR6));
VAR5 = 0x1 | (VAR3 << 1);
VAR5 |= (VAR5 << 24) | (VAR5 << 16) | (VAR5 << 8);
}

for (VAR4 = 0; VAR4 <= 0xfc; VAR4 += 4)
FUN2(VAR2, VAR7 + VAR4, VAR5);
}