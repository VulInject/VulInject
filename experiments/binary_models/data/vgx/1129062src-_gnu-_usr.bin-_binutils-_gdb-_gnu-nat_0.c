struct VAR1 *FUN1 (struct VAR2 *VAR2, int VAR3);
void FUN2 (struct VAR2 *VAR2,
struct VAR1 *VAR4,
int VAR5);
int FUN3 (struct VAR2 *VAR2);
void FUN4 (struct VAR2 *VAR2);
void FUN5 (struct VAR2 *VAR2);
void FUN6 (struct VAR2 *VAR2, struct VAR1 *VAR1);
void FUN7 (struct VAR2 *VAR2);
void FUN8 (struct VAR2 *VAR2, int VAR6);
void FUN9 (struct VAR2 *VAR2, enum target_signal VAR7);
void FUN10 (struct VAR2 *VAR2);

do { struct VAR2 *VAR8 = (VAR9); \
FUN11 ("" VAR10, VAR8->VAR6, VAR8 , ##VAR11); } while (0)

void FUN12 (struct VAR1 *VAR1, int VAR12);
struct VAR1 *FUN13 (struct VAR2 *VAR2, mach_port_t VAR13, int VAR3);
struct VAR1 *FUN14 (struct VAR1 *VAR1);
int FUN15 (struct VAR1 *VAR1);
error_t FUN16 (struct VAR1 *VAR1, VAR14 * VAR13);
error_t FUN17 (struct VAR1 *VAR1, mach_port_t VAR13);
static mach_port_t FUN18 (struct VAR1 *VAR1);
void FUN19 (struct VAR1 *VAR1, mach_port_t VAR15);
void FUN20 (struct VAR1 *VAR1);
int FUN21 (struct VAR1 *VAR1, int VAR16);


FUN22 (FUN23 (VAR17, VAR2->VAR6, &VAR18), \
(VAR19 = VAR2->VAR20->VAR13, 0), 0, \
VAR18 ? (VAR21) : VAR22)


(FUN3 (VAR2) \
? ({ error_t VAR23; \
FUN5 (VAR2); \
VAR23 = FUN24 (VAR2, VAR21); \
FUN4 (VAR2); \
VAR23; }) \
: VAR22)



struct VAR24
{
int VAR25;		
int VAR26, VAR27;
mach_port_t VAR28;	
mach_port_t VAR29;		
};


struct VAR30
{
struct target_waitstatus VAR31;	
struct exc_state VAR32;	
struct VAR1 *VAR33;	
int VAR34;		
};


struct VAR2
{


struct VAR1 *VAR20;		
struct VAR1 *VAR35;	


int VAR36;

pid_t VAR6;			

struct inf_wait VAR37;	


struct VAR1 *VAR38;


struct VAR1 *VAR39;

mach_port_t VAR40;	


unsigned int VAR41:1;


unsigned int VAR42:1;


unsigned int VAR43:1;


unsigned int VAR44:1;


unsigned int VAR45:1;


unsigned VAR46;




int VAR47;


int VAR48;


int VAR49;
int VAR50;
int VAR51;


int VAR52;


int VAR53;
};


int
FUN25 (struct VAR1 *VAR1)
{
return VAR1->VAR2->VAR6;
}