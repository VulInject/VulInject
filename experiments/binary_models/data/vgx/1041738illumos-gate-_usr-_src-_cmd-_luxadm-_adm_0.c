char	*VAR1[16]; 
char			*VAR2;
int	VAR3;
const	int VAR4	= 0x00000001;
const	int VAR5	= 0x00000002;
const	int VAR6	= 0x00000004;
const	int VAR7	= 0x00000008;
const	int VAR8	= 0x00000010;
const	int VAR9	= 0x00000020;
const	int VAR10	= 0x00000040;
const	int VAR11	= 0x00000080;
const	int VAR12	= 0x00000100;
const	int VAR13	= 0x00000200;
const	int VAR14	= 0x00000400;
const	int VAR15	= 0x00001000;
const	int VAR16	= 0x00002000;
const	int VAR17	= 0x00004000;
const	int VAR18	= 0x00008000;
const	int VAR19	= 0x00010000;
const	int VAR20	= 0x00020000;


void
FUN1(VAR21 *VAR22, int VAR23, int VAR24)
{

int VAR25;

for (VAR25 = 0; VAR25 < VAR23; VAR25++) {
if (VAR22[VAR25])
(void) fprintf(VAR26, "", VAR22[VAR25]);
else if (VAR24)
(void) fprintf(VAR26, "");
else
return;
}
}