static int FUN1(struct VAR1 *VAR2, u16 VAR3,
const void *VAR4, size_t VAR5)
{
struct VAR6 *VAR7 =
FUN2(VAR2, struct VAR6, VAR2);
struct rmi_spi_cmd VAR8;
int VAR9;

FUN3(&VAR7->VAR10);

if (FUN4(VAR3) != VAR7->VAR11) {
VAR9 = FUN5(VAR7, FUN4(VAR3));
if (VAR9)
goto VAR12;
}

VAR8.VAR13 = VAR14;
VAR8.VAR3 = VAR3;

VAR9 = FUN6(VAR7, &VAR8, VAR4, VAR5, NULL, 0);

VAR12:
FUN7(&VAR7->VAR10);
return VAR9;
}