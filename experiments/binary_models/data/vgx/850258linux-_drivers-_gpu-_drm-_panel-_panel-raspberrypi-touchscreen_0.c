static int FUN1(struct VAR1 *VAR2, u16 VAR3, u32 VAR4)
{
u8 VAR5[] = {
VAR3,
VAR3 >> 8,
VAR4,
VAR4 >> 8,
VAR4 >> 16,
VAR4 >> 24,
};

FUN2(VAR2->VAR6, VAR5, sizeof(VAR5));

return 0;
}