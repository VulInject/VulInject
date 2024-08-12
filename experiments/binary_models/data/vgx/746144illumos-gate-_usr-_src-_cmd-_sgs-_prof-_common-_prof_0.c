int	(*VAR1)() = NULL;	


int	VAR2;		

char	*VAR3;		

char	*VAR4;		

short	VAR5 = 0;	




struct VAR6 *VAR7;	

struct VAR6 *VAR8;


int VAR9;		
int VAR10;			

static int FUN1(int VAR11);
static int FUN2(long VAR12);



extern unsigned char VAR13;	


void
FUN3(struct VAR14 *VAR15, struct VAR6 *VAR8)
{

int VAR16 = VAR8->VAR17;
char *VAR18 = VAR8->VAR19;


(void) fputs(VAR15->VAR20, VAR21);
VAR16--;


while (--VAR16 >= 0) {
while ((++VAR15)->VAR22 != VAR18)
;
FUN4("", VAR15->VAR20);
}

(void) FUN5('');
}