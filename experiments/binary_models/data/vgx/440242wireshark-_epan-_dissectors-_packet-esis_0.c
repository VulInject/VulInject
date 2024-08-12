void FUN1(void);


static int  VAR1        = -1;

static int  VAR2      = -1;
static int  VAR3    = -1;
static int  VAR4   = -1;
static int  VAR5  = -1;
static int  VAR6      = -1;
static int  VAR7  = -1;
static int  VAR8  = -1;
static int  VAR9  = -1;

static int VAR10 = -1;
static int VAR11 = -1;
static int VAR12 = -1;
static int VAR13 = -1;
static int VAR14 = -1;
static int VAR15 = -1;
static int VAR16 = -1;
static int VAR17 = -1;
static int VAR18 = -1;

static gint VAR19              = -1;
static gint VAR20    = -1;
static gint VAR21      = -1;
static gint VAR22    = -1;
static gint VAR23   = -1;


static expert_field VAR24 = VAR25;
static expert_field VAR26 = VAR25;
static expert_field VAR27 = VAR25;
static expert_field VAR28 = VAR25;

static dissector_handle_t VAR29;

static const value_string VAR30[] = {
{ VAR31, ""},
{ VAR32, ""},
{ VAR33,  ""},
{ 0,             NULL} };







static void
FUN2( guint8 VAR34, VAR35 *VAR36, VAR37 *VAR38, VAR39 *VAR40) {
VAR37 *VAR41;
int         VAR42  = 0;
guint       VAR43, VAR44;

VAR45  *VAR46;

VAR42 += VAR47;

VAR46 = FUN3( VAR38, VAR11, VAR36, VAR42, 1, VAR48, &VAR43);
VAR34--;
VAR42++;

VAR41 = FUN4( VAR46, VAR20 );
while ( VAR43-- > 0 ) {
FUN3(VAR41, VAR13, VAR36, VAR42, 1, VAR48, &VAR44);
VAR42++;
FUN5(VAR41, VAR14, VAR36, VAR42, VAR44, FUN6( VAR40->VAR49, VAR36, VAR42, VAR44 ) );
VAR42 += VAR44;
VAR34    -= ( VAR44 + 1 );
}
FUN7( VAR34, VAR36, VAR42, VAR38, VAR40 );

}