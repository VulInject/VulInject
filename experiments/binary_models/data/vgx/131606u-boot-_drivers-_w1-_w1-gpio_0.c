static void FUN1(struct VAR1 *VAR2, u8 VAR3)
{
int VAR4;

for (VAR4 = 0; VAR4 < 8; ++VAR4)
FUN2(VAR2, (VAR3 >> VAR4) & 0x1);
}