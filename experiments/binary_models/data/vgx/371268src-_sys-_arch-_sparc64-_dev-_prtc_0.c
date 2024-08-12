int
FUN1(todr_chip_handle_t VAR1, struct VAR2 *VAR3)
{
struct {
cell_t	VAR4;
cell_t	VAR5;
cell_t	VAR6;
cell_t	VAR7;
cell_t	VAR8;
} VAR9 = {
.VAR4	= FUN2(""),
.VAR5	= 0,
.VAR6	= 2,
};

if (FUN3(&VAR9) == -1)
return (-1);

VAR3->VAR10 = VAR9.VAR8;
VAR3->VAR11 = 0;

return (0);
}