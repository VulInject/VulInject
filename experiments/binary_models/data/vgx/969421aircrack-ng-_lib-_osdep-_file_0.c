static int FUN1(struct VAR1 * VAR2, unsigned char * VAR3)
{
struct VAR4 * VAR5 = FUN2(VAR2);

memcpy(VAR3, VAR5->VAR6, sizeof(VAR5->VAR6));

return 0;
}