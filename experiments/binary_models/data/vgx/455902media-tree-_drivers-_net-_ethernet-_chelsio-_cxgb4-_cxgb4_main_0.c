static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned int VAR7;

VAR7 = VAR6->VAR8->VAR9 * 10 + VAR6->VAR10;
VAR4->VAR11 = sizeof(VAR7);
memcpy(VAR4->VAR12, &VAR7, VAR4->VAR11);
return 0;
}