int FUN1(void *VAR1, struct VAR2 *VAR3)
{
VAR4;
u64 VAR5[2], VAR6[2];
int VAR7;

VAR5[0] = 0;
VAR6[0] = FUN2(VAR8, 256llu << 20, VAR9->VAR10);
VAR7 = 1;

if (VAR9->VAR10 > VAR6[0]) {
VAR5[1] = 0x80000000 + VAR6[0];
VAR6[1] = VAR9->VAR10 - VAR6[0];
VAR7++;
}

return FUN3(VAR1, VAR5, VAR6, VAR7);
}