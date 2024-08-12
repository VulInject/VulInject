int  FUN1(1, 0) (*VAR1)(const char *VAR2, va_list VAR3) = NULL;


enum VAR4 {
VAR5 = 0,
VAR6,
VAR7,
VAR8
};


struct VAR9 {
struct VAR10		**VAR11;
struct VAR10		*VAR12;
struct ia_css_stream_config	VAR13;
int				VAR14;
struct VAR15		*VAR16[VAR17];
struct VAR15		**VAR18[VAR17];
struct ia_css_pipe_config	VAR19[VAR17];
};


struct VAR20 {
enum ia_sh_css_modes		VAR21;
u32		       VAR22;		
enum ia_css_irq_type           VAR23;
struct sh_css_stream_seed      VAR24[VAR25];
struct VAR26	       *VAR27;	
struct ia_css_env	       VAR28;	
};

static bool VAR29;	
static struct sh_css_save VAR30;




(VAR31 * (VAR32 + 2))

struct VAR33 {
bool VAR34;
enum ia_css_buffer_type VAR35;
struct VAR36 *VAR37;
hrt_address VAR38;
};

static struct sh_css_hmm_buffer_record VAR39[VAR40];


static bool VAR41;



static int
FUN2(struct VAR15 *VAR42);

static int
FUN3(struct VAR10 *VAR12);




static int
FUN4(struct VAR15 *VAR42,
enum ia_css_frame_format VAR43);


static void
FUN5(struct VAR44 *VAR45);

static void
FUN6(void);

static int
FUN7(unsigned int *VAR46, enum ia_css_pipe_version VAR47);

static bool
FUN8(const struct VAR15 *VAR42);

static bool
FUN9(const struct VAR15 *VAR42);

static int FUN10(
struct VAR48 *VAR49,
struct VAR48 *VAR50,
struct VAR48 *VAR51,
struct VAR52 *VAR53);

static void FUN11(struct VAR52
*VAR53);

static bool
FUN12(const struct ia_css_resolution VAR54,
const struct ia_css_resolution VAR55);

static bool FUN13(const struct VAR15 *VAR42);

static int
FUN14(struct VAR15 *VAR42);

static
int FUN15(
struct VAR15 *VAR42,
struct VAR48 *VAR56,
unsigned int VAR57);

static int
FUN16(struct VAR15 *VAR42,
struct VAR48 *VAR56,
unsigned int VAR57);

static int
FUN17(struct VAR15 *VAR42);

static int
FUN18(struct VAR15 *VAR42);

static int
FUN19(struct VAR15 *VAR42);

static int
FUN20(struct VAR15 *VAR42);

static bool FUN21(struct VAR15 *VAR42);

static int
FUN22(struct VAR15 *VAR42,
struct VAR58 *VAR59, unsigned int VAR57);

static int
FUN23(struct VAR15 *VAR42,
struct VAR58 *VAR60, enum ia_css_frame_format VAR43);

static int
FUN24(struct VAR15 *VAR42,
struct VAR58 *VAR61, unsigned int VAR57);

static int
FUN25(struct VAR15 *VAR42, bool VAR62);

static void
FUN26(void);

static int
FUN27(const struct VAR15 *VAR42,
unsigned int *VAR63);

static void
FUN28(unsigned int VAR64);

static int
FUN29(struct VAR10 *VAR12);

static int
FUN30(struct VAR10 *VAR12);

static int
FUN31(struct VAR15 *VAR42);

static int
FUN32(struct VAR15 *VAR42);

static int
FUN33(struct VAR15 *VAR42,
unsigned int VAR65,
struct VAR58 *VAR61);

static int
FUN34(struct VAR15 *VAR42);

static int
FUN35(struct VAR15 *VAR42);

static int
FUN36(struct VAR15 *VAR42);

static unsigned int
FUN37(unsigned int VAR66);

static struct VAR67 *FUN38(
const struct VAR15 *VAR42);

static struct VAR67 *
FUN39(const struct VAR15 *VAR42);

static struct VAR67 *
FUN40(const struct VAR15 *VAR42);

static void
FUN41(void);

static void
FUN42(void);

static void
FUN43(struct VAR33 *VAR68);

static struct VAR33
*FUN44(struct VAR36 *VAR37,
enum ia_css_buffer_type VAR35,
hrt_address VAR38);

static struct VAR33
*FUN45(ia_css_ptr VAR69,
enum ia_css_buffer_type VAR35);

static unsigned int FUN46(const struct
VAR70 *VAR71);
static unsigned int FUN47(const struct
VAR70 *VAR71);
static void FUN48(struct VAR15 *VAR42,
unsigned int *VAR72, unsigned int *VAR73);


static void
FUN49(struct VAR15 *VAR42)
{
if (!VAR42) {
FUN50("");
return;
}

if (VAR42->VAR74)
FUN51(VAR42->VAR74);
VAR42->VAR74 = NULL;
}