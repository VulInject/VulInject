static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
VAR4 *VAR5 = VAR1;
int VAR6 = VAR2 & 3;

VAR5->VAR7 = 1;
FUN2 (VAR5->VAR8, 1);

FUN3 (VAR5);

FUN4 (VAR5->VAR9, VAR6, VAR3);
}