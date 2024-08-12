};
FUN1(VAR1, VAR2);


struct VAR3 {
uint8_t			VAR4[VAR5];
uint8_t			VAR6[VAR5];
uint32_t		VAR7;
uint32_t		VAR8;
uint32_t		VAR9;
uint32_t		VAR10;
} __packed;



struct VAR11 {
FUN2(VAR11)	 VAR12;
uint8_t			 VAR13[VAR14];
struct VAR15		*VAR16;
};


struct VAR17 {
struct VAR18	*VAR19;

evtchn_port_t		 VAR20;
xen_intr_handle_t	 VAR21;

struct VAR3		*VAR3;

struct xs_msg		 VAR22[10];
struct VAR2		*VAR23;

struct xs_msgq		 VAR24;
struct xs_msgq		 VAR25;
struct xs_msgq		 VAR26;

volatile uint		 VAR27;

const char		*VAR28;
const char		*VAR29;

struct mutex		 VAR30;	
struct mutex		 VAR31;	
struct mutex		 VAR32;	

FUN1(, VAR11)	 VAR33;
struct mutex		 VAR34;
struct xs_msg		 VAR35;
struct VAR36		*VAR37;

struct rwlock		 VAR38;
};

struct VAR2 *
FUN3(struct VAR17 *, int);
void	FUN4(struct VAR17 *, struct VAR2 *);
int	FUN5(struct VAR17 *, void *, VAR39);
int	FUN6(struct VAR17 *, void *, VAR39);
void	FUN7(void *);
void	FUN8(struct VAR17 *, int);
int	FUN9(struct VAR40 *, VAR41 *, int);
int	FUN10(struct VAR40 *, struct VAR2 *, struct VAR42 *, int);
struct VAR2 *
FUN11(struct VAR40 *, VAR43);
int	FUN12(struct VAR40 *, struct VAR2 *, struct VAR42 **,
int *);
int	FUN13(struct VAR17 *, struct VAR2 *);

int
FUN14(struct VAR18 *VAR44)
{
struct xen_hvm_param VAR45;
struct VAR17 *VAR46;
paddr_t VAR47;
int VAR48;

if ((VAR46 = malloc(sizeof(*VAR46), VAR49, VAR50 | VAR51)) == NULL) {
FUN15("");
return (-1);
}
VAR44->VAR52 = VAR46;
VAR46->VAR19 = VAR44;


memset(&VAR45, 0, sizeof(VAR45));
VAR45.VAR53 = VAR54;
VAR45.VAR55 = VAR56;
if (FUN16(VAR44, VAR57, 2, VAR58, &VAR45)) {
FUN15("");
goto VAR59;
}
VAR46->VAR20 = VAR45.VAR60;

FUN15("", VAR46->VAR20);


memset(&VAR45, 0, sizeof(VAR45));
VAR45.VAR53 = VAR54;
VAR45.VAR55 = VAR61;
if (FUN16(VAR44, VAR57, 2, VAR58, &VAR45))
goto VAR59;
VAR47 = FUN17(VAR45.VAR60);

VAR46->VAR3 = FUN18(VAR62, &VAR63, &VAR64, &VAR65);
if (VAR46->VAR3 == NULL)
goto VAR59;

VAR47 |= VAR66;
FUN19((VAR67)VAR46->VAR3, VAR47, VAR68 | VAR69);
FUN20(FUN21());

if (FUN22(VAR46->VAR20, &VAR46->VAR21, 0, VAR70, VAR46,
VAR44->VAR71.VAR72))
goto VAR73;

VAR46->VAR28 = "";
VAR46->VAR29 = "";

FUN23(&VAR46->VAR24);
FUN23(&VAR46->VAR25);
FUN23(&VAR46->VAR26);
for (VAR48 = 0; VAR48 < FUN24(VAR46->VAR22); VAR48++)
FUN25(&VAR46->VAR24, &VAR46->VAR22[VAR48], VAR74);

FUN26(&VAR46->VAR30, VAR75);
FUN26(&VAR46->VAR31, VAR75);
FUN26(&VAR46->VAR32, VAR75);

FUN27(&VAR46->VAR38, "");

VAR46->VAR37 = FUN28("", 1, VAR75, 0);

FUN26(&VAR46->VAR34, VAR75);
FUN23(&VAR46->VAR33);

VAR46->VAR35.VAR76 = malloc(VAR77, VAR49,
VAR51 | VAR50);
if (VAR46->VAR35.VAR76 == NULL)
goto VAR73;
VAR46->VAR35.VAR78 = VAR77;

return (0);

VAR73:
FUN29((VAR67)VAR46->VAR3, VAR62);
FUN20(FUN21());
FUN30(VAR46->VAR3, VAR62, &VAR63, &VAR64);
VAR46->VAR3 = NULL;
VAR59:
free(VAR46, sizeof(*VAR46), VAR49);
VAR44->VAR52 = NULL;
return (-1);
}