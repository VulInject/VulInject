void
FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
struct VAR4 *VAR5 = &VAR3->VAR6;
uint8_t VAR7;


if (FUN2(VAR5, VAR8, &VAR7) < 0)
FUN3((""));
if (VAR7 == VAR9) 
(void)FUN4(VAR5, VAR8, VAR10);
else 
(void)FUN4(VAR5, VAR8, VAR9);

FUN5(&VAR3->VAR11.VAR12, 1000000, 0);
}