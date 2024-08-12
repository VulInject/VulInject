void
FUN1(int VAR1, short VAR2, void *VAR3)
{
static int	 VAR4 = 0;
struct timeval	 VAR5;
struct VAR6	*VAR7;
uint8_t		 VAR8[4096];

VAR7 = VAR3;
VAR5.VAR9 = 1;
VAR5.VAR10 = 0;
FUN2(&VAR7->VAR11);
if (VAR4++ >= 10) {

close(VAR1);
return;
}
if (write(VAR1, VAR8, 4096) == -1)
FUN3(1, "", "");
FUN4(&VAR7->VAR5, &VAR5);
}